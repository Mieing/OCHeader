@interface HMDCPUMonitor : HMDMonitor

+ (id)cpuUsageInfoWithCustomScene:(id)a0;
+ (id)cpuUsageInfo;
+ (id)sharedMonitor;

- (void)updateConfig:(id)a0;
- (void)enterCustomSceneWithUniq:(id)a0;
- (void)leaveCustomSceneWithUniq:(id)a0;
- (unsigned long long)reporterPriority;
- (id)cpuUsageInfoWithoutAPPUsage;
- (struct hmd_app_cpu_usage { long long x0; long long x1; float x2; })appCpuInfoWithTheadInfo:(id)a0 threadRecord:(BOOL)a1;
- (id)refresh;
- (void)stop;
- (void)start;
- (Class)storeClass;

@end
