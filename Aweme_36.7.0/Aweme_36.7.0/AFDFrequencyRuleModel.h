@class NSString, AFDFrequencyRuleItemModel;

@interface AFDFrequencyRuleModel : AWEBaseBizConfigModel <MTLJSONSerializing>

@property (retain, nonatomic) AFDFrequencyRuleItemModel *showRule;
@property (retain, nonatomic) AFDFrequencyRuleItemModel *totalShowRule;
@property (retain, nonatomic) AFDFrequencyRuleItemModel *clickRule;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clickJSONTransformer;
+ (id)showJSONTransformer;
+ (id)totalShowJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
