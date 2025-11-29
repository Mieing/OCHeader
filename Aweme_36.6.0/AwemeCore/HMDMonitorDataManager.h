@class HMDRecordStore, NSString, NSTimer, HMDTTMonitorUserInfo, HMDConfigManager, HMDPerformanceReporter, HMDHeimdallrConfig;

@interface HMDMonitorDataManager : NSObject <HMDNetworkProvider> {
    struct atomic_flag { _Atomic BOOL _Value; } _needCacheFlag;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain) HMDPerformanceReporter *reporter;
@property (retain) HMDConfigManager *configManager;
@property (retain, nonatomic) NSTimer *flushTimer;
@property (nonatomic) BOOL isUploading;
@property (nonatomic) BOOL needCache;
@property (copy, nonatomic) NSString *appID;
@property (nonatomic) void *configProviderPtr;
@property (readonly, nonatomic) HMDHeimdallrConfig *config;
@property (retain, nonatomic) HMDRecordStore *store;
@property (retain, nonatomic) HMDTTMonitorUserInfo *injectedInfo;
@property (copy, nonatomic) id /* block */ stopCacheBlock;

- (void)updateConfig:(id)a0;
- (id)initMonitorWithAppID:(id)a0 injectedInfo:(id)a1;
- (void)configDidUpdate:(id)a0;
- (void)performanceReportSuccessed:(id)a0;
- (id)reportHeaderParams;
- (id)reportCommonParams;
- (BOOL)enableBackgroundUpload;
- (void)syncConfigManagerIfAvailable;
- (void)syncReporterIfAvailable;
- (BOOL)ifNeedCacheRecords;
- (BOOL)isMainAppMonitor;
- (void).cxx_destruct;
- (void)dealloc;

@end
