@class NSRecursiveLock, MMTimer, NSMutableDictionary, WCSamplingConfig, NSString, WCGPUCounterSamplingReporter;

@interface WCGPUCounterSamplingMgr : MMUserService <WCFinderLiveExt, MMGPUMonitorExt, MMServiceProtocol>

@property unsigned long long appLaunchTime;
@property (retain, nonatomic) WCSamplingConfig *samplingConfig;
@property (retain, nonatomic) NSMutableDictionary *reportEvents;
@property (retain, nonatomic) MMTimer *reportTimer;
@property (retain, nonatomic) NSRecursiveLock *sampleLock;
@property (retain, nonatomic) WCGPUCounterSamplingReporter *samplingReporter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)startSampling;
- (void)stopSampling;
- (void)onReportTimerCallback;
- (void)doStackReport;
- (void)onIPXX:(id)a0;
- (void)gpuMonitor:(id)a0 didCollectSamplingTraceInfo:(id)a1;
- (void).cxx_destruct;

@end
