@interface BDUGImageMarkAdapter : NSObject

+ (char *)pixelRGBABytesFromImage:(id)a0;
+ (id)imageFromRGBABytes:(char *)a0 imageSize:(struct CGSize { double x0; double x1; })a1;
+ (const char *)constPixelRGBABytesFromImage:(id)a0;
+ (char *)pixelRGBABytesFromImageRef:(struct CGImage { } *)a0;
+ (struct CGImage { } *)imageRefFromRGBABytes:(char *)a0 imageSize:(struct CGSize { double x0; double x1; })a1;
+ (void)useOldFashionEncode:(BOOL)a0;
+ (void)asyncMarkImage:(id)a0 withInfoString:(id)a1 completion:(id /* block */)a2;
+ (void)asyncReadImageMark:(id)a0 completion:(id /* block */)a1;
+ (void)cancelLaterTasks;

@end
