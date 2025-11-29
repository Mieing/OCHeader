@class BDPDynamicPluginModelStore, NSMutableDictionary, BDPDynamicPluginFileStorage, NSString, NSObject;
@protocol OS_dispatch_semaphore;

@interface BDPDynamicPluginManager : NSObject <BDPDynamicPluginLoadMessage, BDPAppPreloadMessage, BDPBusinessUpdateHandlerProtocol>

@property (retain, nonatomic) NSMutableDictionary *downloadingPlugin;
@property (retain, nonatomic) NSMutableDictionary *unzipPlugin;
@property (retain, nonatomic) NSMutableDictionary *loaderRefCountMap;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *loaderRefCountMapLock;
@property (retain, nonatomic) BDPDynamicPluginModelStore *modelStore;
@property (retain, nonatomic) BDPDynamicPluginFileStorage *pluginStorage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)updateRelativeDataIfNeed;
+ (void)bootstrapLaunch;
+ (id)pluginLoaderWithId:(id)a0 uniqueID:(id)a1;
+ (void)retainLoader:(id)a0;
+ (void)releaseLoader:(id)a0;
+ (void)addNewPluginModel:(id)a0;
+ (void)updateAllInnerPluginsIfNeeded;
+ (void)lifeCycleWorkBeforeLoad;
+ (id)pluginPathFromModel:(id)a0;
+ (void)unzipLocalPlugin:(id)a0 pluginVersion:(id)a1 localPath:(id)a2 completion:(id /* block */)a3;
+ (void)updatePluign:(id)a0 updateType:(long long)a1 completion:(id /* block */)a2;
+ (void)metaEndLogWithSchema:(id)a0 beginDate:(id)a1 response:(id)a2 model:(id)a3 error:(id)a4;
+ (BOOL)checkModel:(id)a0 andMoveFileFrom:(id)a1 finalPath:(id)a2 error:(id *)a3;
+ (void)pkgDownloadEndLogWithSchema:(id)a0 beginDate:(id)a1 model:(id)a2 response:(id)a3 error:(id)a4;
+ (void)updatePluign:(id)a0 schema:(id)a1 updateType:(long long)a2 completion:(id /* block */)a3;
+ (void)squeueUpdateAllInnerPlugins:(id)a0;
+ (id)loaderRefCountKeyForLoader:(id)a0;
+ (id)loaderRefCountKeyForPluginName:(id)a0 version:(id)a1;
+ (id)sharedManager;

- (void)appPreloadHasBeenTriggeredWithInfos:(id)a0;
- (void)retainLoader:(id)a0;
- (void)releaseLoader:(id)a0;
- (void)loadFile:(id)a0 fromDynamicPlugin:(id)a1 isSync:(BOOL)a2 completion:(id /* block */)a3;
- (void)autoCleanPluginFile;
- (void)deleteOldUnusingPluginFile;
- (void)clearCacheExtremely;
- (void)updatePluginAsyncIfNeeded:(id)a0;
- (BOOL)hasLaunchedMiniAppWithDays:(long long)a0;
- (void)deleteOldPluginFile;
- (long long)pluginUseStateForModel:(id)a0;
- (void)cleanPluginForModel:(id)a0;
- (void)cleanPluginIfNeedForName:(id)a0 belowVersion:(id)a1;
- (void)deleteAllPluginCache;
- (void).cxx_destruct;
- (id)init;

@end
