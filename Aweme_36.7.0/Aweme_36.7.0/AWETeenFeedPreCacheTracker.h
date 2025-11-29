@interface AWETeenFeedPreCacheTracker : NSObject

+ (void)trackRevokeCacheVideoWithCacheNum:(long long)a0;
+ (void)trackPullOutCacheVideoWithIsCache:(long long)a0 isTimeOut:(long long)a1 cacheNum:(long long)a2;
+ (void)trackCacheFeedRequest:(long long)a0;
+ (void)trackCacheFeedRequestResponse:(long long)a0 errorCode:(long long)a1 errorDesc:(id)a2;
+ (void)trackCacheVideoRequest;
+ (void)trackCacheVideoRequestResponse:(long long)a0;
+ (void)trackCacheConsume:(long long)a0;

@end
