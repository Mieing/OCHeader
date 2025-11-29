@class NSArray;

@interface AWECodeGenChallengeTextTemplateModel : AWEBaseDataModel

@property (nonatomic) long long insertTemplateType;
@property (copy, nonatomic) NSArray *insertTemplateCategoryArray;
@property (nonatomic) BOOL disableDefaultCategory;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
