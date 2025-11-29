@interface HMDGPUUsage : NSObject

+ (double)gpuUsage;
+ (struct { unsigned long long x0; long long x1; long long x2; })gpuMemoryUsage;
+ (id)utilizeDictionaryWithErrorType:(unsigned long long *)a0;
+ (long long)appAllocatedMemory;
+ (id)performanceStatisticsV2:(unsigned long long *)a0;
+ (double)gpuUsageWithError:(id *)a0;

@end
