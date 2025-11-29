@class NSArray, AWEPOIVirgoRuleTask;

@interface AWEPOIVirgoTimingRuleModel : NSObject

@property (copy, nonatomic) NSArray *timingRuleList;
@property (weak, nonatomic) AWEPOIVirgoRuleTask *ruleModel;

+ (id)modelWithData:(id)a0 ruleModel:(id)a1;

- (id)initWithRuleModel:(id)a0;
- (void).cxx_destruct;

@end
