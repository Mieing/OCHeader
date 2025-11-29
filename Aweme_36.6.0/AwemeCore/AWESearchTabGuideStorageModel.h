@class AWESearchTabGuideActionModel, AWESearchTabGuideExitRuleModel;

@interface AWESearchTabGuideStorageModel : AWEBaseApiModel

@property (retain, nonatomic) AWESearchTabGuideActionModel *action;
@property (retain, nonatomic) AWESearchTabGuideExitRuleModel *exitRule;
@property (retain, nonatomic) AWESearchTabGuideExitRuleModel *globalExitRule;

+ (id)actionJSONTransformer;
+ (id)exitRuleJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
