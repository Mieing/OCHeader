@class NSString;

@interface IESIMCodeGenGroupActionCheckActionRuleModel : AWEBaseDataModel

@property (nonatomic) long long groupActionRuleCheckType;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic) BOOL isMatch;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
