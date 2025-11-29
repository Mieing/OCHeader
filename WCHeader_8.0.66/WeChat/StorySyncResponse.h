@class CmdList, SKBuiltinBuffer_t, BaseResponse;

@interface StorySyncResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) CmdList *cmdList;
@property (nonatomic) unsigned int continueFlag;
@property (retain, nonatomic) SKBuiltinBuffer_t *keyBuf;

+ (void)initialize;

- (void)setKeyBuf:(id)a0;
- (id)keyBuf;
- (void)setContinueFlag:(unsigned int)a0;
- (unsigned int)continueFlag;
- (void)setCmdList:(id)a0;
- (id)cmdList;
- (void)setBaseResponse:(id)a0;
- (id)baseResponse;

@end
