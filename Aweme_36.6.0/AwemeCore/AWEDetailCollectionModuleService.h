@class NSString;

@interface AWEDetailCollectionModuleService : HTSService <AWEDetailCollectionModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)showChallengeDetailHalfScreenOnVC:(id)a0 challengeID:(id)a1 challengeName:(id)a2 isCommerce:(BOOL)a3 completion:(id /* block */)a4 dismissBlock:(id /* block */)a5;
- (id)stickerDataControllerWithId:(id)a0;
- (id)mvDataControllerWithId:(id)a0;
- (id)relatedTemplateDataControllerWithParam:(id)a0;
- (void)requestChallengeItemWithID:(id)a0 isCommerce:(BOOL)a1 completion:(id /* block */)a2;
- (void)requestHashTagItemWithName:(id)a0 completion:(id /* block */)a1;
- (void)requestChallengeItemsWithIDArray:(id)a0 completion:(id /* block */)a1;
- (void)requestTaskItemWithID:(id)a0 completion:(id /* block */)a1;
- (Class)musicManagerClass;
- (void)trackEnteringStickerDetailIfNeededWithURLString:(id)a0 info:(id)a1;
- (void)trackOpeningCameraWithStickerIfNeededWithURLString:(id)a0 info:(id)a1;
- (BOOL)isURLStringLinkedToCamera:(id)a0;
- (Class)musicDetailViewControllerClass;
- (Class)propDetailViewControllerClass;
- (id)detailCollectionStorage;
- (id)convertModelToStringExceptUnavailableJSONObject:(id)a0;
- (id)convertString:(id)a0 toModelClass:(Class)a1;
- (id)preloadTrendsDetailInfoWithConfigParams:(id)a0 awemeModel:(id)a1 enableCombineNetworkRequest:(BOOL)a2 enableMemoryCache:(BOOL)a3 cacheExpireTime:(double)a4;
- (id)preloadFirstPageTrendsAwemeInfoWithConfigParams:(id)a0 awemeModel:(id)a1 enableCombineNetworkRequest:(BOOL)a2 enableMemoryCache:(BOOL)a3 cacheExpireTime:(double)a4;
- (void)clearNetworkRequestCacheForKey:(id)a0;
- (id)trendsPageRequestParamDictWithTrendInfoModel:(id)a0 awemeModel:(id)a1 configParams:(id)a2;
- (id)getSucaiTypeWithAwemeModel:(id)a0;
- (id)awemeModelOriginMaterialModelsForAwemeModel:(id)a0 needDuet:(BOOL)a1 needFlashSticker:(BOOL)a2 needGame:(BOOL)a3;
- (id)getShootCoreTrackParamsWithAwemeModel:(id)a0;
- (void)jumpToVideoCutPageWithTemplateJson:(id)a0 trackParams:(id)a1;
- (BOOL)isAvailableVideoCutMiddlePageSchema:(id)a0;
- (void)handleVideoCutMiddlePageSchema:(id)a0 followShootBlock:(id /* block */)a1;
- (id)convertModelToString:(id)a0;
- (void)jumpToVideoCutPageWithTemplateModel:(id)a0 trackParams:(id)a1;
- (id)createMusicDetailMusicCardViewWithConfig:(id)a0;
- (id)newChallengeDetailDescView;
- (id)challengeListDataController;
- (id)musicListDataController;
- (id)detailPageManager;
- (id)getNewUGIDParamForMajorUGID:(id)a0 minorUGID:(id)a1 pageType:(long long)a2;
- (id)createTemplateHelperWith:(id)a0 barContext:(id)a1;
- (id)cleanDictionary:(id)a0;
- (void)customTransitionWithInfo:(id)a0 path:(id)a1;
- (BOOL)isValidJSONObject:(id)a0;
- (id)cleanArray:(id)a0;

@end
