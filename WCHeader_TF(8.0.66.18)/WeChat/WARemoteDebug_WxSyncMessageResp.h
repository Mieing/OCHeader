@class WARemoteDebug_BaseResp, NSMutableArray;

@interface WARemoteDebug_WxSyncMessageResp : WXPBGeneratedMessage

@property (retain, nonatomic) WARemoteDebug_BaseResp *baseResponse;
@property (retain, nonatomic) NSMutableArray *debugMessageList;
@property (nonatomic) unsigned int sendAck;

+ (void)initialize;

@end
