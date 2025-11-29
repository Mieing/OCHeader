@class NunkiResultCache, NunkiRecovery, NSString, NunkiStrategyCache, NunkiConditionCache, NunkiModeFilter, NunkiSmartServiceStrategyConfigCache;

@interface NunkiConfigCenter : NSObject <NunkiRecoveryDelegate, NunkiConfigCenterService>

@property (retain, nonatomic) NunkiStrategyCache *cacheManager;
@property (retain, nonatomic) NunkiConditionCache *conditionCacheManager;
@property (retain, nonatomic) NunkiResultCache *resultCacheManager;
@property (retain, nonatomic) NunkiSmartServiceStrategyConfigCache *smartStrategyConfigCacheManager;
@property (retain, nonatomic) NunkiRecovery *recoveryManager;
@property (retain, nonatomic) NunkiModeFilter *filter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)enableStrategyWithKey:(id)a0;
- (id)strategyWithKey:(id)a0;
- (id)conditionWithKey:(id)a0;
- (id)resultWithKey:(id)a0;
- (void)updateCacheConfig:(id)a0 forKey:(id)a1;
- (id)smartStrategyConfigWithKey:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
