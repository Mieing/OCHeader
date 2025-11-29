@class NSArray, VIRRuleTask;

@interface VIRTimingRuleModel : NSObject

@property (copy, nonatomic) NSArray *timingRuleList;
@property (weak, nonatomic) VIRRuleTask *ruleModel;

+ (id)modelWithData:(id)a0 ruleModel:(id)a1;

- (id)initWithRuleModel:(id)a0;
- (void).cxx_destruct;

@end
