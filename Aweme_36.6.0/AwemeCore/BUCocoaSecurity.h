@interface BUCocoaSecurity : NSObject

+ (id)bu_sha384:(id)a0;
+ (id)bu_aesEncrypt:(id)a0 key:(id)a1 iv:(id)a2;
+ (id)bu_aesEncryptWithData:(id)a0 key:(id)a1 iv:(id)a2 error:(id *)a3;
+ (id)_errorWithCode:(long long)a0 desc:(id)a1 cmd:(SEL)a2 data:(id)a3 key:(id)a4 iv:(id)a5;
+ (id)bu_aesDecryptWithBase64:(id)a0 key:(id)a1 iv:(id)a2;
+ (id)bu_aesDecryptWithData:(id)a0 key:(id)a1 iv:(id)a2 error:(id *)a3;
+ (id)bu_md5WithData:(id)a0;
+ (id)bu_hmacMd5WithData:(id)a0 hmacKey:(id)a1;
+ (id)bu_sha1WithData:(id)a0;
+ (id)bu_sha224WithData:(id)a0;
+ (id)bu_sha256WithData:(id)a0;
+ (id)bu_sha384WithData:(id)a0;
+ (id)bu_sha512WithData:(id)a0;
+ (id)bu_hmacSha1WithData:(id)a0 hmacKey:(id)a1;
+ (id)bu_hmacSha224WithData:(id)a0 hmacKey:(id)a1;
+ (id)bu_aesEncrypt:(id)a0 key:(id)a1;
+ (id)bu_aesEncrypt:(id)a0 hexKey:(id)a1 hexIv:(id)a2;
+ (id)bu_aesDecryptWithBase64:(id)a0 key:(id)a1;
+ (id)bu_aesDecryptWithBase64:(id)a0 hexKey:(id)a1 hexIv:(id)a2;
+ (id)bu_md5:(id)a0;
+ (id)bu_hmacMd5:(id)a0 hmacKey:(id)a1;
+ (id)bu_sha1:(id)a0;
+ (id)bu_sha224:(id)a0;
+ (id)bu_sha256:(id)a0;
+ (id)bu_sha512:(id)a0;
+ (id)bu_hmacSha1:(id)a0 hmacKey:(id)a1;
+ (id)bu_hmacSha224:(id)a0 hmacKey:(id)a1;
+ (id)bu_hmacSha256WithData:(id)a0 hmacKey:(id)a1;
+ (id)bu_hmacSha384WithData:(id)a0 hmacKey:(id)a1;
+ (id)bu_hmacSha512WithData:(id)a0 hmacKey:(id)a1;
+ (id)bu_aesEncryptWithData:(id)a0 key:(id)a1 iv:(id)a2;
+ (id)bu_aesDecryptWithData:(id)a0 key:(id)a1 iv:(id)a2;

@end
