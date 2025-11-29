@interface IESLivePixelBufferUtil : NSObject

+ (id)imageFromPixelBuffer:(struct __CVBuffer { } *)a0;
+ (id)imageFromPixelBuffer:(struct __CVBuffer { } *)a0 scaleToSize:(struct CGSize { double x0; double x1; })a1 ignoreDeviceRestrict:(BOOL)a2;
+ (id)convertBGRAToRGBA:(struct __CVBuffer { } *)a0;
+ (struct __CVBuffer { } *)copyPixelBufferWithPixelBuffer:(struct __CVBuffer { } *)a0;
+ (struct __CVBuffer { } *)pixelBufferFromImage:(id)a0;

@end
