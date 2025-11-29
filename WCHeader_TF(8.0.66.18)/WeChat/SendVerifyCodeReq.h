@class BaseRequest, NSString;

@interface SendVerifyCodeReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *mobile;

+ (void)initialize;

@end
