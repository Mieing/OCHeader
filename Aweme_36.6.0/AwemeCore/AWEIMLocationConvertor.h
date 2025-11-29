@interface AWEIMLocationConvertor : NSObject

+ (BOOL)outOfChina:(double)a0 bdLon:(double)a1;
+ (double)transformLat:(double)a0 bdLon:(double)a1;
+ (double)transformLon:(double)a0 bdLon:(double)a1;
+ (struct CLLocationCoordinate2D { double x0; double x1; })gcj02Encrypt:(double)a0 bdLon:(double)a1;
+ (struct CLLocationCoordinate2D { double x0; double x1; })gcj02Decrypt:(double)a0 gjLon:(double)a1;
+ (struct CLLocationCoordinate2D { double x0; double x1; })bd09Encrypt:(double)a0 bdLon:(double)a1;
+ (struct CLLocationCoordinate2D { double x0; double x1; })bd09Decrypt:(double)a0 bdLon:(double)a1;
+ (struct CLLocationCoordinate2D { double x0; double x1; })bd09ToGcj02:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
+ (struct CLLocationCoordinate2D { double x0; double x1; })wgs84ToGcj02:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
+ (struct CLLocationCoordinate2D { double x0; double x1; })gcj02ToWgs84:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
+ (struct CLLocationCoordinate2D { double x0; double x1; })wgs84ToBd09:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
+ (struct CLLocationCoordinate2D { double x0; double x1; })gcj02ToBd09:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
+ (struct CLLocationCoordinate2D { double x0; double x1; })bd09ToWgs84:(struct CLLocationCoordinate2D { double x0; double x1; })a0;

@end
