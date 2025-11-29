@interface UASDKSecure : NSObject

+ (id)md5SignatureWithString:(id)a0;
+ (id)hexStringFromData:(id)a0 shouldUpperCaseCharacter:(BOOL)a1;
+ (id)base64DataFromString:(id)a0;
+ (id)base64StringFromData:(id)a0;
+ (id)randomIdWithLength:(unsigned long long)a0;
+ (id)certificateDataFromHexString:(id)a0;
+ (id)rsaPublicKeyFromKeyString:(id)a0;
+ (id)rsaEncryptString:(id)a0 withKey:(id)a1;
+ (id)rsaSignString:(id)a0 withKey:(id)a1;
+ (id)AESCryptoWithString:(id)a0 key:(id)a1 option:(BOOL)a2;
+ (id)hexToData:(id)a0;

@end
