@interface CSJRewardedVideoPreloaderManager : NSObject

@property (copy, nonatomic) id /* block */ reuseCallBack;
@property (nonatomic) BOOL isAdMarkUp;

+ (id)defaultPersistence;
+ (void)clearCacheRewardedMaterial;
+ (id)sharedInstance;

- (id)dictionaryToJson:(id)a0;
- (void)logUse_playable_test_tool_error:(id)a0 url:(id)a1;
- (id)getLocalPlayableMaterialMetaWithSlot:(id)a0;
- (id)defaulMaterialMetaDict;
- (void)materialMetaForRewardedVideoSlot:(id)a0 sucess:(id /* block */)a1 failure:(id /* block */)a2 successLoadVideo:(id /* block */)a3;
- (BOOL)needHandelPlayableTool;
- (void)handelPlayableToolWithSlot:(id)a0 sucess:(id /* block */)a1 failure:(id /* block */)a2 successLoadVideo:(id /* block */)a3;
- (id)materialMetasFromCacheWithSlotId:(id)a0;
- (void)callSuccessBlock:(id /* block */)a0 withMaterialMetas:(id)a1;
- (void)getMaterialMetaFromNetworkWithSlot:(id)a0 sucess:(id /* block */)a1 failure:(id /* block */)a2 successLoadVideo:(id /* block */)a3 failureLoadVideo:(id /* block */)a4 IsPre:(BOOL)a5;
- (void)handlePurePlayableMaterialMeta:(id)a0 slot:(id)a1;
- (void)saveRewardVideoPreloadMaterialMetas:(id)a0 slotId:(id)a1;
- (void)materialMetaForRewardedVideoSlot:(id)a0 materiaReuse:(id /* block */)a1 sucess:(id /* block */)a2 failure:(id /* block */)a3 successLoadVideo:(id /* block */)a4;
- (void)callSuccessBlock:(id /* block */)a0 withMaterial:(id)a1;
- (void)preloadWithMaterialMeta:(id)a0 adSlot:(id)a1 successLoadVideo:(id /* block */)a2;
- (void)cleanRewardAgianSecondAdWithSlotId:(id)a0;
- (void)loadPreMaterialMetaWithSlot:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
