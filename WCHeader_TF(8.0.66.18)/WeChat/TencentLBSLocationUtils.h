@interface TencentLBSLocationUtils : NSObject

+ (double)distanceBetweenTwoCoordinate2D:(const struct CLLocationCoordinate2D { double x0; double x1; } *)a0 coordinateTwo:(const struct CLLocationCoordinate2D { double x0; double x1; } *)a1;
+ (double)distanceBetweenTwoCLLocations:(id)a0 locationTwo:(id)a1;
+ (double)distanceBetweenTwoTencentLBSLocations:(id)a0 locationTwo:(id)a1;
+ (BOOL)isInRegionWithLatitude:(double)a0 longitude:(double)a1 addTaiwan:(BOOL)a2;
+ (struct CLLocationCoordinate2D { double x0; double x1; })WGS84TOGCJ02:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
+ (BOOL)isInChinaPolygonWithLatitude:(double)a0 longitude:(double)a1;
+ (BOOL)isInChinaWithLatitude:(double)a0 longitude:(double)a1;

@end
