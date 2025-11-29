@class SKBuiltinBuffer_t;

@interface AutoAuthKey : WXPBGeneratedMessage

@property (retain, nonatomic) SKBuiltinBuffer_t *encryptKey;
@property (retain, nonatomic) SKBuiltinBuffer_t *key;

+ (void)initialize;

- (void)setKey:(id)a0;
- (id)key;
- (void)setEncryptKey:(id)a0;
- (id)encryptKey;

@end
