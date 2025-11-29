@interface IESECMemoryBalanceMemoryUsage : NSObject

+ (BOOL)enableMemoryMonitor;
+ (double)fetchCurrentMemoryUsageForMB;
+ (double)fetchCurrentMemoryUsageForByte;

@end
