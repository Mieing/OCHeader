@class BaseRequest, NSString;

@interface WxaRuntimeGetDeeplinkInfoReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *deeplinkTicket;

+ (void)initialize;

@end
