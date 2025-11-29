@class NSDictionary, HTSLiveStrategyRule;

@interface IESLivePEDecisionWorkflow : NSObject

@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) NSDictionary *featureSet;
@property (retain, nonatomic) HTSLiveStrategyRule *strategy;
@property (retain, nonatomic) NSDictionary *trigger;
@property (nonatomic) BOOL useCalculatorV2;

- (void)workflowCompleteWith:(id)a0;
- (void)executeStrategy:(id)a0 withFeatureSet:(id)a1 completion:(id /* block */)a2;
- (void)executeConditionRule:(id)a0 withFeatureSet:(id)a1 completion:(id /* block */)a2;
- (void)executeAstRules:(id)a0 withFeatureSet:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)execute;

@end
