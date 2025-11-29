@class NSDictionary;

@interface IESLivePEStrategyDataParser : NSObject

@property (copy, nonatomic) NSDictionary *factors;

- (double)executeWeightRules:(id)a0;
- (double)executeSpeedFormulaRules:(id)a0;
- (long long)executeNormalRules:(id)a0 defaultValue:(long long)a1;
- (long long)convertedResultWithScore:(double)a0 resultModels:(id)a1;
- (BOOL)executeExpression:(id)a0 withFactors:(id)a1;
- (BOOL)executeExpression:(id)a0;
- (double)mappingFactorWithRuleModel:(id)a0;
- (id)executeStrategyModel:(id)a0 withFactors:(id)a1;
- (void).cxx_destruct;

@end
