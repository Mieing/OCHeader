@class NSString;

@interface BDPBootService : NSObject <BDPBusinessLoaderServiceProtocol, BDPBusinessUpdateHandlerProtocol, BDPAppPreloadMessage, BDPFrontendSDKDelegate>

@property (copy, nonatomic) id /* block */ preloadAppCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLoad;
+ (BOOL)clearWarmBootCacheOfAppID:(id)a0;
+ (void)clearDiskWithCompletion:(id /* block */)a0 isAuto:(BOOL)a1;
+ (void)clearDiskExtremelyWithCompletion:(id /* block */)a0;
+ (void)clearAppAllCachesWithAppID:(id)a0;
+ (long long)calculateCleanCacheSizeWithTriggerType:(long long)a0 cleanLevel:(long long)a1;
+ (void)updateRelativeDataIfNeed;
+ (void)clearAllUserCache;
+ (void)clearAllWarmBootCacheWithType:(long long)a0;
+ (void)clearAllWarmBootCache;
+ (BOOL)enablePreloadNativeAppWithCaller:(id)a0;
+ (BOOL)enablePreloadNativeGameJSCWithCaller:(id)a0;
+ (void)preloadAppSettingsParsingWithInfos:(id)a0 completion:(id /* block */)a1;
+ (BOOL)enablePreloadUnityPageWithCaller:(id)a0;
+ (BOOL)enablePreloadRuntimeWithCaller:(id)a0 config:(id)a1 type:(long long)a2;
+ (void)startPrelaodAppFrame;
+ (id)urlsOnDiskPaths;
+ (void)calculateSizeWithCompletion:(id /* block */)a0;
+ (BOOL)clearWarmBootCacheOfAppID:(id)a0 versionType:(id)a1;
+ (void)preDownloadAppsWithInfos:(id)a0 degradeStrategy:(id)a1;
+ (void)preloadTimorContextWithCaller:(id)a0;
+ (void)prepareAppContainer;
+ (void)releasePreloadResourceWhenReceiveHostMemoryNotification:(long long)a0;
+ (BOOL)clearWarmBootCacheOfSchemaURL:(id)a0;
+ (void)registerCompletionHandlerForAppPreload:(id /* block */)a0;
+ (id)sharedService;

- (void)appPreloadWithAppConfigInfos:(id)a0 gameType:(long long)a1;
- (void)appPreloadHasBeenTriggeredWithInfos:(id)a0;
- (void)appPreloadFinishedWithModel:(id)a0 schema:(id)a1 error:(id)a2;
- (void)clearAllWarmBootCacheIfNeed;
- (void)tryPreloadAfterUpdateLibIfNeed;
- (void)setPreloadFunctionsDisabled:(BOOL)a0;
- (void)clearMemoryCacheIfNeed;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
