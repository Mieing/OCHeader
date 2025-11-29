@interface ACCImageImportUtils : NSObject

+ (BOOL)saveCompressedImageToFilePath:(id)a0 withCompressionSize:(double)a1 originImage:(id)a2;
+ (BOOL)saveImage:(id)a0 toFilePath:(id)a1 inspectBlock:(id /* block */)a2;
+ (id)downsampleWithLimitSize:(struct CGSize { double x0; double x1; })a0 originImage:(id)a1;
+ (BOOL)saveImage:(id)a0 toFilePath:(id)a1 compressedFilePath:(id)a2 compressionSize:(double)a3 inspectBlock:(id /* block */)a4;
+ (id)image:(id)a0 JPEGDataWithSampleRate:(double)a1;
+ (BOOL)saveImage:(id)a0 toFilePath:(id)a1 compressedFilePath:(id)a2 compressionSize:(double)a3 downsampleRate:(double)a4 recodeImage:(BOOL)a5 inspectBlock:(id /* block */)a6;

@end
