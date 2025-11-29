@class SKBuiltinBuffer_t;

@interface CmdItem : WXPBGeneratedMessage

@property (nonatomic) int cmdId;
@property (retain, nonatomic) SKBuiltinBuffer_t *cmdBuf;

+ (void)initialize;

- (void)setCmdBuf:(id)a0;
- (id)cmdBuf;
- (void)setCmdId:(int)a0;
- (int)cmdId;

@end
