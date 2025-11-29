@class ACCNewCaptureAnimationView, AWEAnimatedRecordButton, NSString, UIView, UIButton;
@protocol ACCCameraService, ACCRecordSwitchModeService, ACCRecorderViewContainer, ACCShootSourceService, ACCRecordFlowControlService, ACCRecordPropService, ACCRecordButtonService;

@interface ACCNormalRecordButtonComponent : ACCFeatureComponent <ACCNewCaptureAnimationViewDelegate, ACCRecordSwitchModeServiceSubscriber, ACCRecordButtonServiceSubscriber, ACCShootSourceServiceSubscriber, ACCRecordFlowControlServiceSubscriber>

@property (retain, nonatomic) UIButton *placeHoldRecordButton;
@property (retain, nonatomic) ACCNewCaptureAnimationView *recordAnimationView;
@property (retain, nonatomic) UIView *circleView;
@property (retain, nonatomic) AWEAnimatedRecordButton *recordButton;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCShootSourceService> shootSourceService;
@property (retain, nonatomic) id<ACCRecordButtonService> buttonService;
@property (retain, nonatomic) id<ACCRecordFlowControlService> flowControlService;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)switchModeServiceWillChangeToMode:(id)a0 oldMode:(id)a1;
- (void)flowControlServiceWillStopRecordFlow:(unsigned long long)a0;
- (void)flowControlServiceWillCompleteRecordFlow:(unsigned long long)a0;
- (void)loadComponentView;
- (void)componentDidMount;
- (void)componentDidChangeStatusBarOrientation;
- (unsigned long long)preferredLoadPhase;
- (BOOL)needBlockAnimationTouches:(id)a0;
- (void)switchToTakePictureMode;
- (void)switchToMixHoldTapRecordMode:(id)a0;
- (void)bindServices:(id)a0;
- (void)shootSourceServiceStartHold:(id)a0;
- (void)shootSourceServiceStartTouchIntercepter:(id)a0;
- (void)captureAnimationViewTouchBegan:(id)a0;
- (void)captureAnimationViewTouchMoved:(id)a0;
- (void)captureAnimationViewTouchEnd:(id)a0;
- (void)handleComponentMountCompleted;
- (void)recordButtonServiceStateDidChange;
- (void)updateButtonCenter;
- (void)updateButtonStateWithForce:(BOOL)a0;
- (double)recordButtonWidth;
- (BOOL)supportHoldRecording;
- (void).cxx_destruct;
- (void)addObserver;

@end
