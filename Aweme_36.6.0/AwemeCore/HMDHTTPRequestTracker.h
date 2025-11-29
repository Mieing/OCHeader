@class NSArray, HMDHTTPTrackerConfig, NSMutableSet, NSString;
@protocol HMDPerformanceReporterDataSource;

@interface HMDHTTPRequestTracker : HMDTracker <HMDPerformanceReporterDataSource> {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _allowListOpRWLock;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _callbackRWLock;
}

@property (retain, nonatomic) NSArray<HMDPerformanceReporterDataSource> *uploaders;
@property (nonatomic) BOOL ignoreCancelError;
@property (nonatomic) BOOL recordResponseBodyEnabled;
@property (nonatomic) BOOL enableNSURLProtocolAndChromium;
@property (nonatomic) BOOL enableWebViewMonitor;
@property (nonatomic) long long responseBodyThreshold;
@property double lastUploadAllTime;
@property (retain, nonatomic) NSMutableSet *visitorSet;
@property (nonatomic) BOOL isNewAllowedCheck;
@property (retain, nonatomic) NSMutableSet *trackerCallbacks;
@property (readonly, nonatomic) HMDHTTPTrackerConfig *trackerConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedTracker;

- (void)updateConfig:(id)a0;
- (BOOL)needSyncStart;
- (BOOL)performanceDataSource;
- (void)updateRecordWithConfig:(id)a0;
- (void)flushRecord:(id)a0 async:(BOOL)a1 trackerBlock:(id /* block */)a2;
- (long long)dbMaxSize;
- (void)didCollectOneRecord:(id)a0;
- (void)prepareForDefaultStart;
- (id)recordsFilteredByConditions:(id)a0;
- (void)dropAllDataForServerState;
- (unsigned long long)reporterPriority;
- (unsigned long long)properLimitCount;
- (id)performanceDataWithCountLimit:(long long)a0;
- (id)debugRealPerformanceDataWithConfig:(id)a0;
- (void)cleanupPerformanceDataWithConfig:(id)a0;
- (void)performanceDataDidReportSuccess:(BOOL)a0;
- (id)performanceSDKDataWitLimitCount:(long long)a0 sdkAid:(id)a1;
- (id)performanceDataWithLimitSize:(unsigned long long)a0 limitCount:(long long)a1 currentSize:(unsigned long long *)a2;
- (void)performanceSizeLimitedDataDidReportSuccess:(BOOL)a0;
- (double)properLimitSizeWeight;
- (void)dropAllDataForServerStateWithAid:(id)a0;
- (void)updateHMDURLProtocolConfig:(id)a0;
- (BOOL)checkIfURLInBlockList:(id)a0;
- (BOOL)checkIfRequestCanceled:(id)a0 withError:(id)a1 andNetType:(id)a2;
- (BOOL)checkIfURLInWhiteList:(id)a0;
- (BOOL)shouldRecordResponsebBodyForRecord:(id)a0 rawData:(id)a1;
- (void)sampleAllowHeaderToRecord:(id)a0 withRequestHeader:(id)a1 andResponseHeader:(id)a2;
- (void)sampleAllowHeaderToRecord:(id)a0 withRequestHeader:(id)a1 andResponseHeader:(id)a2 isMovingLine:(BOOL)a3;
- (void)setupReportModules;
- (void)judgeMonitorPriority;
- (BOOL)isTTNetAvailable;
- (void)recieveTTNetImpChangeNotification:(id)a0;
- (void)setTTNetMonitorSwitch:(BOOL)a0;
- (void)setURLLoadingMonitorSwitch:(BOOL)a0;
- (void)setWebViewMonitorSwitch:(BOOL)a0;
- (BOOL)shouldMonitorTTNet;
- (BOOL)shouldMonitorURLLoadingSystem;
- (BOOL)shouldMonitorWebView;
- (BOOL)isTTNetChromiumIMP;
- (BOOL)isHMDURLProtocolAvailable;
- (void)setTTNetMonitorUpdateConfig;
- (id)instanceWithAid:(id)a0;
- (void)httpDetailRecordWillCollectedOnTrackerQueue:(id)a0;
- (void)removeData:(id)a0 WithAid:(id)a1;
- (void)cleanupReportedHTTPDetailRecordData;
- (void)cleanupUnSampleAPIAllPerformanceData;
- (void)cleanupUselessImageMonitorPerformanceData;
- (BOOL)isHMDWebViewMonitorAvailable;
- (void)cleanupNotUploadAndReportedPerformanceData;
- (void)addRecordVisitor:(id)a0;
- (void)removeRecordVisitor:(id)a0;
- (void)addHTTPRequestTrackerCallback:(id /* block */)a0;
- (void)removeHTTPRequestTrackerCallback:(id /* block */)a0;
- (id)callHTTPRequestTrackerCallback:(id)a0;
- (void)urlAllowedCheckOptimized:(BOOL)a0;
- (void)addRecord:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (void)start;
- (Class)storeClass;

@end
