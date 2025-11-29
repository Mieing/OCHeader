@class CAGradientLayer;

@interface AWEDetailTrendTagGradientLabel : UILabel

@property (retain, nonatomic) CAGradientLayer *gradientLayer;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setGradientColors:(id)a0;
- (void)setupUI;
- (void)updateGradient;

@end
