@interface IESIMSSLMYImageDecryptor : NSObject

+ (void)measureDecrypt:(id)a0;
+ (BOOL)decryptCipherHexData:(id)a0 toPlainData:(id *)a1 key:(id)a2;
+ (void)decryptFileChunked:(id)a0 outputPath:(id)a1 secretKey:(id)a2 measurement:(id)a3 callback:(id /* block */)a4;
+ (id)__cipherDataWithoutIvec:(id)a0;
+ (id)__keyBytesWithString:(id)a0;
+ (id)__ivecWithCipherData:(id)a0;
+ (BOOL)__decryptCipherHexData:(id)a0 toPlainData:(id *)a1 key:(id)a2 ivec:(id)a3;
+ (id)p_makeError:(id)a0;
+ (id)p_prepareOutputFileHandle:(id)a0 error:(id *)a1;
+ (id)p_checkMagicString:(id)a0;
+ (long long)p_extraChunkSize:(id)a0;
+ (id)p_decryptFileChunkWithInputHandle:(id)a0 outputHandle:(id)a1 secretKey:(id)a2 chunkLength:(long long)a3 offset:(long long)a4;

@end
