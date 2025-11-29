@interface HunterVideoManager : NSObject

+ (void)relateAwemeModels:(id)a0 withCacheKey:(id)a1;
+ (void)relateAwemeModels:(id)a0 withCacheKey:(id)a1 needPreload:(BOOL)a2;
+ (void)addAwemeModels:(id)a0 withCacheKey:(id)a1;
+ (void)clearAwemeModelsForCacheKey:(id)a0;
+ (void)relateHunterMediaModels:(id)a0 withCacheKey:(id)a1;
+ (id)modelForCacheKey:(id)a0 index:(long long)a1;
+ (void)clearAwemeModelsForContainerId:(id)a0;
+ (void)relateCacheKey:(id)a0 withContainerId:(id)a1;
+ (id)modelsForCacheKey:(id)a0;
+ (id)keyForContainerId:(id)a0;
+ (id)cacheKeysForContainerId:(id)a0;

@end
