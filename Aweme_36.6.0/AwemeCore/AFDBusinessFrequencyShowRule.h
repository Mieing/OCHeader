@class AFDBusinessFrequencyShowRuleContext;

@interface AFDBusinessFrequencyShowRule : AFDFrequencyRuleGroup

@property (retain, nonatomic) AFDBusinessFrequencyShowRuleContext *context;

- (void)addCount;
- (void)addOfRuleID:(id)a0;
- (void)resetOfRuleID:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id /* block */)a0;
- (void)reset;
- (void)setupRules;

@end
