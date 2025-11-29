@interface TencentLBSDataHandler : NSObject

+ (id)zlibCompressData:(id)a0;
+ (id)zlibUncompressData:(id)a0;
+ (id)AES256EncryptWithKey:(id)a0 withData:(id)a1;
+ (id)AES256DecryptWithKey:(id)a0 withData:(id)a1;
+ (id)gzipData:(id)a0;
+ (id)ungzipData:(id)a0;
+ (id)confuseData:(id)a0 random:(int)a1 flag:(BOOL)a2;
+ (id)confuseData:(id)a0;
+ (struct CLLocationCoordinate2D { double x0; double x1; })WGS84TOGCJ02:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
+ (id)md5:(id)a0;
+ (id)createCLLocWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 altitude:(double)a1 horizontalAccuracy:(double)a2 verticalAccuracy:(double)a3 course:(double)a4 speed:(double)a5 timestamp:(id)a6 origin:(id)a7;

@end
