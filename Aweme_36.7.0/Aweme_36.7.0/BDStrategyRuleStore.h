@class NSString, NSArray, BDREDiGraph, BDRuleGroupModel, NSMutableDictionary, BDRuleHitConditionModel, BDStrategyParseRuleStore, NSDictionary;

@interface BDStrategyRuleStore : NSObject

@property (copy, nonatomic) NSString *source;
@property (nonatomic) BOOL enableFFF;
@property (nonatomic) BOOL enableRuleFFF;
@property (nonatomic) BOOL enableSelectCache;
@property (nonatomic) BOOL strategySelectBreak;
@property (nonatomic) BOOL ruleExecBreak;
@property (nonatomic) BOOL shouldUseRuleFFF;
@property (retain, nonatomic) NSArray *reportParams;
@property (retain, nonatomic) BDRuleGroupModel *strategyMapRuleModel;
@property (retain, nonatomic) BDREDiGraph *strategyMapGraph;
@property (retain, nonatomic) NSMutableDictionary *ruleGroupGraphs;
@property (retain, nonatomic) BDStrategyParseRuleStore *subStore;
@property (retain, nonatomic) BDRuleHitConditionModel *strategyHitConditionModel;
@property (retain, nonatomic) NSDictionary *constPoolRawDict;

- (void)loadCommandsAndEnableExecutor:(BOOL)a0;
- (id)jsonFormat;
- (id)strategyRuleWithName:(id)a0;
- (id)strategyMapRule;
- (void)extractConstPool:(id)a0;
- (void)loadGraphExecutor;
- (void)updateStrategies:(id)a0;
- (id)hitConditionModel;
- (id)ruleGroupGraphWithName:(id)a0;
- (id)strategySelectMD5;
- (id)initWithSource:(id)a0;
- (void).cxx_destruct;
- (void)clear;

@end
