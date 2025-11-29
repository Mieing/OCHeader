@interface BDOpenSDKRSA : NSObject

+ (id)bdsdk_stripPublicKeyHeader:(id)a0;
+ (id)bdsdk_encryptData:(id)a0 privateKey:(id)a1;
+ (struct __SecKey { } *)bdsdk_addPrivateKey:(id)a0;
+ (id)bdsdk_encryptData:(id)a0 withKeyRef:(struct __SecKey { } *)a1 isSign:(BOOL)a2;
+ (id)bdsdk_decryptData:(id)a0 privateKey:(id)a1;
+ (id)bdsdk_decryptData:(id)a0 withKeyRef:(struct __SecKey { } *)a1;
+ (id)bdsdk_encryptData:(id)a0 publicKey:(id)a1;
+ (struct __SecKey { } *)bdsdk_addPublicKey:(id)a0;
+ (id)bdsdk_decryptData:(id)a0 publicKey:(id)a1;
+ (id)bdsdk_stripPrivateKeyHeader:(id)a0;
+ (id)bdsdk_encryptString:(id)a0 privateKey:(id)a1;
+ (id)bdsdk_decryptString:(id)a0 privateKey:(id)a1;
+ (id)bdsdk_encryptString:(id)a0 publicKey:(id)a1;
+ (id)bdsdk_decryptString:(id)a0 publicKey:(id)a1;

@end
