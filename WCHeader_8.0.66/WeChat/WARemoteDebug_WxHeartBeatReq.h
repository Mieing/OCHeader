@class WARemoteDebug_BaseReq;

@interface WARemoteDebug_WxHeartBeatReq : WXPBGeneratedMessage

@property (retain, nonatomic) WARemoteDebug_BaseReq *baseRequest;
@property (nonatomic) unsigned int recvAck;

+ (void)initialize;

@end
