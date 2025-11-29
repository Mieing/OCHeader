@class UIBezierPath, CAGradientLayer, CAShapeLayer;

@interface POIMediaListPageView : UIView

@property (retain, nonatomic) UIBezierPath *path;
@property (retain, nonatomic) CAShapeLayer *paintLayer;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (nonatomic) double radius;
@property (nonatomic) double space;
@property (nonatomic) double maxWidth;

- (double)calcPositionWithOffset:(double)a0 index:(long long)a1 previousPosition:(double)a2;
- (double)calcWidthWithOffset:(double)a0 index:(long long)a1;
- (void)paintCircle:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inPath:(id)a1;
- (void)paintCirclesWithOffset:(double)a0 number:(long long)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
