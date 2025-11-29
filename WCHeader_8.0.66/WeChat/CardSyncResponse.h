@class CmdList, SKBuiltinBuffer_t, BaseResponse;

@interface CardSyncResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) CmdList *cmdList;
@property (retain, nonatomic) SKBuiltinBuffer_t *keyBuf;
@property (nonatomic) unsigned int continueFlag;
@property (nonatomic) unsigned int needLayout;

+ (void)initialize;

@end
