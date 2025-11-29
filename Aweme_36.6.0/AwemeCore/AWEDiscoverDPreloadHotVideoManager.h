@interface AWEDiscoverDPreloadHotVideoManager : NSObject

+ (void)removeAllCachesForType:(long long)a0;
+ (void)cacheVideos:(id)a0 forKeyword:(id)a1 type:(long long)a2;
+ (id)feedTipSharedCache;
+ (id)generalSearchSharedCache;
+ (id)cacheForType:(long long)a0;
+ (BOOL)containsVideoForKeyword:(id)a0 type:(long long)a1;
+ (id)videoArrayForKeyword:(id)a0 type:(long long)a1;

@end
