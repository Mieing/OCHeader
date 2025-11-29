@class HMDCleanupConfig, NSString, NSDictionary, HMDGeneralAPISettings, HMDCustomEventSetting, HMDCommonInfoConfig, HMDCloudCommandConfig;

@interface HMDHeimdallrConfig : NSObject

@property (readonly, nonatomic) unsigned long long HM_maxStorageSize;
@property (readonly, nonatomic) BOOL isDefault;
@property (copy, nonatomic) NSDictionary *activeModulesMap;
@property (copy, nonatomic) NSDictionary *allModulesMap;
@property (retain, nonatomic) HMDGeneralAPISettings *apiSettings;
@property (retain, nonatomic) HMDCloudCommandConfig *cloudCommandConfig;
@property (retain) HMDCommonInfoConfig *commonInfoConfig;
@property (retain, nonatomic) NSString *appID;
@property (nonatomic) BOOL isHostConfig;
@property (copy, nonatomic) NSDictionary *originalData;
@property (nonatomic) BOOL supportLocalStoreConfigData;
@property (readonly, nonatomic) HMDCleanupConfig *cleanupConfig;
@property (retain, nonatomic) NSDictionary *commonInfo;
@property (retain, nonatomic) HMDCustomEventSetting *customEventSetting;
@property (readonly, nonatomic) BOOL needHookTTMonitor;
@property (readonly, nonatomic) BOOL enableEventTrace;
@property (nonatomic) BOOL configurationAvailable;
@property (nonatomic) BOOL enableNetQualityReport;

+ (void)_removeExpiredConfigIfNeeded:(id)a0;

- (id)initWithDefaultDict:(id)a0;
- (id)initWithAppId:(id)a0 defaultConfig:(id)a1;
- (id)allowedLogTypes;
- (id)conditionWithThreshold:(double)a0;
- (void)parseConfigData:(id)a0;
- (id)initWithDictionary:(id)a0 appID:(id)a1;
- (id)initWithJSONData:(id)a0 appID:(id)a1;
- (void)parseCleanupConfig:(id)a0;
- (void)parseHeimdallrModules:(id)a0;
- (void)parseCloudCommandConfig:(id)a0;
- (void)prepareCleanConfig:(id)a0;
- (BOOL)logTypeEnabled:(id)a0;
- (BOOL)customLogTypeEnable:(id)a0 withMonitorData:(id)a1;
- (BOOL)metricTypeEnabled:(id)a0;
- (BOOL)serviceTypeEnabled:(id)a0;
- (BOOL)logTypeHighPriorityEnable:(id)a0;
- (BOOL)serviceHighPriorityEnable:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setIsDefault:(BOOL)a0;
- (id)initWithJSONData:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
