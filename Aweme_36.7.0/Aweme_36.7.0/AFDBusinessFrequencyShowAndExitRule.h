@class AFDBusinessFrequencyShowRule, AFDBusinessFrequencyExitRule;

@interface AFDBusinessFrequencyShowAndExitRule : AFDFrequencyRuleGroup

@property (retain, nonatomic) AFDBusinessFrequencyShowRule *showRule;
@property (retain, nonatomic) AFDBusinessFrequencyExitRule *exitActiveRule;
@property (retain, nonatomic) AFDBusinessFrequencyExitRule *exitPassiveRule;

- (void)setupShowRule:(id)a0 uidSpecific:(BOOL)a1 showBuild:(id /* block */)a2;
- (void)setupExitRule:(id)a0 uidSpecific:(BOOL)a1 exitBuild:(id /* block */)a2 isActive:(BOOL)a3;
- (void)addSingleRuleToGroup:(id)a0;
- (id)initWithIdentifer:(id)a0 uidSpecific:(BOOL)a1;
- (id)initWithIdentifer:(id)a0 uidSpecific:(BOOL)a1 showBuild:(id /* block */)a2 exitActiveBuild:(id /* block */)a3 exitPassiveBuild:(id /* block */)a4;
- (void).cxx_destruct;

@end
