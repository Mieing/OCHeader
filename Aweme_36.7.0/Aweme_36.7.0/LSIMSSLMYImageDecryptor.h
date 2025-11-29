@interface LSIMSSLMYImageDecryptor : NSObject

+ (BOOL)decryptCipherHexData:(id)a0 toPlainData:(id *)a1 key:(id)a2;
+ (id)__cipherDataWithoutIvec:(id)a0;
+ (id)__keyBytesWithString:(id)a0;
+ (id)__ivecWithCipherData:(id)a0;
+ (BOOL)__decryptCipherHexData:(id)a0 toPlainData:(id *)a1 key:(id)a2 ivec:(id)a3;

@end
