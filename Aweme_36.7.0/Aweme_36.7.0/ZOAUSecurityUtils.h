@interface ZOAUSecurityUtils : NSObject

+ (id)createReturn:(id)a0 sm4Key:(id)a1 sm4Iv:(id)a2 ifGM:(BOOL)a3;
+ (id)SM3OrMD5_LLZX:(id)a0 ifGM:(BOOL)a1;
+ (id)createKeyifGM:(BOOL)a0;
+ (id)decodebase64:(id)a0;
+ (id)decryptSM4OrAes_LLZX:(id)a0 key:(id)a1 iv:(id)a2 ifGM:(BOOL)a3;
+ (id)encodebase64:(id)a0;
+ (id)encryptSM2OrRsa_LLZX:(id)a0 key:(id)a1 ifGM:(BOOL)a2;
+ (id)encryptSM4OrAes_LLZX:(id)a0 key:(id)a1 iv:(id)a2 ifGM:(BOOL)a3;

@end
