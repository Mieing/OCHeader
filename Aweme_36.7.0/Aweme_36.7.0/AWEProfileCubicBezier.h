@interface AWEProfileCubicBezier : NSObject {
    double p1x;
    double p1y;
    double p2x;
    double p2y;
}

- (double)solveCurveX:(double)a0 epsilon:(double)a1;
- (double)sampleCurveY:(double)a0;
- (double)sampleCurveX:(double)a0;
- (double)sampleCurveDerivativeX:(double)a0;
- (double)solveCubicBezierCurveWithX:(double)a0;
- (id)initWithControlPoints:(double)a0 :(double)a1 :(double)a2 :(double)a3;

@end
