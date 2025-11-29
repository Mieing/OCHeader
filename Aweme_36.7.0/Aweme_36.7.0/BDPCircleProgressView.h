@class CAShapeLayer, UIColor, CADisplayLink;

@interface BDPCircleProgressView : UIView

@property (retain, nonatomic) CADisplayLink *displayLink;
@property (retain, nonatomic) CAShapeLayer *progressLayer;
@property (retain, nonatomic) CAShapeLayer *backgroundLayer;
@property (nonatomic) double progress;
@property (retain, nonatomic) UIColor *progressTintColor;
@property (retain, nonatomic) UIColor *progressBackgroundColor;
@property (nonatomic) double animationDuration;
@property (nonatomic) double progressLayerLineWidth;

- (void)onUpdateAnimation:(id)a0;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setupUI;

@end
