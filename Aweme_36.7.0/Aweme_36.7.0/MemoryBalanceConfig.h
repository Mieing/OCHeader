@interface MemoryBalanceConfig : NSObject

+ (long long)memoryDangerTopLevelForMB;
+ (long long)memoryDangerSecondaryLevelForMB;
+ (long long)monitorTimeInterval;
+ (long long)memoryBalanceMonitorTimeInterval;
+ (long long)physicalMemoryForMB;
+ (id)mapForDeviceTypeTopMemoryDangerousLimit;
+ (float)memoryBalanceSecondLevelPrecent;
+ (id)memoryBalanceMemoryDangerTopLevel;
+ (id)pageMemoryRiseNumberDict;
+ (id)memoryBalanceSceneMemoryRiseNumberConfig;
+ (long long)pageMemoryRiseNumberWith:(id)a0;

@end
