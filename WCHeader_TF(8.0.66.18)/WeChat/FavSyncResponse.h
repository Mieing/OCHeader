@class CmdList, SKBuiltinBuffer_t;

@interface FavSyncResponse : WXPBGeneratedMessage

@property (nonatomic) int ret;
@property (retain, nonatomic) CmdList *cmdList;
@property (retain, nonatomic) SKBuiltinBuffer_t *keyBuf;
@property (nonatomic) unsigned int continueFlag;

+ (void)initialize;

@end
