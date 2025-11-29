@class NSRecursiveLock, NSMutableDictionary, BDPUniqueID;

@interface BDPDynamicPluginConfigLoader : NSObject

@property (retain, nonatomic) NSMutableDictionary *penddingComplete;
@property (retain, nonatomic) NSMutableDictionary *pluginPerfs;
@property (retain, nonatomic) NSMutableDictionary *pluginInfos;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) NSRecursiveLock *lock;

- (id)perfForPluginId:(id)a0;
- (void)eventLoadPluginConfigEndWithPluginId:(id)a0 error:(id)a1 loadType:(long long)a2 beginTime:(double)a3;
- (void)p_loadPluginConfigDataWithName:(id)a0 checkPath:(id)a1 loadType:(long long)a2 completion:(id /* block */)a3;
- (void)loadPluginConfigDataWithLoader:(id)a0 loadType:(long long)a1 completion:(id /* block */)a2;
- (id)configDictionaryByMergeConfigData:(id)a0 pluginID:(id)a1 toAppConfig:(id)a2;
- (id)pluginInfoForPluginId:(id)a0;
- (void)p_loadPluginConfigDictWithPluginId:(id)a0 checkPath:(id)a1 loadType:(long long)a2 completion:(id /* block */)a3;
- (void)eventLoadPluginConfigStartWithPluginId:(id)a0 loadType:(long long)a1;
- (long long)loadStateForPluginId:(id)a0;
- (void)_loadPluginConfigWithPluginId:(id)a0 checkPath:(id)a1 loadType:(long long)a2 complete:(id /* block */)a3;
- (void)addPenddingComplete:(id /* block */)a0 forPluginId:(id)a1;
- (id)getLoadedConfigWithPluginID:(id)a0;
- (void)setLoadState:(long long)a0 forPluginId:(id)a1;
- (void)pluginDidLoadFinished:(id)a0;
- (id)penddingCompleteBlkForPluginId:(id)a0;
- (void)clearAppPendingCompletesForPluginId:(id)a0;
- (void)handleAndCallbackPenddingBlocksWithError:(id)a0 forPluginId:(id)a1 realPluginId:(id)a2;
- (void)p_loadMergedConfigDictWithPluginId:(id)a0 checkPath:(id)a1 appConfig:(id)a2 loadType:(long long)a3 completion:(id /* block */)a4;
- (void)setPluginVersion:(id)a0 forPluginId:(id)a1;
- (id)initWithUnqiueID:(id)a0;
- (void)loadPluginConfigWithPluginId:(id)a0 checkPath:(id)a1 loadType:(long long)a2 complete:(id /* block */)a3;
- (void)updateMergedConifgDict:(id)a0 launchFromPluginId:(id)a1;
- (void).cxx_destruct;

@end
