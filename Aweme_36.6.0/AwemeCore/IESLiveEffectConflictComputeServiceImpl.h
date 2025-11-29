@interface IESLiveEffectConflictComputeServiceImpl : NSObject

+ (id)getDiffFromEffects:(id)a0 notInEffects:(id)a1;
+ (void)applyWithEffectList:(id)a0 scene:(long long)a1 conflictModel:(id)a2 completion:(id /* block */)a3;
+ (void)removeWithEffectList:(id)a0 scene:(long long)a1 conflictModel:(id)a2 completion:(id /* block */)a3;

@end
