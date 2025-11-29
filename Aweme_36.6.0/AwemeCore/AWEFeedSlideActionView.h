@class LOTAnimationView, UIImageView, UILabel, UIView;
@protocol AWEFeedSlideActionViewResourceProvider;

@interface AWEFeedSlideActionView : UIView

@property (weak, nonatomic) id<AWEFeedSlideActionViewResourceProvider> resourceProvider;
@property (retain, nonatomic) LOTAnimationView *lottieView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *titleContainerView;
@property (retain, nonatomic) UIImageView *imageMaskView;
@property (retain, nonatomic) UIImageView *gradientImageView;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIView *imageContainerView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 rsourceProvider:(id)a1;
- (void)p_setupUI;
- (void).cxx_destruct;

@end
