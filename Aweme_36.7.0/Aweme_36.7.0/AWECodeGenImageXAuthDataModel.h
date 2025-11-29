@class NSString;

@interface AWECodeGenImageXAuthDataModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSString *secretKey;
@property (copy, nonatomic) NSString *sessionToken;
@property (nonatomic) long long expiredTime;
@property (nonatomic) long long currentTime;
@property (copy, nonatomic) NSString *serviceId;
@property (copy, nonatomic) NSString *uploadDomain;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
