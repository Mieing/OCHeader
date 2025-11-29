@interface BDMixRenderCacheManager : NSObject

+ (void)relateCacheKey:(id)a0 withContainerId:(id)a1;
+ (id)keyForContainerId:(id)a0;
+ (id)keyForCacheKey:(id)a0 withContainerID:(id)a1;
+ (id)currentCacheKeysForContainerId:(id)a0;
+ (void)relateModels:(id)a0 withCacheKey:(id)a1 forContainerID:(id)a2;
+ (id)modelsForCacheKey:(id)a0 withContainerID:(id)a1;
+ (void)clearModelsForContainerId:(id)a0;

@end
