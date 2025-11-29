@interface QMathUtil : NSObject

+ (id)singleton;
+ (double)radian2Angle:(double)a0;
+ (double)angleToRadian:(double)a0;
+ (double)calcLineSlope:(struct { double x0; double x1; })a0 pointB:(struct { double x0; double x1; })a1;
+ (double)calcLineAngle:(struct { double x0; double x1; })a0 pointB:(struct { double x0; double x1; })a1;
+ (double)calcLineAngleOffset:(double)a0 offsetAngle:(double)a1;
+ (double)isPointInLineSide:(struct { double x0; double x1; })a0 endPoint:(struct { double x0; double x1; })a1 checkPoint:(struct { double x0; double x1; })a2;
+ (double)calculateDistanceForPointA:(struct { double x0; double x1; })a0 pointB:(struct { double x0; double x1; })a1;
+ (double)calculateCircleCenterAndRadiusWithThreePoints:(struct { double x0; double x1; })a0 endPoint:(struct { double x0; double x1; })a1 passedPoint:(struct { double x0; double x1; })a2 center:(struct { double x0; double x1; } *)a3;
+ (double)calculateCircleCenterAndRadiusWithTangentAngle:(double)a0 startPoint:(struct { double x0; double x1; })a1 endPoint:(struct { double x0; double x1; })a2 center:(struct { double x0; double x1; } *)a3 clockwise:(BOOL)a4;
+ (BOOL)validateDeltaKChanged:(const struct { double x0; double x1; } *)a0 centerSide:(double)a1 end:(const struct { double x0; double x1; } *)a2 isClockwise:(BOOL)a3 start:(const struct { double x0; double x1; } *)a4;
+ (id)generateArcPointWithCenter:(struct { double x0; double x1; })a0 startPoint:(struct { double x0; double x1; })a1 endPoint:(struct { double x0; double x1; })a2 radius:(double)a3 clockwise:(BOOL)a4;

@end
