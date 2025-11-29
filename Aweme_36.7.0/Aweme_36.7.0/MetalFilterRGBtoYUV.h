@protocol MTLComputePipelineState, MTLBuffer;

@interface MetalFilterRGBtoYUV : FilterBase {
    id<MTLComputePipelineState> _computeYPipelineState;
    id<MTLComputePipelineState> _computeUVPipelineState;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } _threadgroupSize;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } _threadgroupCount;
    unsigned int curColorConversionType;
    id<MTLBuffer> curColorConversionBuffer;
    BOOL onceHandle;
}

- (long long)render:(id)a0 sTexture:(id)a1 fboTexture:(id)a2 fboTexture2:(id)a3 inFormat:(unsigned int)a4 cbcrMatrixType:(long long)a5;
- (long long)render:(id)a0 sTexture:(id)a1 fboTexture:(id)a2 inFormat:(unsigned int)a3 cbcrMatrixType:(long long)a4;
- (void)checkColorConversion:(unsigned int)a0 cbcrMatrixType:(long long)a1;
- (struct VideoFrame { struct VideoFrameBuffer *x0; } *)process:(struct VideoFrame { struct VideoFrameBuffer *x0; } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDictionary:(id)a0;

@end
