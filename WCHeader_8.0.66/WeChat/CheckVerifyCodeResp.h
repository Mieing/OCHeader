@class NSString, BaseResponse;

@interface CheckVerifyCodeResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int status;
@property (retain, nonatomic) NSString *encryptedData;
@property (retain, nonatomic) NSString *iv;
@property (retain, nonatomic) NSString *showMobile;
@property (retain, nonatomic) NSString *cloudId;
@property (retain, nonatomic) NSString *data;

+ (void)initialize;

@end
