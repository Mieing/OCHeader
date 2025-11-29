@class BaseRequest, NSString;

@interface WxaRuntimeCheckWebviewUrlReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *reqUrl;
@property (retain, nonatomic) NSString *outerUrl;

+ (void)initialize;

@end
