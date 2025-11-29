@interface LynxRadialGradient : LynxGradient

@property (nonatomic) long long centerX;
@property (nonatomic) long long centerY;
@property (nonatomic) double centerXValue;
@property (nonatomic) double centerYValue;
@property (nonatomic) struct CGPoint { double x; double y; } at;
@property (nonatomic) unsigned long long shape;
@property (nonatomic) unsigned long long shapeSize;
@property (nonatomic) double shapeSizeXValue;
@property (nonatomic) unsigned long long shapeSizeXUnit;
@property (nonatomic) double shapeSizeYValue;
@property (nonatomic) unsigned long long shapeSizeYUnit;

- (void)draw:(struct CGContext { } *)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGPoint { double x0; double x1; })calculateCenterWithWidth:(double)a0 andHeight:(double)a1;
- (struct CGPoint { double x0; double x1; })calculateRadiusWithCenter:(const struct CGPoint { double x0; double x1; } *)a0 sizeX:(double)a1 sizeY:(double)a2;
- (void)draw:(struct CGContext { } *)a0 withPath:(struct CGPath { } *)a1;
- (double)calculateValue:(long long)a0 value:(double)a1 base:(double)a2;
- (BOOL)isEqualTo:(id)a0;
- (id)initWithArray:(id)a0;

@end
