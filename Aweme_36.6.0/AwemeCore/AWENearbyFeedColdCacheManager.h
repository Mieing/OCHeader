@class NSMutableDictionary;

@interface AWENearbyFeedColdCacheManager : NSObject

@property (nonatomic) double timeoutInterval;
@property (nonatomic) BOOL hasInvoked;
@property (nonatomic) BOOL hasTrackedCacheNull;
@property (retain, nonatomic) NSMutableDictionary *cache;
@property (retain, nonatomic) NSMutableDictionary *invokeCacheImps;

+ (void)reportCacheMiss;
+ (id)feedKey:(long long)a0;
+ (id)prevFMPKey;
+ (id)cacheKey;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)awemeDeleteNotificationHandler:(id)a0;
- (id)setupCache;
- (void)preloadVideo:(id)a0;
- (void)storeFeedCacheWithFeedType:(long long)a0 feedRsp:(id)a1;
- (BOOL)hasValidCacheWithFeedType:(long long)a0;
- (void)subscribeWithFeedType:(long long)a0 block:(id /* block */)a1;
- (void)preLoadColdCache;
- (void)trackCacheMissWithReason:(id)a0 params:(id)a1;
- (void)registeObserver;
- (void)c2FeedbackNotificationHandler:(id)a0;
- (BOOL)enableFeedColdCache;
- (void)handleFeedCacheAfterPreLoadColdCache;
- (id)_getFeedCacheWithFeedType:(long long)a0 clean:(BOOL)a1;
- (long long)feedColdCacheMaxCount;
- (id)getLastNElement:(id)a0 maxCount:(long long)a1;
- (id)getNElement:(id)a0 maxCount:(long long)a1;
- (void)sortCacheByRank:(id)a0;
- (void)handleFeedCacheAfterReadWithFeedType:(long long)a0 feedRsp:(id)a1;
- (id)getFeedCacheWithFeedType:(long long)a0 clean:(BOOL)a1;
- (void)trackCacheMissCausedByUID;
- (void)trackCacheMissCausedByFeedType:(long long)a0;
- (void)_getFeedCacheWithFeedType:(long long)a0 completion:(id /* block */)a1 clean:(BOOL)a2;
- (void)checkCachedFeedAwemeSafetyStatus:(id /* block */)a0;
- (void)invokeCacheBlock:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)initManager;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
