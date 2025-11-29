@interface MAProjection : NSObject

+ (id)projection;

- (struct MAMapPoint { double x0; double x1; })coordinateToMapPoint:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (struct CLLocationCoordinate2D { double x0; double x1; })mapPointToCoordinate:(struct MAMapPoint { double x0; double x1; })a0;
- (struct CLLocationCoordinate2D { double x0; double x1; })mapPointToCoordinateWithoutNormalize:(struct MAMapPoint { double x0; double x1; })a0;
- (struct MAMapPoint { double x0; double x1; })normalizeMapPoint:(struct MAMapPoint { double x0; double x1; })a0;
- (struct CLLocationCoordinate2D { double x0; double x1; })normalizeCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (double)metersPerMapPointAtLatitude:(double)a0;
- (double)mapPointPerMertersAtLatitude:(double)a0;
- (double)areaForSphericalTrapezium:(struct MACoordinateBounds { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct CLLocationCoordinate2D { double x0; double x1; } x1; })a0;

@end
