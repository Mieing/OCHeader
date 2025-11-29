@class NSString;
@protocol ACCRecordSwitchModeService, ACCRecordFlowControlService, ACCRecordPropService, ACCRecordSystemLivePhotoService, ACCRecorderViewContainer, ACCShootSourceService, AWEStudioRawTypePropServiceProtocol, ACCRecordFlowService;

@interface AWEIMRecordFlowControlComponent : ACCFeatureComponent <ACCShootSourceServiceSubscriber, ACCRecordFlowControlServiceSubscriber>

@property (retain, nonatomic) id<ACCRecordFlowService> flowService;
@property (retain, nonatomic) id<ACCShootSourceService> shootSourceService;
@property (retain, nonatomic) id<ACCRecordFlowControlService> flowControlService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCRecordSystemLivePhotoService> systemLivePhotoService;
@property (retain, nonatomic) id<AWEStudioRawTypePropServiceProtocol> rawTypePropService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)flowControlServiceWillStartRecordFlow:(unsigned long long)a0 source:(id)a1;
- (void)flowControlServiceFlowTypeDidChange:(unsigned long long)a0 from:(unsigned long long)a1;
- (unsigned long long)preferredLoadPhase;
- (void)bindServices:(id)a0;
- (void)shootSourceServiceStartTouch:(id)a0;
- (void)shootSourceServiceStartHold:(id)a0;
- (void)shootSourceServiceEndTouch:(id)a0;
- (void)shootSourceServiceComplete:(id)a0;
- (unsigned long long)flowTypeWithBeganSource:(id)a0;
- (void)startFlowWithType:(unsigned long long)a0 source:(id)a1;
- (void)stopFlowWithType:(unsigned long long)a0 source:(id)a1;
- (unsigned long long)flowTypeWithHoldSource:(id)a0;
- (unsigned long long)flowTypeWithEndedSource:(id)a0;
- (unsigned long long)flowTypeWithCompleteSource:(id)a0;
- (BOOL)enableMixPhotoRecordFlowRefactor;
- (BOOL)systemLivePhoto;
- (void).cxx_destruct;

@end
