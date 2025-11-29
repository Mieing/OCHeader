@class NSString;

@interface AWECodeGenLunaAuthorModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *author;
@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *secretId;
@property (copy, nonatomic) NSString *sign;
@property (copy, nonatomic) NSString *openId;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
