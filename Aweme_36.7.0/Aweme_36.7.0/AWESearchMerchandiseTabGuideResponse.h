@class NSArray, AWESearchMerchandiseGlobalTabGuideExitRuleModel;

@interface AWESearchMerchandiseTabGuideResponse : AWEBaseApiModel

@property (copy, nonatomic) NSArray *tabGuideList;
@property (retain, nonatomic) AWESearchMerchandiseGlobalTabGuideExitRuleModel *globalExitRule;

+ (id)tabGuideListJSONTransformer;
+ (id)globalExitRuleJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
