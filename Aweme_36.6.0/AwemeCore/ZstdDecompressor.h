@interface ZstdDecompressor : NSObject

+ (id)decompressedDataWithData:(id)a0;
+ (BOOL)decompressedDataWithData:(id)a0 fileName:(id)a1;
+ (id)decompressedDataWithData:(id)a0 dict:(id)a1;
+ (long long)defaultCompressionLevel;
+ (id)decompressedDataWithBytes:(const void *)a0 length:(unsigned long long)a1;
+ (id)decompressedDataWithBytes:(const void *)a0 length:(unsigned long long)a1 dictBytes:(const void *)a2 dictLength:(unsigned long long)a3;

@end
