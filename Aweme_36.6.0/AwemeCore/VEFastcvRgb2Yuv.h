@interface VEFastcvRgb2Yuv : NSObject {
    struct UMat { struct GPUContext *x0; int x1; int x2; int x3; int x4; int x5; BOOL x6; struct MatStep { unsigned long long *x0; unsigned long long x1[2]; } x7; int x8; void *x9; } *_tmpContextMat;
    struct GPUContext { void *x0; void *x1; void *x2; int x3; struct OpSupportBits { unsigned int x0; unsigned long long x1; void *x2; } x4; BOOL x5; char *x6; void *x7; } *_gpuContext;
}

@property (nonatomic) struct __CVPixelBufferPool { } *pixelBufferPool;
@property (nonatomic) int pixelBufferPoolWidth;
@property (nonatomic) int pixelBufferPoolHeight;
@property (nonatomic) unsigned int pixelBufferPoolPixelFormat;

- (struct __CVBuffer { } *)cropPixelBuffer:(struct __CVBuffer { } *)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 onGpu:(BOOL)a2;
- (struct __CVBuffer { } *)cropAndScalePixelBuffer:(struct __CVBuffer { } *)a0 destSize:(struct CGSize { double x0; double x1; })a1;
- (struct __CVBuffer { } *)genYuvPixelBuffer:(unsigned long long)a0 frameHeight:(unsigned long long)a1 pixelFormat:(unsigned int)a2;
- (void)cvt_fastcv_8bit:(struct __CVBuffer { } *)a0 yuv8biPixelBuffer:(struct __CVBuffer { } *)a1 gpuContext:(struct GPUContext { void *x0; void *x1; void *x2; int x3; struct OpSupportBits { unsigned int x0; unsigned long long x1; void *x2; } x4; BOOL x5; char *x6; void *x7; } *)a2 transColorSpace:(int)a3;
- (void)cvt_fastcv_10bit:(struct __CVBuffer { } *)a0 yuv10biPixelBuffer:(struct __CVBuffer { } *)a1 gpuContext:(struct GPUContext { void *x0; void *x1; void *x2; int x3; struct OpSupportBits { unsigned int x0; unsigned long long x1; void *x2; } x4; BOOL x5; char *x6; void *x7; } *)a2 transColorSpace:(int)a3;
- (struct __CVBuffer { } *)convert10BitRGBA2YUVFastCV:(struct __CVBuffer { } *)a0 transColorSpace:(int)a1;
- (struct __CVBuffer { } *)convert8BitRGBA2YUVFastCV:(struct __CVBuffer { } *)a0 transColorSpace:(int)a1;
- (struct __CVBuffer { } *)convertRGBA2BGRAFastCV:(struct __CVBuffer { } *)a0;
- (void)crop_fastcv:(struct __CVBuffer { } *)a0 pixelBuffer:(struct __CVBuffer { } *)a1 gpuContext:(struct GPUContext { void *x0; void *x1; void *x2; int x3; struct OpSupportBits { unsigned int x0; unsigned long long x1; void *x2; } x4; BOOL x5; char *x6; void *x7; } *)a2 isRGBA:(BOOL)a3 crop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;
- (void)crop_fastcv:(struct __CVBuffer { } *)a0 pixelBuffer:(struct __CVBuffer { } *)a1 isRGBA:(BOOL)a2 crop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)cropAndScale_fastcv:(struct __CVBuffer { } *)a0 pixelBuffer:(struct __CVBuffer { } *)a1 gpuContext:(struct GPUContext { void *x0; void *x1; void *x2; int x3; struct OpSupportBits { unsigned int x0; unsigned long long x1; void *x2; } x4; BOOL x5; char *x6; void *x7; } *)a2 isRGBA:(BOOL)a3;
- (struct __CVBuffer { } *)convertRGBA2YUVFastCV:(struct __CVBuffer { } *)a0;
- (struct __CVBuffer { } *)convertBGRA2RGBAFastCV:(struct __CVBuffer { } *)a0;
- (void)downsampleCVPixelBuffer:(struct __CVBuffer { } *)a0 targetbuffer:(struct __CVBuffer { } *)a1 resizetype:(int)a2;
- (struct __CFDictionary { } *)buffer_attributes_create:(int)a0 height:(int)a1 pix_fmt:(unsigned int)a2;
- (struct __CVBuffer { } *)convertRGBA2YUVFastCV:(struct __CVBuffer { } *)a0 transColorSpace:(int)a1;
- (id)init;
- (void)dealloc;

@end
