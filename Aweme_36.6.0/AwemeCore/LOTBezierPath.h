@interface LOTBezierPath : NSObject {
    struct LOT_Subpath { int x0; double x1; struct CGPoint { double x0; double x1; } x2; struct CGPoint { double x0; double x1; } x3; struct CGPoint { double x0; double x1; } x4; struct LOT_Subpath *x5; } *headSubpath_;
    struct LOT_Subpath { int x0; double x1; struct CGPoint { double x0; double x1; } x2; struct CGPoint { double x0; double x1; } x3; struct CGPoint { double x0; double x1; } x4; struct LOT_Subpath *x5; } *tailSubpath_;
    struct CGPoint { double x; double y; } subpathStartPoint_;
    double *_lineDashPattern;
    long long _lineDashCount;
    double _lineDashPhase;
    struct CGPath { } *_path;
}

@property (readonly, nonatomic) struct LOT_Subpath { int x0; double x1; struct CGPoint { double x0; double x1; } x2; struct CGPoint { double x0; double x1; } x3; struct CGPoint { double x0; double x1; } x4; struct LOT_Subpath *x5; } *headSubpath;
@property (nonatomic) BOOL cacheLengths;
@property (readonly, nonatomic) double length;
@property (readonly, nonatomic) const struct CGPath { } *CGPath;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } currentPoint;
@property (nonatomic) double lineWidth;
@property (nonatomic) int lineCapStyle;
@property (nonatomic) int lineJoinStyle;
@property (nonatomic) double miterLimit;
@property (nonatomic) double flatness;
@property (nonatomic) BOOL usesEvenOddFillRule;
@property (readonly, getter=isEmpty) BOOL empty;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;

+ (id)newPath;
+ (id)pathWithCGPath:(struct CGPath { } *)a0;

- (void)LOT_appendPath:(id)a0;
- (void)setWithCGPath:(struct CGPath { } *)a0;
- (void)removeAllSubpaths;
- (void)addSubpathWithType:(int)a0 length:(double)a1 endPoint:(struct CGPoint { double x0; double x1; })a2 controlPoint1:(struct CGPoint { double x0; double x1; })a3 controlPoint1:(struct CGPoint { double x0; double x1; })a4;
- (void)_clearPathData;
- (void)LOT_removeAllPoints;
- (void)LOT_moveToPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)LOT_addLineToPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)LOT_addCurveToPoint:(struct CGPoint { double x0; double x1; })a0 controlPoint1:(struct CGPoint { double x0; double x1; })a1 controlPoint2:(struct CGPoint { double x0; double x1; })a2;
- (void)LOT_closePath;
- (void)lot_enumeratePath:(struct CGPath { } *)a0 elementsUsingBlock:(id /* block */)a1;
- (void)LOT_applyTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)trimPathFromT:(double)a0 toT:(double)a1 offset:(double)a2;
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })a0;

@end
