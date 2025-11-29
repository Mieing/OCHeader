@interface TenpaySecureObject : NSObject

+ (id)SignWith3Des:(id)a0;
+ (id)EncryptWith3Des:(id)a0;
+ (id)EncryptWithAESCBC:(id)a0 key:(id)a1 iv:(id)a2;
+ (id)DecryptWithAESCBC:(id)a0 key:(id)a1 iv:(id)a2;
+ (id)getSHA256Hex:(id)a0;
+ (id)ErrorWithCode:(int)a0 Description:(id)a1;
+ (id)EncryptWithRSA2048:(id)a0 Exponent:(id)a1 Modulus:(id)a2 error:(id *)a3;
+ (id)EncryptWithRSA1024:(id)a0 Exponent:(id)a1 Modulus:(id)a2 error:(id *)a3;

@end
