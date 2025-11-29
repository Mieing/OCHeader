@interface BDXLynxFlowerPixelBufferTransformer : NSObject

+ (void)convertBGRAtoRGBA:(char *)a0 withSize:(unsigned long long)a1;
+ (id)bdx_imageFromCVPixelBufferRefForTTPlayer:(struct __CVBuffer { } *)a0;
+ (id)bdx_imageFromCVPixelBufferRefForSystemPlayer:(struct __CVBuffer { } *)a0;
+ (struct __CVBuffer { } *)bdx_pixelBufferFromImage:(id)a0;

@end
