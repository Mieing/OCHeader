@class UIImageView, UILabel;

@interface AWELuckyCatRewardBubbleView : UIView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;

+ (Class)layerClass;

- (void)setIconImageURLString:(id)a0;
- (void)setupGradient;
- (void)playFlashAnimation;
- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (void)setTextColor:(id)a0;
- (id)gradientLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
