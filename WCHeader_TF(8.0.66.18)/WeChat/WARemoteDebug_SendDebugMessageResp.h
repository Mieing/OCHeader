@class WARemoteDebug_BaseResp;

@interface WARemoteDebug_SendDebugMessageResp : WXPBGeneratedMessage

@property (retain, nonatomic) WARemoteDebug_BaseResp *baseResponse;
@property (nonatomic) unsigned int sendAck;

+ (void)initialize;

@end
