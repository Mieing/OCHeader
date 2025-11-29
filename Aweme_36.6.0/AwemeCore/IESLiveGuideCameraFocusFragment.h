@class NSTimer, NSString, IESLiveExposureSlider, IESLiveImageView, UIView, CAKeyframeAnimation, UITapGestureRecognizer;

@interface IESLiveGuideCameraFocusFragment : IESLiveGuideComponent <IESLIveCameraFocusAction, IESLiveGuideActions, UIGestureRecognizerDelegate, CAAnimationDelegate>

@property (retain, nonatomic) UIView *tapView;
@property (retain, nonatomic) UITapGestureRecognizer *singleTapGesture;
@property (retain, nonatomic) IESLiveImageView *focusImageView;
@property (retain, nonatomic) IESLiveExposureSlider *exposureSlider;
@property (retain, nonatomic) CAKeyframeAnimation *fadeOutAnimation;
@property (nonatomic) long long removeActionVersion;
@property (retain, nonatomic) NSTimer *exposureSliderHideTimer;
@property (nonatomic) BOOL isHandleExposureCompensation;
@property (nonatomic) BOOL isKeyboardShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)changeExposureBiasWithRatio:(double)a0;
- (void)liveTypeDidChange:(unsigned long long)a0;
- (void)cancelExposureSliderHideTimer;
- (void)hideFocusAndExposureSlider;
- (void)cancelExposureSliderFadeOutAnimation;
- (void)startExposureSliderHideTimerWithVersion:(long long)a0;
- (void)startExposureSliderFadeOutAnimation;
- (struct CGPoint { double x0; double x1; })convertHorizontalFocusPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)enableCameraFocus:(BOOL)a0 inView:(id)a1;
- (void)removeCameraFocusInView:(id)a0;
- (void)addFocusGestureIfNeed;
- (void)handleDoseNothingGesture:(id)a0;
- (void)handleTapFocusGesture:(id)a0;
- (void)focusWithFocusCenter:(struct CGPoint { double x0; double x1; })a0 showCenter:(struct CGPoint { double x0; double x1; })a1;
- (void)keyboardDidHide:(id)a0;
- (void).cxx_destruct;
- (double)topOffset;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)dealloc;
- (void)keyboardDidShow:(id)a0;
- (void)handlePanGesture:(id)a0;
- (void)handleTapGesture:(id)a0;
- (id)cameraContainerView;

@end
