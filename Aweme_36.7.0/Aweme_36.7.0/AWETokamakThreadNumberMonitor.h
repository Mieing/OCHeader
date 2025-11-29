@interface AWETokamakThreadNumberMonitor : NSObject

+ (void)startUploadToSlardr;
+ (void)startUploadToTea;
+ (void)checkByTimer;
+ (void)uploadByTimer;
+ (void)uploadMemoryWarning;
+ (void)start;

@end
