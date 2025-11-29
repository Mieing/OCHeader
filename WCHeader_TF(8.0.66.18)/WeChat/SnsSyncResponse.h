@class CmdList, SKBuiltinBuffer_t, BaseResponse;

@interface SnsSyncResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) CmdList *cmdList;
@property (nonatomic) unsigned int continueFlag;
@property (retain, nonatomic) SKBuiltinBuffer_t *keyBuf;

+ (void)initialize;

@end
