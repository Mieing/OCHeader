@interface UTDUtils : NSObject

+ (id)encodeURL:(id)a0;
+ (char *)newBase64Encode:(const void *)a0 :(unsigned long long)a1 :(BOOL)a2 :(unsigned int *)a3;
+ (id)NSData2Base64:(id)a0;
+ (id)responseData:(id)a0;
+ (id)md5StrForData:(id)a0;
+ (BOOL)isSuccessResponse:(id)a0;
+ (id)md5StrForNSString:(id)a0;
+ (id)convertUrlEncodeFormat:(id)a0;
+ (id)sortNSArrayForNSString:(id)a0 ascending:(BOOL)a1;
+ (id)rc4:(id)a0 length:(unsigned long long)a1;
+ (id)getDictDescribe:(id)a0 urlendcode:(BOOL)a1;
+ (id)queryURLDictionaryUsingEncoding:(id)a0 encodeing:(unsigned long long)a1;
+ (long long)millseconds;
+ (long long)timestamp;
+ (id)sha1ForString:(id)a0;
+ (id)md5ForData:(id)a0;
+ (unsigned int)nextInt;
+ (BOOL)isEmpty:(id)a0;

@end
