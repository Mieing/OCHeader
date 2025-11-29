@interface AWEIMGroupImpl.FriendsAlbumCacheService : NSObject <IESIMFriendsAlbumCacheServiceInterface> {
    void /* unknown type, empty encoding */ preloadCache;
    void /* unknown type, empty encoding */ enableFriendsAlbum;
}

- (long long)friendsAlbumPreloadCounts;
- (id)preloadAssetsModelsForCid:(id)a0;
- (void)removePreloadAssetsModelsForCid:(id)a0;
- (void)updatePreloadAssetsModelsForCid:(id)a0 assetsModels:(id)a1;
- (id)makeCacheModel;
- (void)storeCacheModel:(id)a0;
- (id)cacheModelForIdentifier:(id)a0;
- (id)refreshHandlerWithComponentCenter:(id)a0;
- (id)refreshHandlerWithConversationContext:(id)a0;
- (BOOL)supportRefresh;
- (void).cxx_destruct;
- (id)init;

@end
