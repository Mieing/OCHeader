@class BaseRequest, NSString;

@interface PayIBGCheckJsapiSignReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *nonceStr;
@property (retain, nonatomic) NSString *timestamp;
@property (retain, nonatomic) NSString *package;
@property (retain, nonatomic) NSString *sign;
@property (retain, nonatomic) NSString *signType;
@property (retain, nonatomic) NSString *webViewUrl;

+ (void)initialize;

@end
