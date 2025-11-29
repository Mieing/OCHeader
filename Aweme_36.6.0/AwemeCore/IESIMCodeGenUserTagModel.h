@class NSString, NSDictionary;

@interface IESIMCodeGenUserTagModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *tagKey;
@property (copy, nonatomic) NSDictionary *users;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
