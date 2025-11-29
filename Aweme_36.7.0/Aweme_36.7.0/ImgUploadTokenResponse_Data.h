@class NSString;

@interface ImgUploadTokenResponse_Data : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *accessKeyId;
@property (copy, nonatomic) NSString *secretAccessKey;
@property (copy, nonatomic) NSString *sessionToken;

+ (id)descriptor;

@end
