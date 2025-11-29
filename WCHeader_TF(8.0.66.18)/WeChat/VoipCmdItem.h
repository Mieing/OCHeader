@class NSString, SKBuiltinBuffer_t;

@interface VoipCmdItem : WXPBGeneratedMessage

@property (nonatomic) int cmdId;
@property (retain, nonatomic) SKBuiltinBuffer_t *cmdBuf;
@property (retain, nonatomic) NSString *fromUserName;

+ (void)initialize;

@end
