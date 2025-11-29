@class CAReplicatorLayer, CAShapeLayer;

@interface AWEIMRadarAnimationView : UIView

@property (retain, nonatomic) CAReplicatorLayer *replicatorLayer;
@property (retain, nonatomic) CAShapeLayer *circleLayer;

- (void)setRadarCircleColor:(id)a0;
- (void)p_setupLayers;
- (void)setRadarCircleCount:(long long)a0;
- (void)startAnimation;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)cancelAnimation;

@end
