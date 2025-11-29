@class ACCScanQuestionMaskView, ACCScanFlashLightView, CMMotionManager, UIView, NSString;
@protocol ACCRecordSwitchModeService, ACCRecorderViewContainer, ACCCameraService;

@interface ACCRecordQuestionModeComponent : ACCFeatureComponent <ACCRecordSwitchModeServiceSubscriber, ACCCameraScanEvent> {
    long long _prevOrientation;
}

@property (weak, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (weak, nonatomic) id<ACCCameraService> cameraService;
@property (nonatomic) BOOL appeared;
@property (nonatomic) BOOL hasShownTipWhenSwitchTab;
@property (nonatomic) BOOL needBanMotionDetect;
@property (retain, nonatomic) ACCScanQuestionMaskView *bgMaskView;
@property (retain, nonatomic) ACCScanFlashLightView *flashLightView;
@property (retain, nonatomic) ACCScanFlashLightView *bottomFlashLightView;
@property (retain, nonatomic) ACCScanFlashLightView *toolbarFlashLightView;
@property (weak, nonatomic) UIView *recordButton;
@property (nonatomic) BOOL flashLightChanged;
@property (nonatomic) BOOL recordHandlerCloseTorch;
@property (nonatomic) BOOL currentFlashLightIsOn;
@property (retain, nonatomic) CMMotionManager *motionManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentWillAppear;
- (void)componentDidAppear;
- (void)componentDidDisappear;
- (void)switchModeServiceWillChangeToMode:(id)a0 oldMode:(id)a1;
- (void)loadComponentView;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (id)albumButton;
- (id)albumLabel;
- (void)appEnterBackground;
- (void)bindServices:(id)a0;
- (void)onReceivedCameraBrightnessOpenFlashlightResult:(BOOL)a0;
- (void)openFlashlight:(BOOL)a0;
- (void)trackFlashLightBtnClick:(BOOL)a0;
- (void)clickPermanentFlashLight;
- (void)resignActvie;
- (void)clickUnpermanentFlashLight;
- (void)hideQuestionUI;
- (void)prepareQuestionAI;
- (void)loadQuestionUI;
- (void)addMotionObserver;
- (void)adjustInteractionViewLayerPosition;
- (void)animationIndicatorWithOrientation:(long long)a0;
- (id)scanQRCodeButton;
- (BOOL)enableUseMotionManager;
- (void)checkDeviceOrientationWithGx:(double)a0 Gy:(double)a1;
- (void)checkDeviceHorizontalDegree:(double)a0;
- (double)deviceOrientationUpdateSensitivity;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformWithOrientation:(long long)a0;
- (long long)scanHorizontalAngel;
- (void)changeFlashLightStatus;
- (void).cxx_destruct;
- (double)deviceMotionUpdateInterval;
- (void)dealloc;
- (id)closeButton;
- (id)scanQRCodeLabel;

@end
