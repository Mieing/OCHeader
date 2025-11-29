@class NSString, CMMotionManager, UIView;
@protocol ACCScanQuestionMaskViewStudioProxy;

@interface AWEVisionQuestionComponent : AWEVisionFeatureComponent <ACCCameraScanEvent, AWEVisionComponentProtocol> {
    long long _prevOrientation;
}

@property (retain, nonatomic) UIView<ACCScanQuestionMaskViewStudioProxy> *bgMaskView;
@property (nonatomic) BOOL appeared;
@property (nonatomic) BOOL hasShownTipWhenSwitchTab;
@property (nonatomic) BOOL needBanMotionDetect;
@property (retain, nonatomic) CMMotionManager *motionManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentWillAppear;
- (void)componentDidAppear;
- (void)componentWillDisappear;
- (void)componentDidDisappear;
- (void)componentDidLoad;
- (void)prepareQuestionAI;
- (void)addMotionObserver;
- (void)animationIndicatorWithOrientation:(long long)a0;
- (BOOL)enableUseMotionManager;
- (void)checkDeviceOrientationWithGx:(double)a0 Gy:(double)a1;
- (void)checkDeviceHorizontalDegree:(double)a0;
- (double)deviceOrientationUpdateSensitivity;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformWithOrientation:(long long)a0;
- (long long)scanHorizontalAngel;
- (void)switchModeViewWillChangeToMode:(id)a0 oldMode:(id)a1;
- (void)loadCustomUI;
- (void)destroyCustomUI;
- (void)setupFlashLightFrameImp;
- (void).cxx_destruct;
- (double)deviceMotionUpdateInterval;
- (void)dealloc;

@end
