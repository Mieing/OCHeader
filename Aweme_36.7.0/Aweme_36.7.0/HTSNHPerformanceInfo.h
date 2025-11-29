@interface HTSNHPerformanceInfo : NSObject

+ (double)totalMemory;
+ (unsigned long long)availableMemory;
+ (id)usedMemory;
+ (unsigned long long)memoryLimitMBForDevice;
+ (unsigned long long)newUsedMemory;
+ (unsigned long long)usedMemoryAfterIOS9;
+ (double)calculateMean:(id)a0;
+ (double)percentOfUsedMemory;
+ (double)coefficientVariation:(id)a0;
+ (id)cpuUsage;

@end
