@class BaseRequest, NSString, NSData;

@interface WxaRuntimeGetDeeplinkTicketReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *apiName;
@property (retain, nonatomic) NSData *reqData;
@property (nonatomic) unsigned int wxaScene;

+ (void)initialize;

@end
