@class NSArray;

@interface MJGradientView : MMUIView

@property (retain, nonatomic) NSArray *colors;
@property (retain, nonatomic) NSArray *locations;
@property (nonatomic) struct CGPoint { double x0; double x1; } startPoint;
@property (nonatomic) struct CGPoint { double x0; double x1; } endPoint;

+ (Class)layerClass;

- (id)gradientLayer;
- (void)configure:(id)a0;

@end
