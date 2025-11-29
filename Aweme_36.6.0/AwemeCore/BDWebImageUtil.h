@interface BDWebImageUtil : NSObject

+ (id)decodeImageData:(id)a0 imageClass:(Class)a1 decoderConfig:(id)a2 error:(id *)a3;
+ (long long)isWhiteOrBlackImage:(id)a0 samplingPoint:(long long)a1;
+ (id)decodeImageData:(id)a0 imageClass:(Class)a1 scale:(double)a2 decodeForDisplay:(BOOL)a3 shouldScaleDown:(BOOL)a4 downsampleSize:(struct CGSize { double x0; double x1; })a5 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a6 error:(id *)a7;
+ (float)getRGBAsFromImage:(id)a0 row:(unsigned int)a1 col:(unsigned int)a2 bytesPerRow:(unsigned long long)a3 bytesPerPixel:(unsigned long long)a4 hasAlpha:(BOOL)a5 rawData:(char *)a6 rawDataLength:(long long)a7;
+ (id)decodeImageData:(id)a0 imageClass:(Class)a1 scale:(double)a2 decodeForDisplay:(BOOL)a3 shouldScaleDown:(BOOL)a4;

@end
