@class NSString;

@interface QArc : QShape <QOverlay>

@property (nonatomic) struct { struct { double x; double y; } origin; struct { double width; double height; } size; } boundingMapRect;
@property (nonatomic) struct { double x0; double x1; } *internalArcPoints;
@property (nonatomic) struct { double x; double y; } centerPoint;
@property (nonatomic) double radius;
@property (nonatomic) int pointCount;
@property (nonatomic) double tangentAngle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)arcWithStartPoint:(struct CLLocationCoordinate2D { double x0; double x1; })a0 endPoint:(struct CLLocationCoordinate2D { double x0; double x1; })a1 passedPoint:(struct CLLocationCoordinate2D { double x0; double x1; })a2;
+ (id)arcWithStartPoint:(struct CLLocationCoordinate2D { double x0; double x1; })a0 endPoint:(struct CLLocationCoordinate2D { double x0; double x1; })a1 tangentAngle:(double)a2;

- (id)initWithStartPoint:(struct CLLocationCoordinate2D { double x0; double x1; })a0 endPoint:(struct CLLocationCoordinate2D { double x0; double x1; })a1 passedPoint:(struct CLLocationCoordinate2D { double x0; double x1; })a2;
- (id)initWithStartPoint:(struct CLLocationCoordinate2D { double x0; double x1; })a0 endPoint:(struct CLLocationCoordinate2D { double x0; double x1; })a1 tangentAngle:(double)a2;
- (void)calculateCircleCenterWithStart:(struct { double x0; double x1; })a0 end:(struct { double x0; double x1; })a1 passed:(struct { double x0; double x1; })a2;
- (double)convertTangleLineAngle:(double)a0;
- (void)calculateCircleCenterWithTangentLine:(struct { double x0; double x1; })a0 endPoint:(struct { double x0; double x1; })a1 angle:(double)a2;
- (void)generateArcPoints:(BOOL)a0 start:(struct { double x0; double x1; })a1 end:(struct { double x0; double x1; })a2;
- (void)calculateBoundingMapRect;
- (void)dealloc;

@end
