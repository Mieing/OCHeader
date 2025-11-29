@class NSArray, NSDictionary, NSString, BDPUniqueID;

@interface BDPNativeAppPluginManager : NSObject <BDPBootLifeCycleMessage, BDPContainerLifeCycleMessage>

@property (nonatomic) BOOL pluginSDKPreloadEnable;
@property (nonatomic) BOOL pluginSDKPrefetchEnable;
@property (nonatomic) BOOL allPluginSDKPrefetchEnable;
@property (nonatomic) BOOL preDownloadIfNeededEnable;
@property (nonatomic) BOOL preDownloadCloudPluginsEnable;
@property (retain, nonatomic) BDPUniqueID *currentUniqueID;
@property (copy, nonatomic) NSDictionary *pluginInfo;
@property (copy, nonatomic) NSDictionary *hostLibraConfig;
@property (copy, nonatomic) NSArray *preDownloadExcludeArray;
@property (nonatomic) BOOL injectHostConfig;
@property (nonatomic) BOOL prefetchPluginWhenMetaReady;
@property (copy, nonatomic) NSDictionary *defaultIndustryPluginMap;
@property (nonatomic) BOOL fixPreloadGetCommon;
@property (nonatomic) BOOL disableFixPluginPkgState;
@property (nonatomic) BOOL disableFixPluginLoaderCache;
@property (nonatomic) BOOL allowUsePluginSDK;
@property (nonatomic) BOOL enableDomainSort;
@property (nonatomic) BOOL disableFixPreloadError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;
+ (id)preDownloadExcludeArray;
+ (id)sharedManager;

- (BOOL)allowPluginSDKPrefetch;
- (BOOL)allowPluginSDKPreload;
- (BOOL)allowPluginSDKPreDownloadIfNeeded;
- (BOOL)allowPluginSDKPreDownloadCloudPlugins;
- (id)predownLoadCloudPluginList;
- (BOOL)prefetchWhenMetaReady;
- (id)mapIndustrySdkComponent:(id)a0 model:(id)a1;
- (id)mapIndustrySdkPagePath:(id)a0 model:(id)a1;
- (void)updateSdkIfNeeded;
- (void)updatePluginSdkSwitchIfNeeded;
- (id)defaultIndustrySDKPluginMapString;
- (BOOL)getAllowUsePluginSDKConfig;
- (id)makeDefaultIndustryPluginMap;
- (id)mergeIndustrySDKPluginMap:(id)a0;
- (void)downloadDebug:(id)a0 url:(id)a1 version:(id)a2 callback:(id /* block */)a3;
- (void).cxx_destruct;
- (id)init;
- (void)setup;

@end
