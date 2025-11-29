@interface WxSmCryptoUtil : NSObject

+ (void)initialize;
+ (id)getVersion;
+ (int)getError;
+ (void)release;
+ (id)getRandomBytes:(unsigned long long)a0;
+ (id)sm2GenKeyPair;
+ (id)sm2GenPublicKey:(id)a0;
+ (id)sm2Encrypt:(id)a0 publicKey:(id)a1;
+ (id)sm2Encrypt:(id)a0 publicKey:(id)a1 cipherMode:(long long)a2;
+ (id)sm2Decrypt:(id)a0 priKey:(id)a1;
+ (id)sm2Decrypt:(id)a0 priKey:(id)a1 cipherMode:(long long)a2;
+ (id)sm2Sign:(id)a0 uid:(id)a1 priKey:(id)a2 publicKey:(id)a3;
+ (id)sm2Sign:(id)a0 uid:(id)a1 priKey:(id)a2 publicKey:(id)a3 signMode:(long long)a4;
+ (BOOL)sm2Verify:(id)a0 uid:(id)a1 sign:(id)a2 publicKey:(id)a3;
+ (BOOL)sm2Verify:(id)a0 uid:(id)a1 sign:(id)a2 publicKey:(id)a3 signMode:(long long)a4;
+ (id)sm3:(id)a0;
+ (id)sm3Hmac:(id)a0 key:(id)a1;
+ (id)generateSM4Key;
+ (id)sm4CbcEncrypt:(id)a0 key:(id)a1 iv:(id)a2 noPadding:(BOOL)a3;
+ (id)sm4CbcDecrypt:(id)a0 key:(id)a1 iv:(id)a2 noPadding:(BOOL)a3;
+ (id)sm4CtrEncrypt:(id)a0 key:(id)a1 iv:(id)a2;
+ (id)sm4CtrDecrypt:(id)a0 key:(id)a1 iv:(id)a2;
+ (id)sm4GcmEncrypt:(id)a0 key:(id)a1 iv:(id)a2 aad:(id)a3;
+ (id)sm4GcmDecrypt:(id)a0 tag:(id)a1 key:(id)a2 iv:(id)a3 aad:(id)a4;
+ (id)encryptWithSM4:(id)a0;
+ (id)hashWithSM4:(id)a0;
+ (id)sha256:(id)a0;
+ (id)sha1:(id)a0;
+ (id)md5:(id)a0;

@end
