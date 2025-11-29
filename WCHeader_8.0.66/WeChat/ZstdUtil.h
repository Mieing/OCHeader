@interface ZstdUtil : NSObject

+ (id)compressData:(id)a0;
+ (id)compressData:(id)a0 withOption:(unsigned long long)a1;
+ (id)decompressData:(id)a0;
+ (BOOL)compressFile:(id)a0 toPath:(id)a1;
+ (BOOL)compressFile:(id)a0 toPath:(id)a1 withOption:(unsigned long long)a2;
+ (BOOL)decompressFile:(id)a0 toPath:(id)a1;

@end
