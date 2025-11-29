@class LOTAnimationView, UILabel, UIView, NSLayoutConstraint;

@interface AWEShakeShareAwemeNavigationBarTitleView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *subtitleContainerView;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) LOTAnimationView *searchingLottieView;
@property (retain, nonatomic) NSLayoutConstraint *emptySubtitleHeightConstraint;

- (void)initView;
- (void)updateViewWithSubtitle:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupLayout;

@end
