@class NunkiStrategyModel, NSString, NSDictionary, Nunki, NunkiDecisionCache;

@interface NunkiDecisionMatcher : NSObject

@property (copy, nonatomic) NSString *key;
@property (retain, nonatomic) NunkiStrategyModel *strategyModel;
@property (copy, nonatomic) NSDictionary *operatorMap;
@property (retain, nonatomic) NunkiDecisionCache *decisionCache;
@property (retain, nonatomic) Nunki *nunkiService;

+ (id)new;

- (id)initWithKey:(id)a0 strategyModel:(id)a1;
- (BOOL)isMatchedWithCondition:(id)a0 isConfigCut:(BOOL)a1;
- (id)__checkMatchingWithCondition:(id)a0;
- (BOOL)checkMatchingWithCondition:(id)a0 isConfigCut:(BOOL)a1;
- (id)__decimalNumberForValue:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)match;

@end
