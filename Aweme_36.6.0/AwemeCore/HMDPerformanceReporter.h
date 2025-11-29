@class NSArray, NSTimer, NSMutableOrderedSet, NSString, HMDReportLimitSizeTool;
@protocol HMDNetworkProvider;

@interface HMDPerformanceReporter : NSObject <HMDLimitReportDataSizeToolDelegate> {
    _Atomic unsigned int _pendingCount;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutexLock;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwLock;
}

@property (retain, nonatomic) NSTimer *sizeLimitedReportTimer;
@property double sizeLimitAvailableTime;
@property (retain, nonatomic) NSMutableOrderedSet *performanceModules;
@property (retain, nonatomic) HMDReportLimitSizeTool *reporSizeLimitTool;
@property double sizeLimitAvailableTime;
@property (retain, nonatomic) id<HMDNetworkProvider> provider;
@property (nonatomic) long long reportMaxLogCount;
@property (nonatomic) double reportPollingInterval;
@property (nonatomic) double enableTimeStamp;
@property (readonly, nonatomic) NSArray *allReportingModules;
@property (copy, nonatomic) NSString *sdkAid;
@property (nonatomic) BOOL isSDKReporter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)awe_energy_optimize_hook;

- (void)updateConfig:(id)a0;
- (void)addReportModuleSafe:(id)a0;
- (void)autoReportPerformanceDataWithSizeLimited:(id)a0;
- (void)startSizeLimitedReportTimer;
- (void)stopSizeLimitedReportTimer;
- (void)reportPerformanceDataAsyncWithSizeLimited;
- (BOOL)ifNeedReportAfterUpdatingRecordCount:(long long)a0;
- (void)removeReportModuleSafe:(id)a0;
- (void)cleanupWithConfigUnsafe:(id)a0;
- (void)_sizeLimitedTimeAvaliableWithBody:(id)a0;
- (void)clearRecordCountAfterReportingSuccessfully;
- (void)updateEnableTimeStampAfterReporting;
- (id)_dataArrayForSizeLimitedReportWithAddedMoudle:(id)a0 modules:(id)a1;
- (void)performanceSizeLimitReportStart;
- (void)performanceSizeLimitReportStop;
- (void)performanceDataSizeOutOfThreshold;
- (double)awe_energy_optimize_reportPollingInterval;
- (long long)awe_energy_optimize_reportMaxLogCount;
- (void).cxx_destruct;
- (id)initWithProvider:(id)a0;
- (void)dealloc;

@end
