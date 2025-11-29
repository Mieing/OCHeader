@class NSString;

@interface AWECodeGenInterestActivityVideoUploadAuthDataModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *accessKeyId;
@property (copy, nonatomic) NSString *secretAccessKey;
@property (copy, nonatomic) NSString *sessionToken;
@property (nonatomic) long long expiredTime;
@property (nonatomic) long long currentTime;
@property (copy, nonatomic) NSString *spaceName;
@property (copy, nonatomic) NSString *uploadDomain;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
