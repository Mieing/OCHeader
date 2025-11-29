@class WARemoteDebug_BaseReq, NSString;

@interface WARemoteDebug_WxLoginReq : WXPBGeneratedMessage

@property (retain, nonatomic) WARemoteDebug_BaseReq *baseRequest;
@property (retain, nonatomic) NSString *loginTicket;

+ (void)initialize;

@end
