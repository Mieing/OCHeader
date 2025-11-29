@interface AWECFHalcyon : NSObject

+ (id)base64Encode:(id)a0;
+ (id)base64Decode:(id)a0;
+ (id)AESDecryptData:(id)a0 keyString:(id)a1 ivString:(id)a2;
+ (id)MD5File:(id)a0;
+ (id)randomKeyString;
+ (id)AESDecryptString:(id)a0 keyString:(id)a1 ivString:(id)a2;
+ (id)AESEncryptString:(id)a0 keyString:(id)a1 ivString:(id)a2;
+ (id)MD5Data:(id)a0;
+ (id)randomDataOfNumberOfBytes:(unsigned long long)a0;
+ (id)randomKeyData;
+ (id)paddedDataOfKey:(id)a0 numberOfBytes:(unsigned long long)a1;
+ (id)defaultSymmetricKeyData;
+ (id)AESEncryptData:(id)a0 keyData:(id)a1 ivData:(id)a2;
+ (id)AESEncryptString:(id)a0 keyData:(id)a1 ivData:(id)a2;
+ (id)AESDecryptData:(id)a0 keyData:(id)a1 ivData:(id)a2;
+ (id)AESDecryptString:(id)a0 keyData:(id)a1 ivData:(id)a2;
+ (id)randomIVData;
+ (id)AESEncryptData:(id)a0 keyString:(id)a1 ivString:(id)a2;
+ (id)RSAEncryptData:(id)a0 publicKey:(id)a1;
+ (id)RSADecryptData:(id)a0 publicKey:(id)a1;
+ (id)RSAEncryptString:(id)a0 publicKey:(id)a1;
+ (id)RSADecryptString:(id)a0 publicKey:(id)a1;

@end
