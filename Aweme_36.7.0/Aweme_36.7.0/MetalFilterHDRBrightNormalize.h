@class NSString, NSArray, PixelTextureFormat;
@protocol MTLComputePipelineState, MTLBuffer, MTLTexture;

@interface MetalFilterHDRBrightNormalize : FilterBase {
    id<MTLComputePipelineState> cHDR2SDRPipelineState;
    id<MTLComputePipelineState> cHDRBnPipelineState;
    id<MTLComputePipelineState> cHDR2SDRNV12PipelineState;
    id<MTLComputePipelineState> cHDRBnNV12PipelineState;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } cHDR2SDRthreadsPerGroupSize;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } cHDRBnthreadsPerGroupSize;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } cHDR2SDRNV12threadsPerGroupSize;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } cHDRBnNV12threadsPerGroupSize;
    unsigned int curColorConversionType;
    id<MTLBuffer> yuv2rgbMatrix;
    id<MTLBuffer> yuv2rgbOffset;
    id<MTLBuffer> strengthBuffer;
    float curStrength;
    id<MTLTexture> lutTexture;
    NSString *modelPath;
    struct atomic<ProcessorFilterState> { struct __cxx_atomic_impl<ProcessorFilterState, std::__cxx_atomic_base_impl<ProcessorFilterState>> { _Atomic long long __a_value; } __a_; } pFilterState;
    int weightWidth;
    int weightHeight;
    int weightDepth;
    float thresh;
    NSArray *_steps;
    NSArray *_strengths;
    int _transitionDuration;
    int _FrameIndex;
    PixelTextureFormat *ptFmt10bit;
    struct ColorConversion { struct { void /* unknown type, empty encoding */ columns[3]; } matrix; void /* unknown type, empty encoding */ offset; void /* unknown type, empty encoding */ rangeMin; void /* unknown type, empty encoding */ rangeMax; } x420ColorConversion;
    struct ColorConversion { struct { void /* unknown type, empty encoding */ columns[3]; } matrix; void /* unknown type, empty encoding */ offset; void /* unknown type, empty encoding */ rangeMin; void /* unknown type, empty encoding */ rangeMax; } xf20ColorConversion;
    PixelTextureFormat *ptFmt8bit;
    BOOL isSuccessLogPrinted;
    BOOL isSupportNonUniformThreadgroupSize;
    long long _frameIndexThresh;
    long long _frameOptimize;
    double _threshOff;
}

- (BOOL)isUsing;
- (BOOL)getMTLTextureFromPixelBuffer:(id *)a0 texture2:(id *)a1 videoBuffer:(struct VideoFrameBuffer { void /* function */ **x0; } *)a2;
- (int)initKernel;
- (void)makeThreadsPerGroupSize:(id)a0 groupSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } *)a1;
- (long long)checkFrameOptimizeMode:(long long)a0;
- (BOOL)checkHDRHLG:(struct __CVBuffer { } *)a0;
- (id)createFBOTexture:(struct __CVBuffer { } *)a0 format:(id)a1 toSDR:(BOOL)a2;
- (void)checkColorConversion:(unsigned int)a0;
- (int)runKernel:(id)a0 inUV:(id)a1 dst:(id)a2 toSDR:(BOOL)a3 screenLight:(float)a4;
- (int)runKernel:(id)a0 dst:(id)a1 toSDR:(BOOL)a2 screenLight:(float)a3;
- (int)updateStrength:(float)a0;
- (struct VideoFrame { struct VideoFrameBuffer *x0; } *)process:(struct VideoFrame { struct VideoFrameBuffer *x0; } *)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
