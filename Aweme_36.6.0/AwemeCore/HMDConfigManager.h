@class NSString, NSDictionary, HMDConfigFetcher, HMDConfigStore;
@protocol HMDConfigFetchResource, HMDConfigDataProcess, HMDConfigHostProvider;

@interface HMDConfigManager : NSObject <HMDConfigDataProcessDelegate, HMDConfigDataProcessDataSource, HMDConfigHostProviderDataSource>

@property (retain, nonatomic) HMDConfigStore *store;
@property (retain, nonatomic) id<HMDConfigFetchResource> fetchResource;
@property (retain, nonatomic) HMDConfigFetcher *fetcher;
@property (retain, nonatomic) id<HMDConfigDataProcess> dataProcessor;
@property (retain, nonatomic) id<HMDConfigHostProvider> provider;
@property (retain, nonatomic) id<HMDConfigHostProvider> providerV5;
@property (nonatomic) BOOL needForceRefreshConfig;
@property (retain) NSDictionary *fastCacheConfigData;
@property (nonatomic) BOOL enablePriorityInversionProtection;
@property (readonly) BOOL configFromDefaultDictionary;
@property (readonly) BOOL firstFetchingCompleted;
@property (readonly, copy, nonatomic) NSString *appID;
@property (nonatomic) BOOL useSettingsV5;
@property (nonatomic) long long optimizeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultConfigurationDictionary;
+ (id)networkAndEventConfigWithAid:(id)a0;
+ (id)sharedInstance;

- (void)asyncFetchRemoteConfig:(BOOL)a0;
- (void)updateConfigWithResponseDict:(id)a0;
- (id)configBodyDictionaryWithAppIDs:(id)a0;
- (id)unsafeFastCacheConfigData;
- (void)updateConfig:(id)a0 forAppID:(id)a1 writeToFile:(BOOL)a2 needMarkAsDefaultConfig:(BOOL)a3;
- (void)markNeedForceRefreshConfig:(BOOL)a0;
- (id)configPathWithAppID:(id)a0;
- (void)setupAsyncWithDefaultInfo:(BOOL)a0;
- (id)remoteConfigWithAppID:(id)a0;
- (void)setUpdateInterval:(double)a0 withAppID:(id)a1;
- (void)updateLastTimestamp:(double)a0 forAppIDList:(id)a1;
- (void)dataProcessorFinishProcessResponseData:(id)a0 configs:(id)a1 updateAppIDs:(id)a2;
- (BOOL)needForceRefreshSettings:(id)a0;
- (id)mainConfig;
- (id)standardizeHost:(id)a0;
- (void)startFetchSettings:(BOOL)a0;
- (void)_maybeFetchSDKRemoteConfig:(id)a0;
- (void)networkSchedule;
- (void)_asyncFetchRemoteConfigImmediately:(BOOL)a0;
- (void)_dealResponseFinishWithConfigs:(id)a0 updateAppIDs:(id)a1;
- (void)updateTransmissionDataWithDict:(id)a0 forAppID:(id)a1;
- (void)addProvider:(id)a0 forAppID:(id)a1;
- (void)removeProvider:(void *)a0 forAppID:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
