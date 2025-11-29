@class AFDMomentItemDataProvider, NSString, AWEAwemeModel;

@interface AFDMomentCacheManager : NSObject <AFDMomentRingItemsMessage, AFDMomentCacheManagerProtocol>

@property (retain, nonatomic) AFDMomentItemDataProvider *momentCache;
@property (retain, nonatomic) AWEAwemeModel *temporaryCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)cacheMomentWithModel:(id)a0;
- (id)retrieveLocalAwemeList;
- (id)retrieveCachedAwemeForItemID:(id)a0;
- (void)preloadAwemeCacheWithRequestParams:(id)a0;
- (void)updateLikeStateWithAweme:(id)a0;
- (void)colorRingItemsDidConfig;
- (void)colorRingItemsDidChange;
- (void)p_setUpItemCacheIfNeed;
- (void)updateMomentItemCacheUserCenterDidChange;
- (id)retrieveCachedAwemeList;
- (id)retrieveCachedAwemeForColorRingUserID:(id)a0;
- (id)temporaryCacheForItemID:(id)a0;
- (void)temporaryCacheModel:(id)a0;
- (void)updateFavoriteStateWithAweme:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
