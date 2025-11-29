@interface TXCPixelBufferToNSDataConverter : NSObject

+ (id)dataFromPixelBuffer:(struct __CVBuffer { } *)a0;
+ (BOOL)copyPixelBuffer:(struct __CVBuffer { } *)a0 toData:(id)a1;
+ (BOOL)copyData:(id)a0 toPixelBuffer:(struct __CVBuffer { } *)a1;
+ (void)copyPixelBuffer2dataPtr:(char **)a0 pixelBuffer:(struct __CVBuffer { } *)a1 planeIndex:(int)a2;
+ (unsigned long long)copyData:(const char *)a0 toPixelBuffer:(struct __CVBuffer { } *)a1 planeIndex:(int)a2 planeWidth:(unsigned long long)a3;

@end
