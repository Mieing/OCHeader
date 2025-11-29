@class AFDColorRingTapGestureRecognizer, AFDColorRingDisplayConfig, AFDColorRingGradientView, UIView;
@protocol _TtP9AWELottie13AWELottieView_, AFDColorRingViewInternalDelegate;

@interface AFDColorRingView : UIView

@property (retain, nonatomic) AFDColorRingGradientView *staticRingView;
@property (retain, nonatomic) UIView<_TtP9AWELottie13AWELottieView_> *lottieView;
@property (retain, nonatomic) AFDColorRingTapGestureRecognizer *tapGesture;
@property (retain, nonatomic) AFDColorRingDisplayConfig *displayConfig;
@property (nonatomic) BOOL isAnimating;
@property (weak, nonatomic) id<AFDColorRingViewInternalDelegate> internalDelegate;

+ (id)viewWithDisplayConfig:(id)a0;

- (void)startAnimationWithType:(long long)a0;
- (id)initWithDisplayConfig:(id)a0;
- (void)p_setupStaticView;
- (void)p_setupGestureRecognizer;
- (void)p_handleTap:(id)a0;
- (void)p_adjustRingPropertiesForCurrentSize;
- (void)p_setupLottieView;
- (void)p_updateLottieOptions:(long long)a0;
- (void)updateDisplayConfig:(id)a0;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)prepareForReuse;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
