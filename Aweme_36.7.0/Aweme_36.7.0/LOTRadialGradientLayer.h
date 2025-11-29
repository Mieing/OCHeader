@class NSArray;

@interface LOTRadialGradientLayer : CALayer

@property struct CGPoint { double x0; double x1; } startPoint;
@property struct CGPoint { double x0; double x1; } endPoint;
@property (copy, nonatomic) NSArray *colors;
@property (copy, nonatomic) NSArray *locations;
@property (nonatomic) BOOL isRadial;

+ (BOOL)needsDisplayForKey:(id)a0;

- (BOOL)isRadial;
- (struct CGPoint { double x0; double x1; })endPoint;
- (struct CGPoint { double x0; double x1; })startPoint;
- (id)locations;
- (id)colors;
- (void)setColors:(id)a0;
- (void)setLocations:(id)a0;
- (void)setEndPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)setStartPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)setIsRadial:(BOOL)a0;
- (void)drawInContext:(struct CGContext { } *)a0;
- (id)actionForKey:(id)a0;

@end
