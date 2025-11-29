@interface IESSCImageUtil : NSObject

+ (struct __CVBuffer { } *)copyPixelBuffer:(id)a0;
+ (struct __CVBuffer { } *)copyPixelBufferWithVideoComposition:(id)a0 image:(id)a1;
+ (struct __CVBuffer { } *)copyCurrentPixelBuffer:(id)a0;
+ (struct __CVBuffer { } *)renderNewPixelBufferWithSize:(struct CGSize { double x0; double x1; })a0 videoComposition:(id)a1 image:(id)a2;
+ (id)flipYCoordinate:(id)a0;
+ (id)applyAlpha:(double)a0 image:(id)a1;
+ (id)safeApplyTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 image:(id)a1;
+ (struct __CVBuffer { } *)copyPixelBufferWithRenderSize:(struct CGSize { double x0; double x1; })a0 videoComposition:(id)a1 image:(id)a2;
+ (id)imageWithColor:(id)a0 size:(struct CGSize { double x0; double x1; })a1;

@end
