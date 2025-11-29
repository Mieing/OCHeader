@class CmdList, SKBuiltinBuffer_t;

@interface NewSyncResponse : WXPBGeneratedMessage

@property (nonatomic) int ret;
@property (retain, nonatomic) CmdList *cmdList;
@property (nonatomic) unsigned int continueFlag;
@property (retain, nonatomic) SKBuiltinBuffer_t *keyBuf;
@property (nonatomic) unsigned int status;
@property (nonatomic) unsigned int onlineVersion;
@property (nonatomic) unsigned int svrTime;
@property (retain, nonatomic) SKBuiltinBuffer_t *syncUniqKeyBuf;

+ (void)initialize;

- (void)setSyncUniqKeyBuf:(id)a0;
- (id)syncUniqKeyBuf;
- (void)setSvrTime:(unsigned int)a0;
- (unsigned int)svrTime;
- (void)setOnlineVersion:(unsigned int)a0;
- (unsigned int)onlineVersion;
- (void)setStatus:(unsigned int)a0;
- (unsigned int)status;
- (void)setKeyBuf:(id)a0;
- (id)keyBuf;
- (void)setContinueFlag:(unsigned int)a0;
- (unsigned int)continueFlag;
- (void)setCmdList:(id)a0;
- (id)cmdList;
- (void)setRet:(int)a0;
- (int)ret;

@end
