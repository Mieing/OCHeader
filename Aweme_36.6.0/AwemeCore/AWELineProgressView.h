@class NSArray, CAGradientLayer, UIColor;

@interface AWELineProgressView : UIView

@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (nonatomic) double progressValue;
@property (nonatomic) BOOL hasCornerRadius;
@property (retain, nonatomic) NSArray *colorArrs;
@property (retain, nonatomic) UIColor *progressColor;
@property (nonatomic) unsigned long long direction;

- (void)updateProgressValue:(double)a0 totalValue:(double)a1 animated:(BOOL)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })progressViewRect;
- (double)progressViewCornerRadius;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)setProgress:(double)a0 animated:(BOOL)a1;

@end
