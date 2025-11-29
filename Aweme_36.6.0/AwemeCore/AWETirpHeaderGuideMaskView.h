@class LOTAnimationView, CAGradientLayer, UILabel;

@interface AWETirpHeaderGuideMaskView : UIView

@property (retain, nonatomic) CAGradientLayer *gradientsLayer;
@property (retain, nonatomic) LOTAnimationView *animationView;
@property (retain, nonatomic) UILabel *titleLabel;

+ (BOOL)needShowGuideMask;

- (void)onClickAction;
- (void)hideGuideMask;
- (void)updateLayout;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
