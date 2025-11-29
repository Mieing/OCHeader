@interface OIDTokenUtilities : NSObject

+ (id)randomURLSafeStringWithSize:(unsigned long long)a0;
+ (id)encodeBase64urlNoPadding:(id)a0;
+ (id)redact:(id)a0;
+ (id)formUrlEncode:(id)a0;
+ (id)sha256:(id)a0;

@end
