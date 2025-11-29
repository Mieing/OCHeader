@class UILabel, CAGradientLayer, NSString;

@interface AWELiteUGGradientTagLabel : UIView

@property (retain, nonatomic) UILabel *buttonTagLabel;
@property (retain, nonatomic) CAGradientLayer *gradientBackgroundLayer;
@property (copy, nonatomic) NSString *text;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
