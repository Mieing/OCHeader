@class UIColor, NSArray, IESECLinearGradientLayer, CAShapeLayer, UIBezierPath;

@interface IESECBorderView : UIView

@property (copy, nonatomic) NSArray *colors;
@property (copy, nonatomic) NSArray *locations;
@property (nonatomic) struct CGPoint { double x; double y; } startPoint;
@property (nonatomic) struct CGPoint { double x; double y; } endPoint;
@property (retain, nonatomic) IESECLinearGradientLayer *gradientLayer;
@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (retain, nonatomic) UIBezierPath *borderPath;
@property (nonatomic) double borderOffset;
@property (nonatomic) unsigned long long style;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) UIColor *borderColor;
@property (copy, nonatomic) id /* block */ gradientBlock;

- (void)updateGradientLayer;
- (void)setupSublayers;
- (void).cxx_destruct;
- (id)initWithStyle:(unsigned long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateBorderPath;

@end
