@class NSDictionary;
@protocol TSPKLock;

@interface TSPKConfigs : NSObject

@property (nonatomic) BOOL enableRelativeTime;
@property (retain, nonatomic) id<TSPKLock> lock;
@property (copy, nonatomic) NSDictionary *defaultDetectedPlanConfigs;
@property (copy, nonatomic) NSDictionary *monitorConfig;

+ (id)sharedConfig;

- (long long)maxUploadCount;
- (id)ruleConfigs;
- (id)settingVersion;
- (BOOL)isEnableUploadAPICostTimeStatistics;
- (id)apiStatisticsConfigs;
- (id)customAnchorConfigs;
- (id)detectorConfigs;
- (BOOL)enableMergeCustomAndSystemBacktraces;
- (id)frequencyConfigs;
- (long long)maxURLCacheSize;
- (BOOL)enablePrivacySwizzle;
- (id)isApiEnable:(id)a0;
- (id)performanceStatisticsConfigs;
- (id)isDataTypeEnable:(id)a0;
- (id)isPipelineEnable:(id)a0;
- (id)dynamicAspectConfigs;
- (id)crossPlatformConfigs;
- (id)callFilterConfigs;
- (id)pageStatusConfigs;
- (BOOL)enableRemoveLastStartBacktrace;
- (BOOL)enableSetupAppLifeCycleObserver;
- (BOOL)enableSetupMediaNotificationObserver;
- (BOOL)isRelativeTimeEnable;
- (BOOL)enableNetworkInit;
- (BOOL)enableUploadAlog;
- (double)timeRangeToUploadAlog;
- (double)timeDelayToUploadAlog;
- (BOOL)enablePermissionChecker;
- (BOOL)enableBizInfoUpload;
- (void)updateRuleAndDetectorPartOfMonitorConfig:(id)a0;
- (id)cacheConfigs;
- (BOOL)enableLocationDelegate;
- (BOOL)enableApiStatistics;
- (BOOL)enable;
- (void).cxx_destruct;
- (id)init;

@end
