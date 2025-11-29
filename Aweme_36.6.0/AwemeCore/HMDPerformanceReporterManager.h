@class NSString, NSMutableDictionary, NSTimer, HMDServerStateChecker, NSObject, HMDDoubleReporter;
@protocol OS_dispatch_queue;

@interface HMDPerformanceReporterManager : NSObject <HMDURLProvider, HMDPerformanceReporterCheckPointProtocol, HMDDoubleReporterDelegate> {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwlock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableDictionary *reporters;
@property (nonatomic) double reportPollingInterval;
@property (retain, nonatomic) NSTimer *autoReportTimer;
@property BOOL isUploading;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *reportorQueue;
@property (retain, nonatomic) HMDDoubleReporter *doubleReporter;
@property (retain, nonatomic) HMDServerStateChecker *serverStateChecker;
@property (nonatomic) BOOL needEncrypt;
@property (nonatomic) unsigned long long maxRetryTimes;
@property (nonatomic) unsigned long long reportFailBaseInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)URLHostProviderConfigHosts:(id)a0;
- (id)URLHostProviderInjectedHosts:(id)a0;
- (id)URLHostProviderDefaultHosts:(id)a0;
- (void)cleanupWithConfig:(id)a0;
- (id)URLPathProviderURLPath:(id)a0;
- (id)allDebugRealPeformanceDataWithConfig:(id)a0;
- (void)reportDebugRealPerformanceDataWithConfig:(id)a0;
- (void)addReporter:(id)a0 withAppID:(id)a1;
- (void)updateConfig:(id)a0 withAppID:(id)a1;
- (void)removeReportModule:(id)a0 withAppID:(id)a1;
- (void)addReportModule:(id)a0 withAppID:(id)a1;
- (void)reportPerformanceDataAfterInitializeWithAppID:(id)a0 block:(id /* block */)a1;
- (void)updateRecordCount:(long long)a0 withAppID:(id)a1;
- (void)reportOTDataWithReporter:(id)a0 block:(id /* block */)a1;
- (void)reportImmediatelyPerformanceCacheDataWithAppID:(id)a0 block:(id /* block */)a1;
- (void)triggerAllReporterUpload;
- (void)doubleUploadNetworkRecordArray:(id)a0 toURLString:(id)a1;
- (void)handleBackgroundNotification:(id)a0;
- (id)performanceDataWithDowngradeFilter:(id)a0;
- (id)_getReporterSafeWithAppID:(id)a0;
- (void)reportPerformanceDataAsyncWithAppID:(id)a0 block:(id /* block */)a1;
- (void)autoReportPerformanceData:(id)a0;
- (void)resetFlushTimer;
- (id)_getHostAppID;
- (void)_reportPerformanceDataIfAllowedWithAppID:(id)a0 reporterType:(unsigned long long)a1 singleReporter:(id)a2 block:(id /* block */)a3;
- (void)stopCollectFlushTimer;
- (void)startCollectFlushTimer;
- (void)_reportPerformanceDataWithBlock:(id /* block */)a0 reporterType:(unsigned long long)a1 singleReporter:(id)a2 appID:(id)a3;
- (void)_recordPerformanceReportMemoryBefore;
- (id)_bodyDataFromReporter:(id)a0 andProvider:(id)a1 addedModules:(id)a2 reporterType:(unsigned long long)a3 maybeMoreData:(BOOL *)a4 reporterMaxCount:(long long *)a5 eventLog:(id *)a6;
- (void)_recordPerfomanceReportMemoryAfterWithModules:(id)a0;
- (void)excuteCloudCommandIfAvailable:(id)a0 ran:(id)a1;
- (unsigned long long)checkErrorCodeAndDebugRealWithResponse:(id)a0 statusCode:(long long)a1 addedReporters:(id)a2 addedModules:(id)a3 hmdreporter:(unsigned long long)a4 appID:(id)a5;
- (id)_dataArrayForImmediatelyUploadeWithAddedMoudle:(id)a0 modules:(id)a1;
- (id)_dataArrayForNormalReportWithAddedMoudle:(id)a0 modules:(id)a1 maybeMoreData:(BOOL *)a2 reporterMaxCount:(long long)a3 reporter:(id)a4;
- (id)_eventDataSequenceNumberRange:(id)a0 eventCount:(long long *)a1;
- (long long)_accumulationOfEventDataWithAppID:(id)a0;
- (id)_metricCountForNormalReportWithAddedMoudle:(id)a0 modules:(id)a1;
- (id)_metricTimerForNormalReportWithAddedMoudle:(id)a0 modules:(id)a1;
- (void)_reportDebugRealPerformanceDataWithConfig:(id)a0;
- (BOOL)checkServerAvailable;
- (void)reportDataWithReporter:(id)a0 block:(id /* block */)a1;
- (void)reportPerformanceDataAsyncWithSizeLimitedReporter:(id)a0 block:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (BOOL)shouldEncrypt;

@end
