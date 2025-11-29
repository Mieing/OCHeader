@class AFDBusinessFrequencyExitRuleContext;

@interface AFDBusinessFrequencyExitRule : AFDFrequencyRuleGroup

@property (retain, nonatomic) AFDBusinessFrequencyExitRuleContext *context;

- (void)addCount;
- (void)addOfRuleID:(id)a0;
- (void)resetOfRuleID:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id /* block */)a0;
- (void)reset;
- (void)setupRules;

@end
