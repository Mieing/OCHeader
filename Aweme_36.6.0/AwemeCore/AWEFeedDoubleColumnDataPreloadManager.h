@interface AWEFeedDoubleColumnDataPreloadManager : NSObject

+ (BOOL)enableUserAvatarCache;
+ (BOOL)cacheDistinguishUser;
+ (void)preloadCoverWithAwemeList:(id)a0;
+ (id)dcFeedPayload;
+ (id)imageCacheConfig;
+ (void)requestDataWithCount:(long long)a0 completion:(id /* block */)a1;
+ (void)recorderRequestCacheIsRefreshed:(BOOL)a0;
+ (BOOL)isRequestCacheRefreshed;

@end
