@interface IESLiveInteractUtils : NSObject

+ (struct __CVBuffer { } *)createDarkFrameWithFrameSize:(struct CGSize { double x0; double x1; })a0;
+ (struct __CVBuffer { } *)pixelBufferWithImage:(id)a0;
+ (struct __CVBuffer { } *)pixelBufferWithLayer:(id)a0;
+ (struct __CVBuffer { } *)imageToYUVPixelBuffer:(id)a0;

@end
