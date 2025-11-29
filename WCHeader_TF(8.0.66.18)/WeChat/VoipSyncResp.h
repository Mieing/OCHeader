@class VoipCmdList, SKBuiltinBuffer_t, BaseResponse;

@interface VoipSyncResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int roomId;
@property (retain, nonatomic) SKBuiltinBuffer_t *keyBuf;
@property (retain, nonatomic) VoipCmdList *cmdList;
@property (nonatomic) int continueFlag;
@property (nonatomic) long long roomKey;

+ (void)initialize;

@end
