@interface LiveStreamImageConvertHelper : NSObject

+ (id)ConvertImageBufferData:(struct __CVBuffer { } *)a0 imageName:(id)a1 imageType:(unsigned long long)a2 ratio:(double)a3 save:(BOOL)a4;
+ (void)saveImgData:(id)a0 imageName:(id)a1;
+ (BOOL)CGImageRefContainsAlpha:(struct CGImage { } *)a0;
+ (void)showImageData:(struct CGImage { } *)a0 imageName:(id)a1;
+ (struct __CVBuffer { } *)CVPixelBufferRefFromUIImage:(id)a0 pixelType:(unsigned int)a1;

@end
