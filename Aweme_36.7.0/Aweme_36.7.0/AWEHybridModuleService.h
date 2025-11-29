@class NSString;

@interface AWEHybridModuleService : HTSService <AWEHybridModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)hybridContainerWithContext:(id)a0;
+ (id)hunterControllerWithSchema:(id)a0 delegate:(id)a1;
+ (id)hunterSchemaWithInitializationInfo:(id)a0;
+ (id)hunterPreserveDataManager;
+ (id)preserveDataManager;
+ (void)setInitDataWithURL:(id)a0 dataUsedOnceOnly:(id)a1;
+ (id)hunterPopupControllerWithSchema:(id)a0;
+ (id)getStorageObjectForKey:(id)a0;
+ (void)setStorageObject:(id)a0 forKey:(id)a1;
+ (void)removeStorageObjectForKey:(id)a0;
+ (void)relateAwemeModels:(id)a0 withCacheKey:(id)a1;
+ (void)relateAwemeModels:(id)a0 withCacheKey:(id)a1 needPreload:(BOOL)a2;
+ (void)addAwemeModels:(id)a0 withCacheKey:(id)a1;
+ (void)clearAwemeModelsForCacheKey:(id)a0;
+ (void)relateHunterMediaModels:(id)a0 withCacheKey:(id)a1;
+ (void)prefetchAPIForSchema:(id)a0 queryData:(id)a1;
+ (void)prefetchAPIForSchemaConfigs:(id)a0;
+ (void)preloadResourceWithSchema:(id)a0 dataResource:(id)a1 completionHandler:(id /* block */)a2;
+ (void)prefetchAPIAndPreloadResourceWithSchema:(id)a0 dataResource:(id)a1 queryData:(id)a2 completionHandler:(id /* block */)a3;
+ (void)preloadHunterContainer:(id)a0 forSchema:(id)a1 model:(id)a2 completion:(id /* block */)a3;
+ (void)feedWillBeginDraggingSceneName:(id)a0 extra:(id)a1;
+ (void)feedDidEndDraggingSceneName:(id)a0 willDecelerate:(BOOL)a1 extra:(id)a2;
+ (void)feedDidEndDeceleratingSceneName:(id)a0 extra:(id)a1;
+ (void)preActiveGeckoWithPositionType:(id)a0 positionID:(id)a1;
+ (void)openHunterContainerParamModelView:(id)a0;
+ (void)openHunterContainerParamModelView:(id)a0 completionHandler:(id /* block */)a1;
+ (void)openHunterContainerWithSchema:(id)a0 serverData:(id)a1 clientData:(id)a2 delegate:(id)a3;
+ (void)openHunterContainerWithSchema:(id)a0 serverData:(id)a1 clientData:(id)a2;
+ (id)hunterVideoViewPlayerVC:(id)a0;
+ (id)initHunterVideoComponentPlugin;
+ (void)hunterAppFirstScreenDidShowTaskRegister;
+ (id)hybridContainer;

@end
