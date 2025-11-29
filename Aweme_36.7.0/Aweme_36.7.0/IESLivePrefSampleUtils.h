@class NSObject, IESLiveNetworkDiagnose, NSString, IESLiveGCDTimer, NSNumber, NSMutableArray;
@protocol OS_dispatch_queue;

@interface IESLivePrefSampleUtils : NSObject <IESLivePrefSampleUtilsService>

@property (nonatomic) struct IESLivePrefSampleUtilsConfig { long long x0; long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8; BOOL x9; BOOL x10; BOOL x11; long long x12; long long x13; BOOL x14; BOOL x15; BOOL x16; } *utilsConfig;
@property (nonatomic) unsigned int mainThread;
@property (copy, nonatomic) NSNumber *cpu_frequency;
@property (nonatomic) double cpu_frequency_sample_time;
@property (copy, nonatomic) NSNumber *gpu_usage;
@property (nonatomic) double gpu_usage_sample_time;
@property (retain, nonatomic) NSMutableArray *cpuInfos;
@property (retain, nonatomic) NSMutableArray *globalMemoryInfo;
@property (retain, nonatomic) NSMutableArray *globalDropInfo;
@property (retain, nonatomic) NSMutableArray *globalCpuInfo;
@property (retain, nonatomic) IESLiveGCDTimer *globalPerfSamplerTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *globalPerfSamplerQueue;
@property (copy, nonatomic) id /* block */ globalDropFrameCallback;
@property long long currentThreadCount;
@property long long waitingThreadCount;
@property (retain, nonatomic) IESLiveNetworkDiagnose *networkDiagnose;
@property (nonatomic) long long previewDownLoadSpeed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstanced;

- (long long)getPreviewDownLoadSpeed;
- (float)mainThreadCpuInfo;
- (id)getCPUFrequency;
- (id)getGpuUsageWithError:(id *)a0;
- (void)collectPrefSampleCpuInfo:(id)a0;
- (unsigned long long)getLatestAvailableMemoryWithDuration:(long long)a0;
- (unsigned long long)getLatestCpuUsageWithDuration:(long long)a0;
- (long long)waitingCount;
- (void)addNetworkFluctuationsObserver:(id /* block */)a0;
- (long long)currentMultiNetworkState;
- (void)recordPreviewDownLoadSpeed:(long long)a0;
- (void)globalPerformanceSampler;
- (BOOL)cpuFrequencyCacheAvaliable;
- (BOOL)cpuOverLoad;
- (BOOL)gpuUsageCacheAvaliable;
- (void)setUp;
- (void).cxx_destruct;
- (long long)threadCount;
- (void)dealloc;

@end
