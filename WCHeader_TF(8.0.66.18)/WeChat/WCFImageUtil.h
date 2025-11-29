@interface WCFImageUtil : NSObject

+ (long long)cgImageOrientToUI:(unsigned int)a0;
+ (struct WCFImageMeta { struct CGSize { double x0; double x1; } x0; long long x1; })imageMetaFromSource:(struct CGImageSource { } *)a0;
+ (id)thubmnailForImageSource:(struct CGImageSource { } *)a0 maxPixel:(double)a1 scaleAspectFill:(BOOL)a2 orientation:(long long)a3 scale:(double)a4;
+ (BOOL)enableScale;
+ (id)scaleImageData:(id)a0 toSize:(struct CGSize { double x0; double x1; })a1 mode:(long long)a2;
+ (id)scaleImageData:(id)a0 toSize:(struct CGSize { double x0; double x1; })a1 mode:(long long)a2 error:(id *)a3;
+ (id)scaleImageFile:(id)a0 toSize:(struct CGSize { double x0; double x1; })a1 mode:(long long)a2;
+ (BOOL)isHighEndDevice;
+ (BOOL)fileExistsAtPath:(id)a0;
+ (void)setEnableWideGamutConvert:(BOOL)a0;
+ (BOOL)isDisplayP3Image:(struct CGImage { } *)a0;
+ (struct CGImage { } *)fastConvert2sRGB:(struct CGImage { } *)a0;

@end
