@class NSArray;

@interface BDUGFlowAuthRuleModel : NSObject

@property (nonatomic) long long status;
@property (copy, nonatomic) NSArray *ruleList;
@property (copy, nonatomic) NSArray *dynamicStrategyRuleList;

+ (id)instanceWithData:(id)a0;

- (void).cxx_destruct;

@end
