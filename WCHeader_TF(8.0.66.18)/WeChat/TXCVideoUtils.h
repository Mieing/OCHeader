@class CIContext;
@protocol TXCPixelTransferSession;

@interface TXCVideoUtils : NSObject

@property (class, readonly) id<TXCPixelTransferSession> transferSession;
@property (class, readonly) CIContext *context;

+ (struct opaqueCMSampleBuffer { } *)createSampleBufferFromPixelBuffer:(struct __CVBuffer { } *)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
+ (struct __CVBuffer { } *)createPixelBufferWithFormat:(unsigned long long)a0 bufferSize:(struct CGSize { double x0; double x1; })a1;
+ (struct __CVPixelBufferPool { } *)createPixelBufferPoolWithFormat:(unsigned long long)a0 bufferSize:(struct CGSize { double x0; double x1; })a1 attribules:(id)a2;
+ (struct __CVPixelBufferPool { } *)createPixelBufferPoolWithFormat:(unsigned long long)a0 bufferSize:(struct CGSize { double x0; double x1; })a1;
+ (struct __CVBuffer { } *)createPixelBufferFromPool:(struct __CVPixelBufferPool { } *)a0;
+ (void)copyPixelBuffer:(struct __CVBuffer { } *)a0 toPixelBuffer:(struct __CVBuffer { } *)a1;
+ (BOOL)isAppActive;
+ (struct __CVBuffer { } *)pixelBufferFromImage:(struct CGImage { } *)a0;
+ (struct __CVBuffer { } *)retainImageSupportedBuffer:(struct __CVBuffer { } *)a0;
+ (unsigned long long)formatOfPixelBuffer:(struct __CVBuffer { } *)a0;
+ (BOOL)isNv12:(unsigned long long)a0;
+ (BOOL)isI420:(unsigned long long)a0;
+ (BOOL)isFormat:(unsigned long long)a0 sameTo:(unsigned long long)a1;
+ (struct CGSize { double x0; double x1; })sizeOfPixelBuffer:(struct __CVBuffer { } *)a0;
+ (unsigned int)osTypeOfVideoFormat:(unsigned long long)a0;
+ (void)copyNv12Buffer:(struct __CVBuffer { } *)a0 toBgraBuffer:(struct __CVBuffer { } *)a1;
+ (struct vImage_ARGBToYpCbCr { unsigned char x0[128]; } *)get601VideoRangeInfo;
+ (void)copyBgraBuffer:(struct __CVBuffer { } *)a0 toNv12Buffer:(struct __CVBuffer { } *)a1;
+ (void)copyBgraBuffer:(struct __CVBuffer { } *)a0 toI420Buffer:(struct __CVBuffer { } *)a1;
+ (void)copyI420Buffer:(struct __CVBuffer { } *)a0 toNv12Buffer:(struct __CVBuffer { } *)a1;
+ (void)copyNv12Buffer:(struct __CVBuffer { } *)a0 toI420Buffer:(struct __CVBuffer { } *)a1;
+ (void)copyPixelBuffer:(struct __CVBuffer { } *)a0 toSamePixelBuffer:(struct __CVBuffer { } *)a1;
+ (void)copyYuv420P10leBytes:(const char **)a0 size:(const int *)a1 toP010eBuffer:(struct __CVBuffer { } *)a2;

@end
