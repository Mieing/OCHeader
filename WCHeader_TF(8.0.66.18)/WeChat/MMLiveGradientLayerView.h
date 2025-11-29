@class NSArray, CAGradientLayer, NSString;

@interface MMLiveGradientLayerView : UIView

@property (readonly, nonatomic) CAGradientLayer *gradientLayer;
@property (copy, nonatomic) NSArray *colors;
@property (copy, nonatomic) NSArray *locations;
@property (nonatomic) struct CGPoint { double x0; double x1; } startPoint;
@property (nonatomic) struct CGPoint { double x0; double x1; } endPoint;
@property (copy, nonatomic) NSString *type;

+ (Class)layerClass;

- (void)setUIColors:(id)a0;

@end
