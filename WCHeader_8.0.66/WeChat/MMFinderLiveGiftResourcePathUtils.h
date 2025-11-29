@interface MMFinderLiveGiftResourcePathUtils : NSObject

+ (id)getMd5ForURL:(id)a0;
+ (id)cachePathForResourceID:(id)a0 fileMD5:(id)a1 resType:(long long)a2;
+ (id)unzipPathForResourceID:(id)a0 fileMD5:(id)a1 resType:(long long)a2;
+ (id)downloadPathForResourceID:(id)a0 fileMD5:(id)a1 resType:(long long)a2;
+ (id)giftCacheKey:(id)a0 animationId:(id)a1 scenarioKey:(id)a2;

@end
