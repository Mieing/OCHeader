@class UIImageView, IESECGradientView, UIView, UILabel, IESECUIImageView;

@interface IESECMallVideoPlayer : UIView

@property (retain, nonatomic) UIView *playerView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIView *playStatusView;
@property (retain, nonatomic) UIView *playIconBackgroundView;
@property (retain, nonatomic) IESECUIImageView *playIconImageView;
@property (retain, nonatomic) UILabel *videoDescLabel;
@property (retain, nonatomic) IESECGradientView *gradientView;
@property (retain, nonatomic) IESECGradientView *fullGradientView;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupViews;
- (void)updateWithModel:(id)a0;

@end
