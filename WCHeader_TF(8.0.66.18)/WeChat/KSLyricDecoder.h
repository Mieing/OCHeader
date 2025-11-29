@interface KSLyricDecoder : NSObject

+ (id)decodeQrcFileWithContent:(id)a0;
+ (long long)hexStringToString:(const char *)a0 stringLength:(long long)a1 toString:(char *)a2;
+ (id)decodeDes:(const char *)a0 size:(long long)a1;

@end
