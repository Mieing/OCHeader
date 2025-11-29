@interface TMNetworkContentDetectStore : NSObject

+ (void)startCacheType:(id)a0;
+ (id)getCacheItemsWithType:(id)a0 cacheParams:(id)a1;
+ (id)getCacheItemsWithType:(id)a0;
+ (id)cacheClassType:(id)a0;
+ (id)sharedInstanceType:(id)a0;
+ (BOOL)detectedCacheType:(id)a0 cacheParams:(id)a1 withContent:(id)a2;
+ (void)clearCache;

@end
