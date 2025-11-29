@interface BDWebImageCryptoTools : NSObject

+ (id)rsaEncryptAndBase64EncodeData:(id)a0 withKey:(id)a1;
+ (id)rsaEncryptData:(id)a0 withKey:(id)a1;
+ (struct __SecKey { } *)secKeyForKey:(id)a0;
+ (id)aes256:(id)a0 operation:(unsigned int)a1 key:(id)a2 iv:(id)a3;
+ (void)_fixKeyLengths:(id)a0 ivData:(id)a1;
+ (id)_runCryptor:(id)a0 cryptor:(struct _CCCryptor { } *)a1;
+ (id)rsaEncryptAndBase64EncodeString:(id)a0 withKey:(id)a1;
+ (id)aes256DecryptData:(id)a0 withKey:(id)a1;

@end
