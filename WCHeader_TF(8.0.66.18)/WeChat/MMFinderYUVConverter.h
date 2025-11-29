@interface MMFinderYUVConverter : NSObject

+ (id)pixelBufferToI420:(struct __CVBuffer { } *)a0 orientation:(unsigned char)a1;
+ (struct __CVBuffer { } *)i420FrameToPixelBuffer:(id)a0;
+ (int)rotateMode:(unsigned char)a0;
+ (struct opaqueCMSampleBuffer { } *)pixelBufferToSampleBuffer:(struct __CVBuffer { } *)a0;

@end
