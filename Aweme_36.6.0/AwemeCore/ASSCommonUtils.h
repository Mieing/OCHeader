@interface ASSCommonUtils : NSObject

+ (id)getValueFromDictionary:(id)a0 withKey:(id)a1 defaultValue:(id)a2;
+ (id)getValueFromProperty:(id)a0;
+ (BOOL)isBlankString:(id)a0;
+ (id)stringFromSortedDictionary:(id)a0;
+ (id)sha1FromString:(id)a0;
+ (id)md5FromString:(id)a0;
+ (id)encryptWithAESandBASE64:(id)a0;
+ (id)decryptStringWithBASE64andAES:(id)a0;
+ (id)gzipAndBase64String:(id)a0;
+ (id)encodeBase64Data:(id)a0;
+ (id)formatDataForServer:(id)a0;
+ (id)gzipData:(id)a0;
+ (id)encodeBase64:(id)a0;

@end
