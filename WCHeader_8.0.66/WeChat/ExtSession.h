@class SKBuiltinBuffer_t;

@interface ExtSession : WXPBGeneratedMessage

@property (nonatomic) unsigned int sessionType;
@property (retain, nonatomic) SKBuiltinBuffer_t *sessionKey;
@property (retain, nonatomic) SKBuiltinBuffer_t *serverId;

+ (void)initialize;

- (void)setServerId:(id)a0;
- (id)serverId;
- (void)setSessionKey:(id)a0;
- (id)sessionKey;
- (void)setSessionType:(unsigned int)a0;
- (unsigned int)sessionType;

@end
