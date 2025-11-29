@interface AMapADIUEncrypt : NSObject

+ (id)getDESEncryptKey;
+ (id)doCipher:(id)a0 key:(id)a1 context:(unsigned int)a2;
+ (id)encryptStr:(id)a0;
+ (id)decryptStr:(id)a0;
+ (id)decodeBase64:(id)a0;

@end
