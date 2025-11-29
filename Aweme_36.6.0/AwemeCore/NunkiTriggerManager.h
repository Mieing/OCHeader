@class NunkiTriggerCache, NunkiTriggersModel, NunkiTriggerParser;

@interface NunkiTriggerManager : NSObject

@property (retain, nonatomic) NunkiTriggerCache *triggerStrategyCache;
@property (retain, nonatomic) NunkiTriggerParser *triggerParser;
@property (retain, nonatomic) NunkiTriggersModel *triggerStrategyModel;

+ (id)sharedInstance;

- (void)triggerWithType:(id)a0;
- (id)allTriggers;
- (id)strategysWithTrigger:(id)a0;
- (id)strategyKeysWithTriggerType:(id)a0;
- (void).cxx_destruct;

@end
