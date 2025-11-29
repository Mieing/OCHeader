@interface ASSSecurityGTMBase64ZZZX : NSObject

+ (id)decodeBytes:(const void *)a0 length:(unsigned long long)a1;
+ (id)stringByEncodingData:(id)a0;
+ (id)stringByEncodingBytes:(const void *)a0 length:(unsigned long long)a1;
+ (id)webSafeEncodeData:(id)a0 padded:(BOOL)a1;
+ (id)webSafeDecodeData:(id)a0;
+ (id)webSafeEncodeBytes:(const void *)a0 length:(unsigned long long)a1 padded:(BOOL)a2;
+ (id)webSafeDecodeBytes:(const void *)a0 length:(unsigned long long)a1;
+ (id)stringByWebSafeEncodingData:(id)a0 padded:(BOOL)a1;
+ (id)stringByWebSafeEncodingBytes:(const void *)a0 length:(unsigned long long)a1 padded:(BOOL)a2;
+ (id)webSafeDecodeString:(id)a0;
+ (id)baseEncode:(const void *)a0 length:(unsigned long long)a1 charset:(const char *)a2 padded:(BOOL)a3;
+ (id)baseDecode:(const void *)a0 length:(unsigned long long)a1 charset:(const char *)a2 requirePadding:(BOOL)a3;
+ (unsigned long long)baseEncode:(const char *)a0 srcLen:(unsigned long long)a1 destBytes:(char *)a2 destLen:(unsigned long long)a3 charset:(const char *)a4 padded:(BOOL)a5;
+ (unsigned long long)baseDecode:(const char *)a0 srcLen:(unsigned long long)a1 destBytes:(char *)a2 destLen:(unsigned long long)a3 charset:(const char *)a4 requirePadding:(BOOL)a5;
+ (id)encodeBytes:(const void *)a0 length:(unsigned long long)a1;
+ (id)decodeData:(id)a0;
+ (id)encodeData:(id)a0;
+ (id)decodeString:(id)a0;

@end
