@class ACCLightningRecordHandsFreeView, UIBezierPath, NSString, UIView;
@protocol ACCRecordFlowControlService, ACCRecordSwitchModeService, ACCRecordPropService, AWEStudioBusinessCameraFlowControlProtocol, ACCRecorderViewContainer, ACCShootSourceService, AWERecordFlowSourceService, ACCCameraService;

@interface ACCRecordHandsFreeComponent : ACCFeatureComponent <ACCShootSourceServiceSubscriber, ACCRecordFlowControlServiceSubscriber, AWEStudioBusinessCameraBasicActionProtocol, AWERecordFlowSourceEventService, ACCRecordSwitchModeServiceSubscriber>

@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCShootSourceService> shootSourceService;
@property (retain, nonatomic) id<ACCRecordFlowControlService> flowControlService;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (retain, nonatomic) id<AWEStudioBusinessCameraFlowControlProtocol> cameraServiceFlowContext;
@property (weak, nonatomic) id<AWERecordFlowSourceService> recordFlowSourceService;
@property (retain, nonatomic) ACCLightningRecordHandsFreeView *handsFreeView;
@property (retain, nonatomic) UIView *handsFreeDotsView;
@property (retain, nonatomic) UIBezierPath *handsFreeHotAera;
@property (nonatomic, getter=isHolding) BOOL holding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)switchModeServiceWillChangeToMode:(id)a0 oldMode:(id)a1;
- (void)cameraFlowActionCompletion:(BOOL)a0;
- (void)cameraFlowActionBegin;
- (void)cameraFlowActionStepChangedWith:(unsigned long long)a0 currentStep:(unsigned long long)a1;
- (void)flowControlServiceWillStartRecordFlow:(unsigned long long)a0 source:(id)a1;
- (void)flowControlServiceFlowTypeDidChange:(unsigned long long)a0 from:(unsigned long long)a1;
- (void)loadComponentView;
- (void)componentDidMount;
- (void)bindServices:(id)a0;
- (void)shootSourceServiceStartTouch:(id)a0;
- (void)shootSourceServiceStartHold:(id)a0;
- (void)shootSourceServiceEndTouch:(id)a0;
- (void)shootSourceServiceMoveTouch:(id)a0;
- (void)shootSourceServiceEndTouchIntercepter:(id)a0;
- (void)captureAnimationViewTouchBegan:(id)a0;
- (void)captureAnimationViewTouchMoved:(id)a0;
- (void)captureAnimationViewTouchEnd:(id)a0;
- (id)handsFreeTrackModeName;
- (void)updateAssistantButtonState:(id)a0;
- (void)updateHandsFreeViewFrame;
- (void)updateHansFreeViewVisible;
- (void)updateHandsFreeDotsViewHidden:(BOOL)a0;
- (void)showHandsFreeButton;
- (void).cxx_destruct;

@end
