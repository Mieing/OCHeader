@class NSDictionary, BDRuleExecutor;

@interface RunnerContext : NSObject

@property (retain, nonatomic) BDRuleExecutor *executor;
@property (retain, nonatomic) NSDictionary *inputParams;
@property (nonatomic) BOOL strategySelectHitCache;
@property (nonatomic) BOOL strategySelectFromGraph;
@property (nonatomic) BOOL strategySelectFromGraphTrie;
@property (nonatomic) BOOL executeFromRuleFFF;
@property (nonatomic) double startTime;
@property (nonatomic) double startSelectStrategyTime;
@property (nonatomic) double ruleExecuteEndTime;
@property (nonatomic) double startBuildRuleTime;
@property (nonatomic) double startComputeRuleTime;

- (void).cxx_destruct;
- (id)initWithParams:(id)a0;

@end
