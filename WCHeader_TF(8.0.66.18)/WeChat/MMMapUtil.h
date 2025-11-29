@interface MMMapUtil : MMObject

+ (struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })QMapRectForCoordinateRegion:(struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
+ (struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })QMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; } *)a0 KeepCenterUnionPoint:(struct { double x0; double x1; })a1;
+ (struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })QMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; } *)a0 MakeCenterUnionPoint:(struct { double x0; double x1; })a1;
+ (double)convertSpeedToKMH:(double)a0;
+ (BOOL)QCoordinateRegion:(struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0 ContainsPoint:(struct { double x0; double x1; })a1;
+ (struct CLLocationCoordinate2D { double x0; double x1; })convertWGS84toGCJ02:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
+ (double)normalizeZoomLevel:(double)a0;
+ (struct { double x0; double x1; } *)createMapPointForAnnotations:(id)a0;

@end
