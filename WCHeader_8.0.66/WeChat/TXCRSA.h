@interface TXCRSA : NSObject

+ (id)stripPublicKeyHeader:(id)a0;
+ (id)decodePublicKey:(id)a0;
+ (struct __SecKey { } *)addPublicKey:(id)a0;
+ (struct __SecKey { } *)createPublicSeckeyWithNSString:(id)a0;
+ (id)decryptData:(id)a0 withKeyRef:(struct __SecKey { } *)a1;
+ (id)decryptData:(id)a0 publicKey:(id)a1;

@end
