@interface TIMXMemoryMonitor : NSObject

+ (double)appPhysFootprintPercentage;
+ (double)appAvailableMemoryMB;
+ (double)appPhysFootprintMB;
+ (double)totalMemoryMB;

@end
