@class ECDHKey, SKBuiltinBuffer_t;

@interface SecAuthRegKeySect : WXPBGeneratedMessage

@property (retain, nonatomic) SKBuiltinBuffer_t *autoAuthKey;
@property (retain, nonatomic) ECDHKey *svrPubEcdhkey;
@property (retain, nonatomic) SKBuiltinBuffer_t *sessionKey;
@property (nonatomic) unsigned int authResultFlag;
@property (retain, nonatomic) SKBuiltinBuffer_t *clientSessionKey;
@property (retain, nonatomic) SKBuiltinBuffer_t *serverSessionKey;
@property (retain, nonatomic) SKBuiltinBuffer_t *extEncryptKeySeries;

+ (void)initialize;

@end
