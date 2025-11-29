@class NSString;

@interface AWECodeGenChallengeTemplateModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *templateId;
@property (nonatomic) long long templateType;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
