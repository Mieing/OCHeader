@interface IESLLPOIAESEncryptor : NSObject

+ (id)poi_aesEncryptWithData:(id)a0 keyData:(id)a1 keySize:(long long)a2 ivData:(id)a3;
+ (id)poi_aesDecryptwithData:(id)a0 KeyData:(id)a1 keySize:(long long)a2 ivData:(id)a3;
+ (id)poi_aesEncodeWithString:(id)a0 size:(long long)a1 key:(id)a2 iv:(id)a3;
+ (id)poi_aesDecodeWithString:(id)a0 size:(long long)a1 key:(id)a2 iv:(id)a3;

@end
