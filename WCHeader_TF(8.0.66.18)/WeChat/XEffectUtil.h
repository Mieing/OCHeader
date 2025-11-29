@interface XEffectUtil : NSObject

+ (id)bgraPixelBufferTo420fFormat:(struct __CVBuffer { } *)a0;
+ (id)bgraPixelBuferFromImage:(id)a0;
+ (id)imageFromBGRAPixelBuffer:(struct __CVBuffer { } *)a0;
+ (id)imageFromBGRAPixelBuffer:(struct __CVBuffer { } *)a0 outputSize:(struct CGSize { double x0; double x1; })a1;
+ (id)rotateBGRAPixelBuffer:(struct __CVBuffer { } *)a0 orientation:(long long)a1;
+ (id)cropBGRAPixelBuffer:(struct __CVBuffer { } *)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (id)nv12PixelBufferToBGRAFormat:(struct __CVBuffer { } *)a0;

@end
