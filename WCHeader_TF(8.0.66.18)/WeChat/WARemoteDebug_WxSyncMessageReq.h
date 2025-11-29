@class WARemoteDebug_BaseReq;

@interface WARemoteDebug_WxSyncMessageReq : WXPBGeneratedMessage

@property (retain, nonatomic) WARemoteDebug_BaseReq *baseRequest;
@property (nonatomic) unsigned int minSeq;
@property (nonatomic) unsigned int maxSeq;

+ (void)initialize;

@end
