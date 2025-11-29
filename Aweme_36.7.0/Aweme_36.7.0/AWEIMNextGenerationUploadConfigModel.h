@class NSString;

@interface AWEIMNextGenerationUploadConfigModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *accessKeyId;
@property (copy, nonatomic) NSString *secretAccessKey;
@property (copy, nonatomic) NSString *sessionToken;
@property (copy, nonatomic) NSString *spaceName;
@property (nonatomic) long long expireAt;
@property (nonatomic) BOOL isOpen;

+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
