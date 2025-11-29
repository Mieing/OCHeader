@class NSRecursiveLock, NSString, BDPObjectReusePool, BDPRuntimeApp, NSCache;

@interface BDPAppRuntimePreloadObject : NSObject <BDPDynamicPluginStateMessage, BDPAppPreloadCacheDataSource, BDPIndustrySDKMessage, BDPRuntimePreloadObjectProtocol> {
    NSCache *_runtimeCache;
}

@property BOOL isPreloading;
@property BOOL isPreloadMix;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) BDPRuntimeApp *runtime;
@property (retain, nonatomic) BDPRuntimeApp *pluginRuntime;
@property (retain, nonatomic) BDPObjectReusePool *runtimePool;
@property (nonatomic) BOOL preloadIndustrySDKWhenCreate;
@property (retain, nonatomic) BDPRuntimeApp *mixRuntime;
@property (nonatomic) BOOL preloadPdfOnMainThread;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLoad;
+ (id)getMixRuntime;
+ (id)getPreloadDataSource;
+ (BOOL)supportPreloadForType:(long long)a0;
+ (void)preloadMixRuntime:(id)a0 preloadId:(id)a1;
+ (id)getRuntime:(id)a0 schema:(id)a1 loader:(id)a2;
+ (void)releaseRuntime;
+ (void)preloadRuntime:(id)a0 schema:(id)a1 completion:(id /* block */)a2;
+ (void)preloadRuntime:(id)a0 schema:(id)a1 preloadId:(id)a2 completion:(id /* block */)a3;
+ (id)getRuntimeForPreDefineWithPreloadId:(id)a0;
+ (id)getRuntime:(id)a0;
+ (void)preloadRuntime:(id)a0 completion:(id /* block */)a1;
+ (id)sharedObject;

- (void)addNotifications;
- (void)receiveInterruptionNotification:(id)a0;
- (id)getMixRuntime;
- (void)preloadObjectWithModel:(id)a0 schema:(id)a1 reader:(id)a2 completion:(id /* block */)a3;
- (BOOL)preloadCache:(id)a0 shouldPreloadNextWithExistingObject:(id)a1;
- (void)preloadCache:(id)a0 willReleaseObject:(id)a1;
- (void)preloadObjectWithModel:(id)a0 schema:(id)a1 completion:(id /* block */)a2;
- (void)preloadMixRuntime:(id)a0 preloadId:(id)a1;
- (void)industrySDKDidUpdated:(id)a0 preloadId:(id)a1;
- (BOOL)reuseRuntime;
- (void)addFileWithFileName:(id)a0 pkgName:(id)a1 result:(id)a2;
- (id)getDependListWithFile:(id)a0 pkgName:(id)a1 predefineConfig:(id)a2;
- (BOOL)hasFileName:(id)a0 pkgName:(id)a1 result:(id)a2;
- (void)recursionParseDependList:(id)a0 pkgName:(id)a1 predefineConfig:(id)a2 result:(id)a3;
- (BOOL)preloadDefineFilesEnable;
- (BOOL)predefineCurrentPathOnly;
- (id)generatePredefineListWithPredefineConfig:(id)a0 startPath:(id)a1 reader:(id)a2 model:(id)a3;
- (void)startPreloadDefineFilesForRuntime:(id)a0 reader:(id)a1 completion:(id /* block */)a2;
- (void)clearPreloadDefineFilesForRuntime:(id)a0 completion:(id /* block */)a1;
- (void)recordPluginPredownloadWithResult:(id)a0 model:(id)a1 preloadID:(id)a2;
- (void)getAllPluginIdWithReader:(id)a0 startPagePath:(id)a1 model:(id)a2 completion:(id /* block */)a3;
- (void)findPluginListWithModel:(id)a0 pluginSet:(id)a1 startPagePath:(id)a2 result:(id /* block */)a3;
- (void)addPlugin:(id)a0 version:(id)a1 toList:(id)a2;
- (void)exeBOOLReturnValueJSWithCompletion:(id /* block */)a0 js:(id)a1 runtime:(id)a2;
- (void)clearPreloadDefineFilesForRuntime:(id)a0 reader:(id)a1 completion:(id /* block */)a2;
- (void)prefetchPluginWithModel:(id)a0 startPath:(id)a1;
- (void)reloadPDFWithModel:(id)a0 schema:(id)a1 reader:(id)a2 completion:(id /* block */)a3;
- (void)innerPreloadObjectReuseRuntimeWithModel:(id)a0 schema:(id)a1 reader:(id)a2 completion:(id /* block */)a3;
- (void)innerPreloadObjectWithModel:(id)a0 schema:(id)a1 reader:(id)a2 completion:(id /* block */)a3;
- (id)createRuntimeApp:(BOOL)a0 completeBlk:(id /* block */)a1;
- (void)preloadDefineFilesForRuntime:(id)a0 reader:(id)a1 model:(id)a2 completion:(id /* block */)a3;
- (void)loadPluginServiceWithReader:(id)a0 schema:(id)a1 model:(id)a2 runtime:(id)a3;
- (id)createPreloadLynxRuntimeApp:(id /* block */)a0;
- (void)preloadCache:(id)a0 willReleaseObject:(id)a1 finish:(id /* block */)a2;
- (id)createLynxRuntimeApp:(id)a0;
- (id)pr_getRuntimeCache:(id)a0;
- (void)preloadIndustrySDKIfNeeded:(id)a0 stage:(long long)a1 completeBlk:(id /* block */)a2;
- (BOOL)preLoadIndustrySDKIfNeeded;
- (id)getRuntime:(id)a0 pluginId:(id)a1 schema:(id)a2 loader:(id)a3;
- (void)releaseRuntime;
- (void)preloadInteractionPluginRuntime:(id)a0 preloadId:(id)a1 completion:(id /* block */)a2;
- (void)preloadRuntime:(id)a0 pluginId:(id)a1 preloadId:(id)a2 completion:(id /* block */)a3;
- (id)getRuntimeForPreDefineWithPreloadId:(id)a0;
- (void)pluginDidUpdate:(id)a0 pluginVersion:(id)a1 extra:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
