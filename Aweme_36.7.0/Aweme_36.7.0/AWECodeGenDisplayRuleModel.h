@interface AWECodeGenDisplayRuleModel : AWEBaseDataModel

@property (nonatomic) long long min;
@property (nonatomic) long long max;
@property (nonatomic) long long stay;

+ (id)JSONKeyPathsByPropertyKey;

@end
