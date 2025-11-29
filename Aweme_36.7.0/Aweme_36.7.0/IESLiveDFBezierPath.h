@interface IESLiveDFBezierPath : NSObject {
    struct CGPath { } *_path;
    long long _subpathCount;
    struct BezierSubpath { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGPoint { double x0; double x1; } x3; double x4; int x5; } *_subpaths;
    double _length;
}

+ (id)bezierPathWithCGPath:(struct CGPath { } *)a0;

- (id)initWithCGPath:(struct CGPath { } *)a0;
- (void)enumerateSubpaths:(id /* block */)a0;
- (unsigned long long)countSubpaths;
- (void)extractSubpaths:(struct BezierSubpath { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGPoint { double x0; double x1; } x3; double x4; int x5; } *)a0;
- (struct CGPoint { double x0; double x1; })pointAtPercent:(double)a0 ofSubpath:(struct BezierSubpath { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGPoint { double x0; double x1; } x3; double x4; int x5; })a1;
- (struct CGPoint { double x0; double x1; })pointAtPercentOfLength:(double)a0;
- (double)length;
- (void)dealloc;

@end
