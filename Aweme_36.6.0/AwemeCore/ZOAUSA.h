@interface ZOAUSA : NSObject

+ (id)stripPublicKeyHeader:(id)a0;
+ (struct __SecKey { } *)addPublicKey:(id)a0;
+ (id)encryptData:(id)a0 withKeyRef:(struct __SecKey { } *)a1;
+ (id)encryptData:(id)a0 publicKey:(id)a1;
+ (id)AES1:(id)a0 secretKey:(id)a1 type:(unsigned int)a2;
+ (struct __SecKey { } *)addPublicKeyByFun2:(id)a0;
+ (id)aesDe:(id)a0 sk:(id)a1 iv:(id)a2;
+ (id)aesEn:(id)a0 sk:(id)a1 iv:(id)a2;
+ (id)createAesKey;
+ (id)rsaEn:(id)a0 k:(id)a1;
+ (id)sha256:(id)a0;

@end
