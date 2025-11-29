@interface BDPPluginLocation_HG : BDPBridgeInstancePlugin

+ (double)transformLat:(double)a0 bdLon:(double)a1;
+ (double)transformLon:(double)a0 bdLon:(double)a1;
+ (struct CLLocationCoordinate2D { double x0; double x1; })gcj02Encrypt:(double)a0 bdLon:(double)a1;
+ (struct CLLocationCoordinate2D { double x0; double x1; })convertWGSToGCJ:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
+ (struct CLLocationCoordinate2D { double x0; double x1; })convertGCJToWGS:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
+ (BOOL)outOfCh:(double)a0 bdLon:(double)a1;

- (void)getLocationWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;

@end
