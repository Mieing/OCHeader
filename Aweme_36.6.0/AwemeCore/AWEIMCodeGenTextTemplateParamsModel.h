@class NSString, NSDictionary;

@interface AWEIMCodeGenTextTemplateParamsModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSString *resource;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
