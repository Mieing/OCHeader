@interface LynxLinearGradient : LynxGradient

@property (nonatomic) double angle;
@property (nonatomic) long long directionType;

- (void)draw:(struct CGContext { } *)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)computeStartPoint:(struct CGPoint { double x0; double x1; } *)a0 andEndPoint:(struct CGPoint { double x0; double x1; } *)a1 withSize:(const struct CGSize { double x0; double x1; } *)a2;
- (void)draw:(struct CGContext { } *)a0 withPath:(struct CGPath { } *)a1;
- (BOOL)isEqualTo:(id)a0;
- (id)initWithArray:(id)a0;

@end
