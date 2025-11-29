@class NSArray;

@interface AWECodeGenHotCommentRuleModel : AWEBaseDataModel

@property (copy, nonatomic) NSArray *displayRuleModelArray;
@property (nonatomic) long long showDuration;
@property (nonatomic) long long replaceTag;
@property (nonatomic) long long textStay;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
