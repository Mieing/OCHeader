@class MMNetworkMonitorConfig, NSString, MMAudioMonitorConfig, MMGPUMonitorConfig, MMCPUTimeProfilerConfig, MMLocationMonitorConfig;

@interface MMMetricsMonitorConfig : NSObject <PBCoding>

@property (nonatomic) BOOL enabled;
@property (nonatomic) int dumpInternal;
@property (nonatomic) int kvReportInternal;
@property (nonatomic) int dataRemainDays;
@property (nonatomic) BOOL autoKVReport;
@property (nonatomic) BOOL autoStackReport;
@property (retain, nonatomic) MMCPUTimeProfilerConfig *cpuTimeProfilerConfig;
@property (retain, nonatomic) MMGPUMonitorConfig *gpuMonitorConfig;
@property (retain, nonatomic) MMLocationMonitorConfig *locationMonitorConfig;
@property (retain, nonatomic) MMNetworkMonitorConfig *networkMonitorConfig;
@property (retain, nonatomic) MMAudioMonitorConfig *audioMonitorConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_enabled;
+ (void)PBArrayAdd_cpuTimeProfilerConfig;
+ (void)PBArrayAdd_gpuMonitorConfig;
+ (void)PBArrayAdd_networkMonitorConfig;
+ (void)PBArrayAdd_audioMonitorConfig;
+ (void)PBArrayAdd_locationMonitorConfig;
+ (void)PBArrayAdd_dumpInternal;
+ (void)PBArrayAdd_kvReportInternal;
+ (void)PBArrayAdd_dataRemainDays;
+ (void)PBArrayAdd_autoKVReport;
+ (void)PBArrayAdd_autoStackReport;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (void)updateWithXLabConfig:(id)a0;
- (void)updateKVConfigWithXLabConfig:(id)a0;
- (void).cxx_destruct;

@end
