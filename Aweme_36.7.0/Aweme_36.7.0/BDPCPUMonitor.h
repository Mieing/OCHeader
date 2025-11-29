@interface BDPCPUMonitor : NSObject

+ (float)cpuUsageForAppID:(id)a0;
+ (void)async_cpuUsageForAppID:(id)a0 completion:(id /* block */)a1;
+ (unsigned long long)numberOfCPUCores;
+ (float)cpuUsage;

@end
