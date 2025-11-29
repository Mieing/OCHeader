@interface IESGCPRSAUtil : NSObject

+ (id)stripPublicKeyHeader:(id)a0;
+ (struct __SecKey { } *)addPublicKey:(id)a0;
+ (id)encryptData:(id)a0 withKeyRef:(struct __SecKey { } *)a1;
+ (id)decryptData:(id)a0 withKeyRef:(struct __SecKey { } *)a1;
+ (id)encryptData:(id)a0 publicKey:(id)a1;
+ (id)decryptData:(id)a0 privateKey:(id)a1;
+ (struct __SecKey { } *)addPrivateKey:(id)a0;
+ (id)stripPrivateKeyHeader:(id)a0;

@end
