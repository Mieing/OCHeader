@interface BUPLUtils : NSObject

+ (id)updateMethodList:(id)a0 withPrefix:(id)a1;
+ (float)dictionary:(id)a0 floatValueForKey:(id)a1;
+ (id)dictionary:(id)a0 stringValueForKey:(id)a1;
+ (long long)dictionary:(id)a0 integerValueForKey:(id)a1;
+ (id)jsonDictionaryWithString:(id)a0;
+ (BOOL)isEmptyArray:(id)a0;
+ (BOOL)isEmptyString:(id)a0;
+ (BOOL)isEmptyDictionary:(id)a0;
+ (id)dictionary:(id)a0 dictionaryValueForKey:(id)a1;
+ (id)stringByURLEncodeWithString:(id)a0;
+ (struct __CVBuffer { } *)pixelBufferFromUIImage:(id)a0 error:(id *)a1;
+ (id)dictionary:(id)a0 stringValueForKey:(id)a1 default:(id)a2;
+ (id)base64EncodedWithString:(id)a0;
+ (id)base64DecodedWithString:(id)a0;
+ (id)stringByURLDecodeWithString:(id)a0;

@end
