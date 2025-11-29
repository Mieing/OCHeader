@class NSMutableDictionary, NSArray, NSString, NSError, NSObject, NSLock;
@protocol OS_dispatch_queue, IESLiveEffectPlatformConfig;

@interface IESLiveEffectPlatformServiceImpl : NSObject <IESLiveEffectPlatformService>

@property (retain, nonatomic) id<IESLiveEffectPlatformConfig> config;
@property (retain, nonatomic) NSMutableDictionary *memoryCache;
@property (retain, nonatomic) NSMutableDictionary *pathToTag;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *actionQueue;
@property (retain, nonatomic) NSError *invalidError;
@property (retain, nonatomic) NSArray *effectPanelDownloadMonitorAllowList;
@property (retain, nonatomic) NSLock *fetchLock;
@property (retain, nonatomic) NSMutableDictionary *effectFetchListBlocks;
@property (retain, nonatomic) NSMutableDictionary *effectIsFetchingLists;
@property (retain, nonatomic) NSLock *pathToTagLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cachedEffectsOfPanel:(id)a0;
- (id)cachedEffectsOfPanel:(id)a0 category:(id)a1;
- (void)markReadForCategory:(id)a0;
- (void)dispatchAction:(id /* block */)a0 completion:(id /* block */)a1;
- (void)fetchEffectListWithPanel:(id)a0 completion:(id /* block */)a1;
- (void)fetchEffectListWithPanel:(id)a0 cacheFirst:(BOOL)a1 completion:(id /* block */)a2;
- (void)fetchCategoryListForPanel:(id)a0 completion:(id /* block */)a1;
- (void)fetchCategoryListForPanel:(id)a0 cacheFirst:(BOOL)a1 completion:(id /* block */)a2;
- (void)fetchCategoryListForPanel:(id)a0 cacheFirst:(BOOL)a1 fetchChildrenCategory:(BOOL)a2 completion:(id /* block */)a3;
- (void)fetchCategoryModelListWithPanel:(id)a0 categoryIDList:(id)a1 extraParameters:(id)a2 completion:(id /* block */)a3;
- (void)fetchFavorList:(id)a0 completion:(id /* block */)a1;
- (void)fetchFavorEffectsWithPanel:(id)a0 completion:(id /* block */)a1;
- (void)fetchUsedVideoStickers:(id /* block */)a0;
- (void)fetchEffectListForPanel:(id)a0 category:(id)a1 pageCount:(int)a2 completion:(id /* block */)a3;
- (void)fetchEffectListForPanel:(id)a0 category:(id)a1 pageCount:(int)a2 enableCache:(BOOL)a3 completion:(id /* block */)a4;
- (void)fetchEffectListWithPanel:(id)a0 category:(id)a1 pageCount:(long long)a2 cursor:(long long)a3 sortingPosition:(long long)a4 completion:(id /* block */)a5;
- (void)downloadEffect:(id)a0 progress:(id /* block */)a1 completion:(id /* block */)a2 retryCount:(long long)a3;
- (void)downloadEffectListWithEffectIDS:(id)a0 completion:(id /* block */)a1 retryCount:(long long)a2;
- (void)downloadEffectListWithResourceIDs:(id)a0 panel:(id)a1 completion:(id /* block */)a2 retryCount:(unsigned long long)a3;
- (void)updateFavorForEffectIds:(id)a0 panel:(id)a1 favor:(BOOL)a2 completion:(id /* block */)a3;
- (void)downloadOnlineInfosAndResourcesWithModelNames:(id)a0 extra:(id)a1 completion:(id /* block */)a2;
- (void)downloadAlgorithmRequirements:(id)a0 completion:(id /* block */)a1;
- (void)downloadAlgorithmRequirements:(id)a0 modelNames:(id)a1 completion:(id /* block */)a2;
- (void)fetchSearchEffectsWithKeyWord:(id)a0 searchId:(id)a1 cursor:(long long)a2 pageCount:(long long)a3 extra:(id)a4 completion:(id /* block */)a5;
- (void)fetchSearchRecommendWordsWithPanel:(id)a0 category:(id)a1 extra:(id)a2 completion:(id /* block */)a3;
- (id)getTagsFromFilePaths:(id)a0;
- (id)panelDownloadMonitorAllowList;
- (void)checkEffectUpdateWithPanel:(id)a0 cacheFirst:(BOOL)a1 completion:(id /* block */)a2;
- (void)addFetchListBlockWithPanel:(id)a0 completion:(id /* block */)a1;
- (void)carryOutFetchListBlocksWtihPanel:(id)a0 error:(id)a1 response:(id)a2;
- (void)cacheTagsWithResponseModel:(id)a0;
- (void)downloadEffectListWithPanel:(id)a0 completion:(id /* block */)a1 index:(unsigned long long)a2;
- (void)cacheTagsWithEffects:(id)a0;
- (void)fetchEffectListWithPanel:(id)a0 category:(id)a1 pageCount:(int)a2 index:(int)a3 completion:(id /* block */)a4;
- (void)downloadEffect:(id)a0 progress:(id /* block */)a1 completion:(id /* block */)a2 index:(unsigned long long)a3;
- (void).cxx_destruct;
- (id)init;
- (void)clearMemoryCache;

@end
