@class TTVideoEngineBatteryMonitor, TTVideoEngineMetricDiagnose, TTVideoEngineMetricKit, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface TTVideoEngineMetricImpl : TTVideoEngineMetric

@property (nonatomic) long long ability;
@property (nonatomic) long long duration;
@property (nonatomic) long long enableDiagnose;
@property (nonatomic) double lastMetricTime;
@property (nonatomic) double curDuration;
@property (retain, nonatomic) TTVideoEngineMetricDiagnose *metricDiagnose;
@property (retain, nonatomic) TTVideoEngineBatteryMonitor *batteryMonitor;
@property (retain, nonatomic) TTVideoEngineMetricKit *metricKit;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *metricQueue;
@property (retain, nonatomic) NSMutableDictionary *seprateCpuDic;

+ (id)threadArray;
+ (id)sharedInstance;

- (void)diagnoseMetricInfo;
- (float)getCpuInfoWithTheadInfo:(id)a0 threadRecord:(BOOL)a1;
- (id)isPlayThread:(id)a0;
- (void)setupAbility:(long long)a0;
- (void)setupInterval:(long long)a0;
- (void)beginMetric;
- (void)stopMetric;
- (id)getMetricSysInfo;
- (id)getMetricCalInfo;
- (void)clearSysInfo;
- (id)backtraceWithThreads:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
