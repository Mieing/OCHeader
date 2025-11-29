@class UIBezierPath, UIColor;

@interface AWEVectorGraphicsLayer : AWEGraphicsLayer

@property (readonly, copy, nonatomic) UIBezierPath *path;
@property (retain) UIColor *fillColor;
@property (retain) UIColor *strokeColor;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 path:(id)a1;
- (void).cxx_destruct;
- (void)renderInContext:(struct CGContext { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
