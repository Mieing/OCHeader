@interface BDImageMonitorListener : NSObject

+ (void *)registerMonitorCallback:(id /* block */)a0;
+ (void)unregisterMonitorCallback:(void *)a0;

@end
