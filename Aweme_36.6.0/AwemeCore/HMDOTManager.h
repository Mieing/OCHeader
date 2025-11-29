@class NSObject, NSMutableArray, HMDPerformanceReportRequest, NSString, HMDPerformanceReporter, HMDOTConfig;
@protocol OS_dispatch_queue;

@interface HMDOTManager : HeimdallrModule <HMDNetworkProvider, HMDPerformanceReporterDataSource>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *spanIOQueue;
@property (retain, nonatomic) HMDPerformanceReporter *tracingReporter;
@property (retain) HMDOTConfig *enternalConfig;
@property BOOL hasStopped;
@property (retain, nonatomic) NSMutableArray *cachedTraces;
@property (retain, nonatomic) HMDPerformanceReportRequest *reportingRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)updateConfig:(id)a0;
- (BOOL)needSyncStart;
- (void)prepareForDefaultStart;
- (void)performanceReportSuccessed:(id)a0;
- (id)reportHeaderParams;
- (id)reportCommonParams;
- (BOOL)enableBackgroundUpload;
- (id)reportPerformanceURLPath;
- (void)dropAllDataForServerState;
- (unsigned long long)properLimitCount;
- (id)performanceDataWithCountLimit:(long long)a0;
- (id)debugRealPerformanceDataWithConfig:(id)a0;
- (void)cleanupPerformanceDataWithConfig:(id)a0;
- (void)performanceDataDidReportSuccess:(BOOL)a0;
- (void)cleanupReportedPerformanceData;
- (BOOL)insertCachedTrace:(id)a0;
- (void)insertCallbackSpans:(id)a0 forTrace:(id)a1;
- (void)cleanupCachedTraces;
- (void)insertAllCachedTracesWhenValid;
- (void)cleanupPlaceholderForTrace:(id)a0;
- (void)enableDebugUpload;
- (void)insertSpan:(id)a0;
- (void)replaceSpan:(id)a0;
- (void)insertTrace:(id)a0;
- (void)replaceTrace:(id)a0;
- (void)cleanupCachedTrace:(id)a0;
- (void).cxx_destruct;
- (BOOL)isValid;
- (id)init;
- (void)stop;
- (void)start;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (Class)storeClass;

@end
