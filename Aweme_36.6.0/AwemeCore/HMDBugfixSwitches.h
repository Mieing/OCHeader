@interface HMDBugfixSwitches : HMDBaseConfig

@property BOOL disablePerformanceAggregationFix;
@property (nonatomic) BOOL disableAPPForeBackStateSyncMonitor;
@property (nonatomic) BOOL fallbackOldTryCatch;
@property (nonatomic) BOOL disableNoWatchdogNotificationFix;
@property (nonatomic) BOOL disableBGDBFoundationClassFix;
@property (nonatomic) BOOL disableRetryUploadMetricKit;
@property (nonatomic) BOOL enableDiskSparseFileAlgorithmTimes512;
@property (nonatomic) BOOL enableEventUploadLogging;
@property (nonatomic) BOOL enableALogRetryUpload;
@property (nonatomic) BOOL protectorOptimizeUSEL;
@property (nonatomic) BOOL useNewBacktrace;
@property (nonatomic) BOOL disableFileUploadDetailCallback;
@property (nonatomic) BOOL enableInjectedInfoGuard;
@property (nonatomic) BOOL enableToDFolderFix;
@property (nonatomic) BOOL enableDataMmapToFile;
@property (nonatomic) BOOL disableMainThreadStalled;
@property (nonatomic) BOOL protectNSData;
@property (nonatomic) BOOL enableSDKStartNetworkModule;
@property (nonatomic) BOOL loadCrashAccurateAppInfo;
@property (nonatomic) long long alogUploadSeconds;

+ (id)hmd_attributeMapDictionary;
+ (BOOL)shouldLocalStoreConfigData;

@end
