@class BDRuleResultModel, NSArray, NSString, NSError;

@interface BDStrategyResultModel : NSObject

@property (readonly, nonatomic) NSArray *strategyNames;
@property (readonly, nonatomic) BDRuleResultModel *ruleResult;
@property (readonly, nonatomic) NSError *engineError;
@property (readonly, copy, nonatomic) NSString *uuid;
@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, nonatomic) BOOL hitCache;
@property (readonly, nonatomic) BOOL fromGraph;
@property (readonly, nonatomic) BOOL fromGraphTrie;
@property (readonly, nonatomic) double cost;

- (id)initWithStrategyNames:(id)a0 ruleResult:(id)a1 hitCache:(BOOL)a2 fromGraph:(BOOL)a3 fromGraphTrie:(BOOL)a4 cost:(double)a5;
- (id)initWithErrorRuleResultModel:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
