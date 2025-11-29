@class NSString, NSDictionary, AWESmartFeedResponseModel, NSMutableArray;

@interface AWEConcernFakeRefreshManager : NSObject <AWEUserMessage, AWEConcernFakeRefreshManagerProtocol>

@property (retain, nonatomic) AWESmartFeedResponseModel *cachedResponseModel;
@property (retain, nonatomic) NSMutableArray *cachedCardList;
@property (retain, nonatomic) NSDictionary *fakeRefreshV3Config;
@property (nonatomic) double refreshTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (double)maxCacheTime;
- (void)videoPlay:(id)a0;
- (id)fetchCachedResponseWithFakeStrategy:(unsigned long long)a0;
- (void)awemeListCacheStorage;
- (id)uniqueIDForAweme:(id)a0;
- (void)removeLastViewModelAtIndex:(long long)a0;
- (void)removeAwemeWithUniqueID:(id)a0;
- (void)trackMissRefreshCacheWithReason:(unsigned long long)a0;
- (BOOL)isCacheExpired;
- (BOOL)isValidCacheModel:(id)a0 fakeStrategy:(unsigned long long)a1;
- (double)minCacheCount;
- (void)updateLastViewModelIndexWithOffset:(long long)a0;
- (void)trackHitRefreshCacheWithFakeStrategy:(unsigned long long)a0;
- (BOOL)enableFakeRefreshV4;
- (BOOL)isInRefreshIntervel;
- (void)clearCacheWithUserID:(id)a0;
- (double)fakeRefreshV3CacheDuration;
- (double)maxCacheTimeForHistoryAweme;
- (BOOL)isHistoryAwemeExpired;
- (double)fakeRefreshV3RefreshIntervel;
- (unsigned long long)fakeRefreshV4Config;
- (long long)fakeRefreshV4SortMode;
- (id)fetchFakeRefreshResponseWithParams:(id)a0 fakeStrategy:(unsigned long long)a1;
- (void)addResponse:(id)a0 isFromRefresh:(BOOL)a1;
- (void)addCardList:(id)a0;
- (void)removeAweme:(id)a0 atIndex:(long long)a1;
- (unsigned long long)canUseCacheParams:(id)a0 isShowingRedDotForFakeRefresh:(BOOL)a1;
- (void)clearCacheNotFromSort;
- (void)appendCardListToResponse:(id)a0;
- (BOOL)fakeRefreshV4ColdLaunchCache;
- (id)fakeRefreshV4CacheUpdate:(id)a0;
- (id)fakeRefreshV4ParamCreateWithPush:(BOOL)a0 isColdLaunch:(BOOL)a1;
- (void)updateRefreshTime;
- (void)printLogForCachedCardListWithScene:(id)a0 cardList:(id)a1;
- (void).cxx_destruct;
- (void)clear;
- (id)init;
- (void)dealloc;

@end
