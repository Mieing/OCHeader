@class NSTimer, BDASplashButtonTouchModel, UIView, AWECommerceSplashSensitivityView, NSString, UIImageView, BDImageView, UIButton, UILabel;

@interface AWECommerceSplashNormalButtonStyleView : AWECommerceSplashStyleBaseView {
    BOOL _isConversionViewsCanShow;
    BOOL _isArrowImageCanShow;
}

@property (retain, nonatomic) UIButton *conversionContainerButton;
@property (retain, nonatomic) UILabel *conversionHintLabel;
@property (retain, nonatomic) UIImageView *conversionArrowImageView;
@property (nonatomic) long long conversionContainerButtonWidth;
@property (nonatomic) long long conversionContainerButtonHeight;
@property (retain, nonatomic) BDImageView *splashGuideImageView;
@property (retain, nonatomic) UIView *buttonOuterView;
@property (retain, nonatomic) NSTimer *breathTimer;
@property (retain, nonatomic) UIImageView *lightenImageView;
@property (retain, nonatomic) BDASplashButtonTouchModel *touchModel;
@property (retain, nonatomic) AWECommerceSplashSensitivityView *sensitivityView;
@property (copy, nonatomic) NSString *buttonColor;

- (void)configWithModel:(id)a0;
- (id)createCubicBezierAnimationWith:(id)a0 duration:(double)a1 timingFunction:(id)a2;
- (void)addCustomView;
- (void)triggerSplashActionWithTiming:(unsigned long long)a0;
- (void)onConversionButtonClicked:(id)a0;
- (void)setupSensitivityInfo;
- (BOOL)shouldUseNewTransferStyle;
- (void)setupSplashGuideImageView:(BOOL)a0;
- (void)setButtonDefaultPosition:(double)a0 buttonDefaultLeftSpace:(double)a1 buttonDefaultRightSpace:(double)a2;
- (void)setButtonPosition:(double)a0 newButtonHeight:(double)a1 firstlabelleftSpace:(double)a2 firstlabelRightSpace:(double)a3 buttonImageInterval:(long long)a4;
- (void)addOuterBorderWithButton:(id)a0;
- (void)removeButtonOuterView;
- (void)adjustSkipButtonLocationWithModel:(id)a0;
- (void)stopBreathAnimation;
- (void)startSplashAppearAnimationIfNeeded;
- (void)showLightenAnimation;
- (void)transferOrHideStyleView;
- (long long)generateClickPointConversionIndentWithPoint:(struct CGPoint { double x0; double x1; })a0 targetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)shouldShowBreathAnimation;
- (void)onAddtionTapViewTapped:(id)a0;
- (BOOL)checkPointIsValid:(struct CGPoint { double x0; double x1; })a0;
- (void)showBreathAnimationIfNeededWithInterval:(double)a0;
- (void)showBreathAnimation;
- (void)showFinishAnimationWithTransferDuration:(double)a0 disappearDuration:(double)a1 width:(double)a2 height:(double)a3 newPosition:(struct CGPoint { double x0; double x1; })a4 cornerRadius:(double)a5 backgroundColor:(id)a6 type:(long long)a7;
- (void)hideViewExceptHintButtonWithDuration:(double)a0;
- (void)showSplashFinishAnimationWithTransferDuration:(double)a0 disappearDuration:(double)a1 targetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)setConversionViewHidden:(BOOL)a0;
- (void).cxx_destruct;
- (void)reset;

@end
