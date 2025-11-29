@class NSDictionary;

@interface IESIMCodeGenGroupTagGetResponseModel : AWEBaseResponseModel

@property (copy, nonatomic) NSDictionary *userTag;
@property (copy, nonatomic) NSDictionary *tagConf;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
