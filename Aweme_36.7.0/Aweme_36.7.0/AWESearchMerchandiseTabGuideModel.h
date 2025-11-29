@class NSString, AWESearchMerchandiseTabGuideExitRuleModel;

@interface AWESearchMerchandiseTabGuideModel : AWEBaseApiModel

@property (nonatomic) long long ID;
@property (nonatomic) long long guideType;
@property (copy, nonatomic) NSString *tabType;
@property (retain, nonatomic) AWESearchMerchandiseTabGuideExitRuleModel *exitRule;

+ (id)exitRuleJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
