@class NSString, IESLiveExposureSlider, IESLiveImageView, CAKeyframeAnimation, NSTimer, UITapGestureRecognizer;

@interface IESLiveCameraFocusFragment : IESLiveRoomComponent <CAAnimationDelegate, IESLiveAnchorCameraFocusService>

@property (retain, nonatomic) UITapGestureRecognizer *singleTapGesture;
@property (retain, nonatomic) IESLiveImageView *focusImageView;
@property (retain, nonatomic) IESLiveExposureSlider *exposureSlider;
@property (retain, nonatomic) CAKeyframeAnimation *fadeOutAnimation;
@property (nonatomic) long long removeActionVersion;
@property (retain, nonatomic) NSTimer *exposureSliderHideTimer;
@property (nonatomic) BOOL isHandleExposureCompensation;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } activeRect;
@property (nonatomic) BOOL isFocusing;
@property (nonatomic) BOOL isKeyboardShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentMount;
- (void)changeExposureBiasWithRatio:(double)a0;
- (void)cancelExposureSliderHideTimer;
- (void)hideFocusAndExposureSlider;
- (void)cancelExposureSliderFadeOutAnimation;
- (void)startExposureSliderHideTimerWithVersion:(long long)a0;
- (void)startExposureSliderFadeOutAnimation;
- (BOOL)gestureShouldBegin;
- (void)focusWithFocusCenter:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })convertHorizontalFocusPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)keyboardDidHide:(id)a0;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)dealloc;
- (BOOL)shouldReceiveTouch:(id)a0;
- (void)keyboardDidShow:(id)a0;
- (void)handlePanGesture:(id)a0;
- (void)handleTapGesture:(id)a0;

@end
