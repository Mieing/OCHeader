@class LOTAnimationView, UILabel, UIView;

@interface AWEFeedLongPressRatePlayView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) LOTAnimationView *playRateLottieView;
@property (retain, nonatomic) UILabel *rateDescLabel;

- (void)setUI;
- (id)initWithRateValue:(long long)a0;
- (void)showRatePlayLottieOnView:(id)a0;
- (void)hiddeRatePlayLottie;
- (void)updateRVUIWithTopOffset:(double)a0 rateTitle:(id)a1;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
