@class NSString, NSDictionary;

@interface BDStrategyParseRuleStore : NSObject

@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSDictionary *dict;

- (void)loadCommandsAndEnableExecutor:(BOOL)a0;
- (id)jsonFormat;
- (void)updatePolicyMap:(id)a0 strategies:(id)a1;
- (id)strategyRuleWithName:(id)a0;
- (id)initWithSource:(id)a0;
- (void).cxx_destruct;
- (void)clear;

@end
