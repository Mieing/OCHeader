@class VoipCmdList, BaseRequest, NSString, SKBuiltinBuffer_t;

@interface VoipSyncReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *fromUsername;
@property (nonatomic) int roomId;
@property (retain, nonatomic) SKBuiltinBuffer_t *keyBuf;
@property (retain, nonatomic) VoipCmdList *opLog;
@property (nonatomic) long long roomKey;
@property (nonatomic) int selector;
@property (nonatomic) unsigned long long timestamp64;

+ (void)initialize;

@end
