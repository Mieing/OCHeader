@interface BDPMemoryMonitor : NSObject

+ (double)systemMemoryUsageRate;
+ (double)availableMemoryInBytes;
+ (double)totalMemoryUsageInMegabyte;
+ (double)appMemoryUsageInMegabyte;
+ (double)systemMemoryInMegabyte;
+ (BOOL)onCriticalMemoryPressure;
+ (double)appMemoryUsageRate;
+ (double)appMemoryUsageInBytes;
+ (double)totalMemoryUsageInBytes;
+ (double)systemMemoryUsageInBytes;

@end
