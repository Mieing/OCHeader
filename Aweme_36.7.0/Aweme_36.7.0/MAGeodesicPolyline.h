@interface MAGeodesicPolyline : MAPolyline

+ (double)longitudeSpanWithCoord1:(struct CLLocationCoordinate2D { double x0; double x1; })a0 coord2:(struct CLLocationCoordinate2D { double x0; double x1; })a1;
+ (struct MAMapPoint { double x0; double x1; } *)geodesicLinesForMapPoints:(struct MAMapPoint { double x0; double x1; } *)a0 count:(unsigned long long)a1 outCount:(unsigned long long *)a2;
+ (id)polylineWithPoints:(struct MAMapPoint { double x0; double x1; } *)a0 count:(unsigned long long)a1;
+ (id)polylineWithCoordinates:(struct CLLocationCoordinate2D { double x0; double x1; } *)a0 count:(unsigned long long)a1;

- (BOOL)setPolylineWithPoints:(struct MAMapPoint { double x0; double x1; } *)a0 count:(long long)a1;
- (BOOL)setPolylineWithCoordinates:(struct CLLocationCoordinate2D { double x0; double x1; } *)a0 count:(long long)a1;

@end
