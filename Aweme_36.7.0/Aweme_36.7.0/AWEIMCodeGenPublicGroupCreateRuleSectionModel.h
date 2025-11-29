@class NSArray;

@interface AWEIMCodeGenPublicGroupCreateRuleSectionModel : AWEBaseDataModel

@property (copy, nonatomic) NSArray *ruleListModelArray;
@property (nonatomic) int curStage;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
