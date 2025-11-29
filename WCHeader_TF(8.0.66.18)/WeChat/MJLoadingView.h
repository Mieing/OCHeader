@class CAShapeLayer, UIView;

@interface MJLoadingView : UIView

@property (retain, nonatomic) UIView *bgMaskView;
@property (retain, nonatomic) CAShapeLayer *bgCircleLayer;
@property (retain, nonatomic) CAShapeLayer *foregroundLayer;
@property (nonatomic) float progress;

+ (id)progressLayerWithStrokeColor:(id)a0 StrokeEnd:(double)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
