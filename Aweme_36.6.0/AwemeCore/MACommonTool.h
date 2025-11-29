@interface MACommonTool : NSObject

+ (double *)ColorGetComponents:(id)a0;
+ (BOOL)isFiniteLine:(struct MAMapPoint { double x0; double x1; })a0 p2:(struct MAMapPoint { double x0; double x1; })a1 interSectsCircle:(id)a2;
+ (BOOL)arePolygonsEdgeIntersect:(id)a0 polygon2:(id)a1;
+ (BOOL)isCircle:(id)a0 intersectsWithCircle:(id)a1;
+ (BOOL)isCircle:(id)a0 intersectsWithPolygon:(id)a1;
+ (BOOL)isPolygon:(id)a0 intersectsWithPolygon:(id)a1;
+ (BOOL)isFiniteLine:(struct MAMapPoint { double x0; double x1; })a0 line1End:(struct MAMapPoint { double x0; double x1; })a1 interSectsFiniteLine:(struct MAMapPoint { double x0; double x1; })a2 line2End:(struct MAMapPoint { double x0; double x1; })a3;
+ (struct MAMapPoint { double x0; double x1; })getVerticalFootFromPoint:(struct MAMapPoint { double x0; double x1; })a0 toLine:(struct MAMapPoint { double x0; double x1; })a1 end:(struct MAMapPoint { double x0; double x1; })a2;
+ (BOOL)isLine:(struct MAMapPoint { double x0; double x1; })a0 line1End:(struct MAMapPoint { double x0; double x1; })a1 intersectsLine:(struct MAMapPoint { double x0; double x1; })a2 line2End:(struct MAMapPoint { double x0; double x1; })a3 outIntersection:(struct MAMapPoint { double x0; double x1; } *)a4;
+ (BOOL)isPoint:(struct MAMapPoint { double x0; double x1; })a0 onLine:(struct MAMapPoint { double x0; double x1; })a1 end:(struct MAMapPoint { double x0; double x1; })a2;
+ (double)getMapPointDistanceFromPoint:(struct MAMapPoint { double x0; double x1; })a0 toLine:(struct MAMapPoint { double x0; double x1; })a1 and:(struct MAMapPoint { double x0; double x1; })a2;
+ (void)reducePoints_RDP:(struct MAMapPoint { double x0; double x1; } *)a0 fromIndex:(long long)a1 toIndex:(long long)a2 threshHold:(float)a3 resultPoints:(BOOL *)a4;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })minRectForPoints:(id)a0;
+ (struct MAMapRect { struct MAMapPoint { double x0; double x1; } x0; struct MAMapSize { double x0; double x1; } x1; })mapRectForMapPoints:(id)a0;
+ (struct MAMapRect { struct MAMapPoint { double x0; double x1; } x0; struct MAMapSize { double x0; double x1; } x1; })mapRectForOverlays:(id)a0;
+ (double)calculateVectorAngle:(struct MAMapPoint { double x0; double x1; })a0 des:(struct MAMapPoint { double x0; double x1; })a1;
+ (BOOL)isTilePartlyInland:(struct MATileOverlayPath { long long x0; long long x1; long long x2; double x3; long long x4; long long x5; })a0;
+ (unsigned int)unsignedIntARGBWithColor:(id)a0;
+ (id)decryptedStyleDataWithData:(id)a0;
+ (id)encryptedStyleDataWithData:(id)a0;
+ (BOOL)canAddHollowShape:(id)a0 afterHollowShapes:(id)a1;
+ (BOOL)isCircle:(id)a0 fullyInsidePolygon:(id)a1;
+ (BOOL)isCircle:(id)a0 fullyInsideCircle:(id)a1;
+ (BOOL)isPolygon:(id)a0 fullyInsideCircle:(id)a1;
+ (BOOL)isPolygon:(id)a0 fullyInsidePolygon:(id)a1;
+ (void)reducePoints_fast:(struct MAMapPoint { double x0; double x1; } *)a0 count:(long long)a1 threshHold:(float)a2 resultPoints:(BOOL *)a3;
+ (void)reduceCGPoints_fast:(struct CGPoint { double x0; double x1; } *)a0 count:(long long)a1 threshHold:(float)a2 resultPoints:(BOOL *)a3;
+ (void)reducePoints_vertical:(struct MAMapPoint { double x0; double x1; } *)a0 count:(long long)a1 threshHold:(float)a2 resultPoints:(BOOL *)a3;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundRectForCGPoints:(struct CGPoint { double x0; double x1; } *)a0 count:(int)a1;
+ (id)generateAllInOneTrafficImageFrom:(id)a0 withSmoothColor:(id)a1 slowColor:(id)a2 jamColor:(id)a3 seriousColor:(id)a4 resultImageData:(id *)a5;
+ (struct MAMapPoint { double x0; double x1; })pointOnLine:(struct MAMapPoint { double x0; double x1; })a0 end:(struct MAMapPoint { double x0; double x1; })a1 atPosition:(double)a2;

@end
