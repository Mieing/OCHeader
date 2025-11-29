@class CAGradientLayer;

@interface BDSCGradientColorView : UIView

@property (retain, nonatomic) CAGradientLayer *gradientLayer;

- (BOOL)checkPointInvalidWithStartPoint:(struct CGPoint { double x0; double x1; })a0 endPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)configWithGradientColor:(id)a0;
- (id)initWithGradientColor:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
