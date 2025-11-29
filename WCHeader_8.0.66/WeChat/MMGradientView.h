@class NSArray, CAGradientLayer, NSString;

@interface MMGradientView : UIView

@property (retain, nonatomic) CAGradientLayer *layer;
@property (copy, nonatomic) NSArray *colors;
@property (copy, nonatomic) NSArray *locations;
@property (nonatomic) struct CGPoint { double x0; double x1; } startPoint;
@property (nonatomic) struct CGPoint { double x0; double x1; } endPoint;
@property (copy, nonatomic) NSString *type;

+ (Class)layerClass;

- (void)setDirection:(unsigned long long)a0;
- (void).cxx_destruct;

@end
