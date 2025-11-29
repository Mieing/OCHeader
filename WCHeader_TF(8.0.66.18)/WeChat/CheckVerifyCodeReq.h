@class BaseRequest, NSString;

@interface CheckVerifyCodeReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *mobile;
@property (retain, nonatomic) NSString *verifyCode;

+ (void)initialize;

@end
