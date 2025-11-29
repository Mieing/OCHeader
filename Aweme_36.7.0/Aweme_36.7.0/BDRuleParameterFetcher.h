@class NSMutableDictionary, NSDictionary, BDRuleParameterBuilder, NSString;

@interface BDRuleParameterFetcher : NSObject <BDREExprEnv>

@property (copy, nonatomic) NSDictionary *extraParameters;
@property (retain, nonatomic) BDRuleParameterBuilder *builder;
@property (retain, nonatomic) NSMutableDictionary *cachedParameters;
@property (nonatomic) double cost;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getParameterWithKey:(id)a0 error:(id *)a1;
- (void)resetCost;
- (id)initWithExtraParameters:(id)a0;
- (id)usedParameters;
- (id)envValueOfKey:(id)a0;
- (void).cxx_destruct;

@end
