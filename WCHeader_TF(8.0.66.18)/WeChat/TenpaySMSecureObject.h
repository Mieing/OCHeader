@interface TenpaySMSecureObject : NSObject

- (id)init;
- (int)getError;
- (id)getRandomBytes:(unsigned long long)a0;
- (id)sm2Encrypt:(id)a0 publicKey:(id)a1;
- (id)sm3:(id)a0;
- (id)generateSM4Key;
- (id)sm4EncryptCBC:(id)a0 key:(id)a1 iv:(id)a2 noPadding:(BOOL)a3;
- (id)sm4DecryptCBC:(id)a0 key:(id)a1 iv:(id)a2 noPadding:(BOOL)a3;
- (id)sha256:(id)a0;
- (id)sha1:(id)a0;
- (id)md5:(id)a0;

@end
