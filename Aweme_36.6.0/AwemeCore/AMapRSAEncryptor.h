@interface AMapRSAEncryptor : NSObject

+ (id)stripPublicKeyHeader:(id)a0;
+ (struct __SecKey { } *)addPublicKey:(id)a0;
+ (id)encryptString:(id)a0 publicKey:(id)a1;
+ (struct __SecKey { } *)getPublicKeyRefWithContentsOfFile:(id)a0;
+ (id)encryptString:(id)a0 publicKeyRef:(struct __SecKey { } *)a1;
+ (id)encryptData:(id)a0 withKeyRef:(struct __SecKey { } *)a1;
+ (struct __SecKey { } *)getPrivateKeyRefWithContentsOfFile:(id)a0 password:(id)a1;
+ (id)decryptString:(id)a0 privateKeyRef:(struct __SecKey { } *)a1;
+ (id)decryptData:(id)a0 withKeyRef:(struct __SecKey { } *)a1;
+ (id)encryptData:(id)a0 publicKey:(id)a1;
+ (id)decryptData:(id)a0 privateKey:(id)a1;
+ (struct __SecKey { } *)addPrivateKey:(id)a0;
+ (id)stripPrivateKeyHeader:(id)a0;
+ (id)encryptString:(id)a0 publicKeyWithContentsOfFile:(id)a1;
+ (id)decryptString:(id)a0 privateKeyWithContentsOfFile:(id)a1 password:(id)a2;
+ (id)decryptString:(id)a0 privateKey:(id)a1;

@end
