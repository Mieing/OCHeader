@class BaseRequest, NSData, NSString;

@interface WxaRuntimeUpdateDeeplinkInfoReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int status;
@property (retain, nonatomic) NSData *respData;
@property (retain, nonatomic) NSString *deeplinkTicket;

+ (void)initialize;

@end
