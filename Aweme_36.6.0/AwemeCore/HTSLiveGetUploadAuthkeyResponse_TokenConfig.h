@class NSString;

@interface HTSLiveGetUploadAuthkeyResponse_TokenConfig : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSString *secretKey;
@property (copy, nonatomic) NSString *secretToken;
@property (copy, nonatomic) NSString *serviceId;
@property (copy, nonatomic) NSString *currentTimeStr;
@property (copy, nonatomic) NSString *expireTimeStr;

+ (id)descriptor;

@end
