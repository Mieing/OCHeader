@protocol MTLBuffer, MTLRenderPipelineState;

@interface MetalFilterYUVtoRBG : MetalFilterDefault {
    struct __CVMetalTextureCache { } *videoTextureCache;
    unsigned int curColorConversionType;
    id<MTLBuffer> curColorConversionBuffer;
    long long curYCbCrMatrixType;
    float mCurUMaxTexCoord;
    id<MTLRenderPipelineState> nv12piplineState8bit;
    id<MTLRenderPipelineState> nv12piplineState10bit;
    id<MTLRenderPipelineState> i420piplineState8bit;
    id<MTLRenderPipelineState> i420piplineState10bit;
}

- (id)getFragmentShader;
- (id)createPixelTextureWithFrame:(struct VideoFrame { struct VideoFrameBuffer *x0; } *)a0 format:(id)a1;
- (long long)renderBefore:(id)a0 frame:(struct MetalTextureBuffer { void /* function */ **x0; struct __CVBuffer *x1; void **x2; int *x3; id x4; id x5; id x6; int x7; id x8; id x9; id x10; int x11; int x12; int x13; int x14; int x15; void *x16; int x17; id x18; BOOL x19; BOOL x20; float x21; int x22; int x23; int x24; id x25; long long x26; long long x27; int x28; int x29; } *)a1;
- (id)setUpRenderPipeline:(unsigned long long)a0;
- (id)getRenderPipeline:(struct MetalTextureBuffer { void /* function */ **x0; struct __CVBuffer *x1; void **x2; int *x3; id x4; id x5; id x6; int x7; id x8; id x9; id x10; int x11; int x12; int x13; int x14; int x15; void *x16; int x17; id x18; BOOL x19; BOOL x20; float x21; int x22; int x23; int x24; id x25; long long x26; long long x27; int x28; int x29; } *)a0 bitCount:(unsigned long long)a1;
- (void)checkColorConversion:(unsigned int)a0 YCbCrMatrixAttachment:(void *)a1;
- (id)initWithInputFmt:(int)a0;
- (id)initWithInputFmt:(int)a0 param:(id)a1;
- (id)buildRenderPiplneStateForPixFmt:(int)a0 outPixelFmt:(unsigned long long)a1;
- (id)getFragmentShader:(int)a0;
- (void)generateVertex:(float)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
