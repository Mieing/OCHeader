@class LOTAnimationView, NSString;

@interface DYLoginNextActionButton : DUXButton

@property (nonatomic) BOOL breathAnimating;
@property (retain, nonatomic) LOTAnimationView *lottieView;
@property (nonatomic) BOOL hasBeenClicked;
@property (nonatomic) BOOL hasShownHintAnim;
@property (nonatomic) long long status;
@property (copy, nonatomic) NSString *successTitle;
@property (copy, nonatomic) NSString *normalTitle;
@property (copy, nonatomic) NSString *loadingTitle;
@property (copy, nonatomic) NSString *loadingAccessibilityLabel;
@property (copy, nonatomic) NSString *successAccessibilityLabel;
@property (nonatomic) BOOL canShowBreathAnimation;
@property (copy, nonatomic) id /* block */ tapBlockIncludeDisabled;
@property (nonatomic) BOOL shouldEnlargeBtn;
@property (nonatomic) BOOL shouldShowNewLoading;
@property (nonatomic) BOOL shouldShowNewSmallLoading;
@property (retain, nonatomic) LOTAnimationView *hintView;
@property (nonatomic) BOOL hasLoadLottie;

- (void)stopBreathAnimation;
- (void)showBreathAnimation;
- (id)initWithNormalTitle:(id)a0 loadingTitle:(id)a1;
- (id)loadingAnimation;
- (id)initWithNormalTitle:(id)a0 successTitle:(id)a1;
- (void)tapBlockIncludeDisabledAction;
- (void)prepareForHintAnimation;
- (void)setAlpha:(double)a0 withAnimateCompletion:(id /* block */)a1;
- (id)initWithNormalTitle:(id)a0 loadingTitle:(id)a1 successTitle:(id)a2;
- (void)changeLoadingTitle:(id)a0;
- (void)stopLoaingWithError:(id)a0;
- (void)buttonStatusChanged:(long long)a0;
- (id)accessibilityLabel;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (void)startLoading;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reset;
- (void)layoutSubviews;
- (void)setEnabled:(BOOL)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
