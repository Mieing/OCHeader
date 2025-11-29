@interface AWEGraphicsLayer : CALayer

@property (copy, nonatomic) id /* block */ drawingActions;

- (void).cxx_destruct;
- (id)init;
- (void)renderInContext:(struct CGContext { } *)a0;
- (void)layoutSublayers;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
