@class CAGradientLayer, UIImageView, CAShapeLayer, UIImage;

@interface MAAngleIndicator : UIView

@property (nonatomic) double radius;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (retain, nonatomic) UIImageView *overlapImageView;
@property (nonatomic) double angle;
@property (retain, nonatomic) UIImage *overlapImage;

- (void)updateAngle;
- (void).cxx_destruct;
- (id)initWithRadius:(double)a0;

@end
