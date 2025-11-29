@class UIImageView, LOTAnimationView, UILabel, UIView, CADisplayLink;

@interface AWEDCFeedSwitchPreviewSlideTipsView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIImageView *tipsIconView;
@property (retain, nonatomic) LOTAnimationView *animationView;
@property (retain, nonatomic) CADisplayLink *displayLink;

- (void)checkLottieAnimation;
- (void)setContinueDownSlidingIcon;
- (void)setContinueUpSlidingIcon;
- (void)setSlidingEnterFeedIcon;
- (void)setSlidingEnterC2Icon;
- (void)setSlidingTips:(long long)a0 tipsType:(long long)a1;
- (void)cancelRegistration;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
