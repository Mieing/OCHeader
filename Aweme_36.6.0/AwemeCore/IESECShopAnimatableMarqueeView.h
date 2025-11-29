@class CAGradientLayer, CAShapeLayer;

@interface IESECShopAnimatableMarqueeView : UIView

@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) CAShapeLayer *rectMask;
@property (nonatomic) double radius;
@property (nonatomic) double border;

- (void)animateWithFadeInDuration:(double)a0 rotationDuration:(double)a1 fadeOutDuration:(double)a2 rotationCount:(double)a3;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)setupView;

@end
