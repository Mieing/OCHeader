@class NSString, AWEIncentiveDYPendantEvadeRuleModel, AWEIncentiveDYPendantTaskRuleMatcherModel;

@interface AWEIncentiveDYPendantCountDownModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEIncentiveDYPendantTaskRuleMatcherModel *taskRuleMatcherModel;
@property (retain, nonatomic) AWEIncentiveDYPendantEvadeRuleModel *evadeRuleModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskRuleMatcherModelModelJSONTransformer;
+ (id)evadeRuleModelModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
