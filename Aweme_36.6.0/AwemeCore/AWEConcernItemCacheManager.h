@class AWEConcernItemCacheModel, NSString, AWEAwemeModel;

@interface AWEConcernItemCacheManager : NSObject <AWEUserMessage, AWEConcernItemCacheManagerProtocol>

@property (retain, nonatomic) AWEConcernItemCacheModel *currentCacheModel;
@property (retain, nonatomic) AWEAwemeModel *cachedAwemeModel;
@property (copy, nonatomic) NSString *urlKeyToBeClear;
@property (nonatomic) BOOL hasLiveNotice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (long long)maxCacheCount;
- (double)maxCacheTime;
- (long long)videoCacheSize;
- (BOOL)isCachedAwemeValid;
- (void)clearCachedVideo;
- (BOOL)enableDownloadVideoOpportunity:(unsigned long long)a0;
- (void)startDownloadVideo;
- (BOOL)enableUseCachedAweme;
- (void)clearCachedAweme;
- (void)clearCachedAwemeWithoutVideo;
- (BOOL)enableColdStartOptimize;
- (void)resetCacheWithArray:(id)a0;
- (id)coldStartAidsParam;
- (void)clearCachedAwemeID;
- (void)setupCacheModelForCurrentUser;
- (void)setupCachedAwemeFromFile;
- (BOOL)shouldCacheMaxDigCountAweme;
- (id)targetAwemeInArray:(id)a0 sortType:(unsigned long long)a1;
- (double)calculateExpireTime;
- (id)cacheKeyForCurrentUser;
- (double)awemeCacheTimeInSeconds;
- (id)awemeCacheExpireKeyForCurrentUser;
- (id)fileCacheKeyForCurrentUser;
- (id)queryCachedItemIds;
- (void)trackCacheHitRate:(BOOL)a0 itemID:(id)a1;
- (id)coldStartCachedItemIdsParam;
- (id)emptyCachedItemIdsParam;
- (id)getRequestItemParamsForModel:(id)a0;
- (void)trackAwemeCacheCheckFail;
- (void)trackDownloadVideo:(id)a0 success:(BOOL)a1 extraParams:(id)a2;
- (void)trackDownloadVideo:(id)a0 success:(BOOL)a1;
- (void)startPreloadWithAweme:(id)a0 kbSize:(unsigned long long)a1 successBlock:(id /* block */)a2;
- (BOOL)enableCachedAwemeSafetyCheck;
- (void)checkCachedAwemeSafetyStatus;
- (long long)getDyQTimeFromModel:(id)a0;
- (long long)getTagFromModel:(id)a0;
- (void)deleteCacheWithAweme:(id)a0;
- (void)updateHasLiveNotice:(BOOL)a0;
- (BOOL)isFromColdLaunchCache:(id)a0;
- (void)trackRecallIfNeedWithAweme:(id)a0;
- (BOOL)shouldCache:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
