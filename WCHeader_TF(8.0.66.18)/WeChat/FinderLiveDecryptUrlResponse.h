@class NSString, BaseResponse;

@interface FinderLiveDecryptUrlResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *decryptUrlKey;
@property (retain, nonatomic) NSString *encryptedUrl;

+ (void)initialize;

@end
