@interface MMMetricsUtil : NSObject

+ (double)currentTimeSince1970;
+ (id)currentThreadStack:(BOOL)a0 skipFrames:(unsigned int)a1;
+ (id)dumpThreadInfos:(double)a0 minCpuUsageToDump:(double)a1 outAppCPUUsage:(float *)a2;
+ (float)averageAppCPUUsageByInfos:(id)a0 count:(unsigned long long)a1;
+ (float)averageDeviceCPUUsageByInfos:(id)a0 count:(unsigned long long)a1;
+ (id)averageGPUUtilizationByInfos:(id)a0 count:(unsigned long long)a1;
+ (unsigned long long)averageFootprintMemoryByInfos:(id)a0 count:(unsigned long long)a1;
+ (id)totalDeviceNetworkUsageByInfos:(id)a0 count:(unsigned long long)a1;
+ (BOOL)isMatchByRatio:(double)a0;

@end
