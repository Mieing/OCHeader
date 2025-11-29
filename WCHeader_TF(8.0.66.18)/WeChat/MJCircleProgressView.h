@class CALayer, UIColor, CAShapeLayer;

@interface MJCircleProgressView : CALayer

@property (retain, nonatomic) CAShapeLayer *progressLayer;
@property (retain, nonatomic) CALayer *progressBackgroundLayer;
@property (nonatomic) double progress;
@property (nonatomic) double lineWidth;
@property (retain, nonatomic) UIColor *progressTintColor;
@property (retain, nonatomic) UIColor *trackTintColor;

- (void)showProgressLayer;
- (void)hideProgressLayer;
- (id)circleLayerWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 startAngle:(double)a1 endAngle:(double)a2 lineWidth:(double)a3;
- (void)updateProgressLayerWithProgress:(double)a0 animated:(BOOL)a1;
- (void).cxx_destruct;

@end
