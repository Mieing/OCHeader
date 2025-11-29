@class BDSingleRuleResult, NSArray, NSString, NSDictionary, NSError;

@interface BDRuleResultModel : NSObject

@property (retain, nonatomic) NSError *engineError;
@property (retain, nonatomic) BDSingleRuleResult *value;
@property (retain, nonatomic) NSArray *values;
@property (retain, nonatomic) NSArray *fffRuleValues;
@property (retain, nonatomic) NSArray *ruleSetNames;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *signature;
@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSString *key;
@property (nonatomic) double fetchParametersCost;
@property (nonatomic) double sceneSelectCost;
@property (nonatomic) double strategySelectCost;
@property (nonatomic) double ruleBuildCost;
@property (nonatomic) double ruleExecCost;
@property (nonatomic) double cost;
@property (nonatomic) BOOL strategySelectHitCache;
@property (nonatomic) BOOL strategySelectFromGraph;
@property (nonatomic) BOOL strategySelectFromGraphTrie;
@property (nonatomic) BOOL executeFromRuleFFF;
@property (nonatomic) BOOL isMainThread;
@property (copy, nonatomic) NSDictionary *usedParameters;

+ (id)instanceWithError:(id)a0 uuid:(id)a1;

- (void)computeCostWithContext:(id)a0;
- (id)initWithUUID:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
