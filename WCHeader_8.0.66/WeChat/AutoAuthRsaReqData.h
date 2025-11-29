@class ECDHKey, SKBuiltinBuffer_t;

@interface AutoAuthRsaReqData : WXPBGeneratedMessage

@property (retain, nonatomic) SKBuiltinBuffer_t *aesEncryptKey;
@property (retain, nonatomic) ECDHKey *cliPubEcdhkey;

+ (void)initialize;

- (void)setCliPubEcdhkey:(id)a0;
- (id)cliPubEcdhkey;
- (void)setAesEncryptKey:(id)a0;
- (id)aesEncryptKey;

@end
