@interface AMapFoundationAES : NSObject

+ (id)decryptData:(id)a0 customKey:(id)a1;
+ (id)encryptData:(id)a0 customKey:(id)a1;
+ (id)encryptData:(id)a0 crypt:(unsigned int)a1 useECBMode:(BOOL)a2 key:(id)a3 keyLength:(int)a4 iv:(const void *)a5;
+ (id)AESKeyWithSize:(unsigned long long)a0;
+ (id)encryptUsingECBModeForData:(id)a0 key:(id)a1;
+ (id)encryptUsingCBCModeForData:(id)a0 key:(id)a1 iv:(const void *)a2;
+ (id)encryptLocationUploadData:(id)a0 key:(id)a1 iv:(const void *)a2;
+ (id)decryptLocationUploadData:(id)a0 key:(id)a1 iv:(const void *)a2;
+ (id)encryptString:(id)a0 customKey:(id)a1;
+ (id)decryptString:(id)a0 customKey:(id)a1;

@end
