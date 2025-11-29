@class NSDictionary, NSString;

@interface BDStrategyStore : NSObject

@property BOOL isLoadStrategyFinished;
@property (retain, nonatomic) NSDictionary *strategiesMap;
@property (copy, nonatomic) NSString *signature;
@property (readonly, nonatomic) Class selectCacheImpl;

- (id)jsonFormat;
- (void)loadStrategy:(id)a0;
- (BOOL)shouldUseRuleFFFInSet:(id)a0;
- (BOOL)ruleExecBreakInSet:(id)a0;
- (id)ruleGroupGraphWithName:(id)a0 inSet:(id)a1;
- (id)hitConditionWithSetName:(id)a0;
- (id)strategyRuleWithName:(id)a0 inSet:(id)a1;
- (BOOL)strategySelectBreakInSet:(id)a0;
- (id)strategyMapKeysInSet:(id)a0;
- (BOOL)enableSelectCacheInSet:(id)a0;
- (id)strategyMapRuleInSet:(id)a0;
- (id)strategyMapGraphInSet:(id)a0;
- (id)reportParamsInSet:(id)a0;
- (void)preprocessStrategy:(id)a0;
- (void)__preprocessStrategy:(id)a0;
- (void)__loadStrategy:(id)a0;
- (id)parseStrategy:(id)a0;
- (id)strategyMapRuleMD5Map;
- (id)findInstructionInRule:(id)a0;
- (id)storeWithName:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setup;

@end
