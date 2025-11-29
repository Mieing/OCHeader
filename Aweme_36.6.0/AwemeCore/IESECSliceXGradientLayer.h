@class NSArray;

@interface IESECSliceXGradientLayer : SLIAnimatableBaseLayer {
    struct CGColorSpace { } *_colorSpace;
}

@property (copy, nonatomic) NSArray *colors;
@property (copy, nonatomic) NSArray *locations;
@property (nonatomic) struct CGPoint { double x; double y; } startPoint;
@property (nonatomic) struct CGPoint { double x; double y; } endPoint;

+ (void)initialize;

- (void)drawInContext:(struct CGContext { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)actionForKey:(id)a0;
- (void)dealloc;
- (struct CGPoint { double x0; double x1; })transformPoint:(struct CGPoint { double x0; double x1; })a0;

@end
