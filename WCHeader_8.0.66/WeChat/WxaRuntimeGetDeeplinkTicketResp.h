@class NSString, BaseResponse;

@interface WxaRuntimeGetDeeplinkTicketResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *deeplinkTicket;
@property (nonatomic) unsigned int expireTime;

+ (void)initialize;

@end
