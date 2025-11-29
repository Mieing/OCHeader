@class CAGradientLayer, CAShapeLayer;

@interface WCCanvasFlyingFlipSpecialAnimationView : UIView

@property (retain, nonatomic) CAShapeLayer *insideStrokeLayer;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)generateSubviews;
- (void)startSpecialAnimations;
- (void)startStrokeAnimation;
- (void)startGradientAnimation;
- (void).cxx_destruct;

@end
