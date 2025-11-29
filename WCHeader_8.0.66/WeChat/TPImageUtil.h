@interface TPImageUtil : NSObject

+ (id)imageFromCGImageRef:(struct CGImage { } *)a0;
+ (id)getImageFromRGB24:(char *)a0 width:(int)a1 height:(int)a2;
+ (id)getImageFromRGBA:(char *)a0 width:(int)a1 height:(int)a2;
+ (id)image:(id)a0 rotation:(int)a1;
+ (id)image:(id)a0 scaleToSize:(struct CGSize { double x0; double x1; })a1;
+ (id)sharedContext;
+ (id)getImageFromCVPixelBuffer:(struct __CVBuffer { } *)a0;

@end
