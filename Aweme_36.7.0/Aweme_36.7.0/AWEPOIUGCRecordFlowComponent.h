@class UIButton, NSString, UIView;
@protocol ACCRecordPropService, ACCRecorderViewContainer, ACCRecordFlowService, ACCCaptureButtonAnimationProtocol, ACCCameraService, ACCRecordTrackService, ACCRecordSwitchModeService;

@interface AWEPOIUGCRecordFlowComponent : ACCFeatureComponent <ACCRecorderViewContainerItemsHideShowObserver, ACCRecordFlowServiceSubscriber, ACCRouterServiceSubscriber, AWECaptureButtonAnimationViewDelegate, ACCRecordFlowServiceSubscriber, ACCRecordSwitchModeServiceSubscriber, ACCCameraLifeCircleEvent>

@property (nonatomic) BOOL applicationActive;
@property (nonatomic) BOOL isFirstAppear;
@property (nonatomic) BOOL hasAddApplicationActiveNotification;
@property (nonatomic) BOOL hasTrackedPOIFirstFrame;
@property (retain, nonatomic) UIButton *recordButton;
@property (retain, nonatomic) UIButton *recordShowTipButton;
@property (retain, nonatomic) UIView<ACCCaptureButtonAnimationProtocol> *captureButtonAnimationView;
@property (weak, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCRecordFlowService> flowService;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordTrackService> trackService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentWillAppear;
- (void)componentDidAppear;
- (void)switchModeServiceDidChangeMode:(id)a0 oldMode:(id)a1;
- (void)onCameraFirstFrameDidRender:(id)a0;
- (void)flowServiceWillBeginTakePicture;
- (void)shouldItemsShow:(BOOL)a0 animated:(BOOL)a1;
- (void)flowServiceDidTakePicture:(id)a0 error:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })recordButtonFrame;
- (void)loadComponentView;
- (void)componentDidMount;
- (void)componentWillUnmount;
- (void)componentDidUnmount;
- (void)componentDidChangeStatusBarOrientation;
- (unsigned long long)preferredLoadPhase;
- (void)bindViewModel;
- (BOOL)animationShouldBegin:(id)a0;
- (void)animationDidBegin:(id)a0;
- (void)animationDidEnd:(id)a0;
- (BOOL)shouldRespondsToAnimationDidEnd:(id)a0;
- (BOOL)needBlockAnimationTouches:(id)a0;
- (void)bindServices:(id)a0;
- (void)prepareForInfiniIfNeededImage:(id)a0;
- (void)addApplicationActiveNotification;
- (void)removeApplicationActiveNotification;
- (void)restoreRecordButtonState;
- (void)trackEnterShoot;
- (void)crerateChildViews;
- (void)applicationWillResignActive:(id)a0;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive:(id)a0;

@end
