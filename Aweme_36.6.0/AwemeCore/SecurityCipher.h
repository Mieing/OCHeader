@interface SecurityCipher : NSObject

+ (id)encryptString:(id)a0 key:(id)a1;
+ (id)decryptString:(id)a0 key:(id)a1;
+ (id)encryptBinary:(id)a0 key:(id)a1;
+ (id)decryptBinary:(id)a0 key:(id)a1;
+ (id)atlasEncryptString:(id)a0;

@end
