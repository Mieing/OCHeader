@interface EAccountAPIEncryptorRSA : NSObject

+ (id)stripPublicKeyHeader:(id)a0;
+ (struct __SecKey { } *)addPublicKey:(id)a0;
+ (id)encryptString:(id)a0 publicKey:(id)a1;
+ (id)encryptData:(id)a0 withKeyRef:(struct __SecKey { } *)a1;
+ (id)encryptData:(id)a0 publicKey:(id)a1;
+ (id)hexStringForData:(id)a0;

@end
