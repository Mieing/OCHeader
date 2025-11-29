@class WARemoteDebug_BaseReq, NSMutableArray;

@interface WARemoteDebug_SendDebugMessageReq : WXPBGeneratedMessage

@property (retain, nonatomic) WARemoteDebug_BaseReq *baseRequest;
@property (retain, nonatomic) NSMutableArray *debugMessageList;
@property (nonatomic) unsigned int recvAck;

+ (void)initialize;

@end
