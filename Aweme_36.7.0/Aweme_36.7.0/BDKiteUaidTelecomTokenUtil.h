@interface BDKiteUaidTelecomTokenUtil : NSObject

+ (id)convertHexStrToData:(id)a0;
+ (id)appendRquestTelecomToken:(id)a0 params:(id)a1;
+ (id)generateRandomString:(unsigned long long)a0;
+ (id)encryptRandomString:(id)a0;
+ (id)generateEncryptParamStr:(id)a0;
+ (id)hmacSha1Encrypt:(id)a0;
+ (id)decryptResponseSecInput:(id)a0;

@end
