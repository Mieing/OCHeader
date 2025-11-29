@interface AWEIMLocationUtils : NSObject

+ (void)requestCurrentLocationWithBDCert:(id)a0 jumpCertToken:(id)a1 completion:(id /* block */)a2;
+ (BOOL)isValidCoord:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
+ (void)makeSnapShotWithLocation:(struct CLLocationCoordinate2D { double x0; double x1; })a0 completion:(id /* block */)a1;

@end
