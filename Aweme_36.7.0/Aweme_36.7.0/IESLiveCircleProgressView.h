@class UIColor, CAShapeLayer;

@interface IESLiveCircleProgressView : UIView

@property (retain, nonatomic) UIColor *progressColor;
@property (retain, nonatomic) UIColor *progressBackgroundColor;
@property (nonatomic) double progressWidth;
@property (nonatomic) BOOL clockwise;
@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (nonatomic) double progress;
@property (nonatomic) BOOL originalHiddenStatus;

- (id)createBackgroundLayerWithConfig:(id)a0;
- (id)createCircleShapeLayerWithConfig:(id)a0;
- (id)createGradientLayerWithConfig:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 progressConfig:(id)a1;
- (void).cxx_destruct;
- (void)setProgress:(double)a0 animated:(BOOL)a1;

@end
