@class NSString;
@protocol ACCRecordSwitchModeService, ACCRecordFlowControlService, ACCRecordPropService, ACCRecordSystemLivePhotoService, ACCRecorderViewContainer, ACCShootSourceService, AWEStudioRawTypePropServiceProtocol, ACCRecordFlowService;

@interface ACCRecordFlowControlComponent : ACCFeatureComponent <ACCShootSourceServiceSubscriber, ACCRecordFlowControlServiceSubscriber>

@property (retain, nonatomic) id<ACCRecordFlowService> flowService;
@property (retain, nonatomic) id<ACCRecordFlowControlService> flowControlService;
@property (retain, nonatomic) id<ACCShootSourceService> shootSourceService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCRecordSystemLivePhotoService> systemLivePhotoService;
@property (retain, nonatomic) id<AWEStudioRawTypePropServiceProtocol> rawTypePropService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)flowControlServiceFlowTypeDidChange:(unsigned long long)a0 from:(unsigned long long)a1;
- (unsigned long long)preferredLoadPhase;
- (void)bindServices:(id)a0;
- (void)shootSourceServiceStartTouch:(id)a0;
- (void)shootSourceServiceStartHold:(id)a0;
- (void)shootSourceServiceEndTouch:(id)a0;
- (void)shootSourceServiceComplete:(id)a0;
- (void)shootSourceServiceStartTouchIntercepter:(id)a0;
- (BOOL)inOpenCreativePath;
- (unsigned long long)flowTypeWithCompleteSource:(id)a0;
- (BOOL)systemLivePhoto;
- (unsigned long long)p_flowTypeWithBeganSource:(id)a0;
- (void)p_startFlowWithType:(unsigned long long)a0 source:(id)a1;
- (void)p_stopFlowWithType:(unsigned long long)a0 source:(id)a1;
- (unsigned long long)p_flowTypeWithHoldSource:(id)a0;
- (unsigned long long)p_flowTypeWithEndedSource:(id)a0;
- (void).cxx_destruct;

@end
