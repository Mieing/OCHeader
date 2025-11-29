@interface TRKStreamCryptor : NSObject

+ (BOOL)cryptData:(char *)a0 size:(int)a1 atOffset:(int)a2;
+ (BOOL)cryptFileAtPath:(id)a0 toPath:(id)a1 error:(id *)a2;

@end
