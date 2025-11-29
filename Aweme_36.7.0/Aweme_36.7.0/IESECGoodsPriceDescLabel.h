@class UILabel, CAShapeLayer;

@interface IESECGoodsPriceDescLabel : UIView

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) CAShapeLayer *backgroundLayer;

- (void)setCornerRadiusWithTopLeft:(double)a0 topRight:(double)a1 bottomLeft:(double)a2 bottomRight:(double)a3;
- (void).cxx_destruct;
- (void)setText:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
