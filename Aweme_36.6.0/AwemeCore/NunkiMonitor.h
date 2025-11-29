@interface NunkiMonitor : NSObject

+ (void)asyncMonitorWithAppLogBlock:(id /* block */)a0;
+ (void)alogWithBlock:(id /* block */)a0;
+ (BOOL)enabled;

@end
