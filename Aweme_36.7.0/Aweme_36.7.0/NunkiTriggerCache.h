@class NunkiSafeCache;

@interface NunkiTriggerCache : NSObject

@property (retain, nonatomic) NunkiSafeCache *triggerStrategyCacheDict;

- (void)setCacheStrategyKeys:(id)a0 forTriggerType:(id)a1;
- (id)cacheStrategyKeysForTriggerType:(id)a0;
- (void).cxx_destruct;

@end
