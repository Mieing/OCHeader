@class PixelTextureFormat;
@protocol MTLBuffer, MTLRenderPipelineState;

@interface MetalFilterDefault : FilterBase {
    id<MTLBuffer> textureBuffer;
}

@property (retain, nonatomic) id<MTLRenderPipelineState> renderPipelineState;
@property (retain, nonatomic) id<MTLRenderPipelineState> renderPipelineStateFor10bit;
@property (retain, nonatomic) PixelTextureFormat *ptFmt8bit;
@property (retain, nonatomic) PixelTextureFormat *ptFmt10bit;
@property (retain, nonatomic) id<MTLBuffer> vertexBuffer;
@property (nonatomic) BOOL mSoftStrideOpt;

- (id)getFragmentShader;
- (id)initWithFilterType:(int)a0 order:(int)a1;
- (id)getVertexShader;
- (void)generateVertex;
- (id)createPixelTextureWithFrame:(struct VideoFrame { struct VideoFrameBuffer *x0; } *)a0 format:(id)a1;
- (long long)renderBefore:(id)a0 frame:(struct MetalTextureBuffer { void /* function */ **x0; struct __CVBuffer *x1; void **x2; int *x3; id x4; id x5; id x6; int x7; id x8; id x9; id x10; int x11; int x12; int x13; int x14; int x15; void *x16; int x17; id x18; BOOL x19; BOOL x20; float x21; int x22; int x23; int x24; id x25; long long x26; long long x27; int x28; int x29; } *)a1;
- (void)drawFrame:(struct MetalTextureBuffer { void /* function */ **x0; struct __CVBuffer *x1; void **x2; int *x3; id x4; id x5; id x6; int x7; id x8; id x9; id x10; int x11; int x12; int x13; int x14; int x15; void *x16; int x17; id x18; BOOL x19; BOOL x20; float x21; int x22; int x23; int x24; id x25; long long x26; long long x27; int x28; int x29; } *)a0 withRenderEncoder:(id)a1;
- (long long)renderAfter;
- (id)initWithFilterType:(int)a0 order:(int)a1 pixelFmt:(int)a2;
- (id)setUpRenderPipeline:(unsigned long long)a0;
- (unsigned long long)getOutputBits:(struct MetalTextureBuffer { void /* function */ **x0; struct __CVBuffer *x1; void **x2; int *x3; id x4; id x5; id x6; int x7; id x8; id x9; id x10; int x11; int x12; int x13; int x14; int x15; void *x16; int x17; id x18; BOOL x19; BOOL x20; float x21; int x22; int x23; int x24; id x25; long long x26; long long x27; int x28; int x29; } *)a0;
- (id)getRenderPipeline:(struct MetalTextureBuffer { void /* function */ **x0; struct __CVBuffer *x1; void **x2; int *x3; id x4; id x5; id x6; int x7; id x8; id x9; id x10; int x11; int x12; int x13; int x14; int x15; void *x16; int x17; id x18; BOOL x19; BOOL x20; float x21; int x22; int x23; int x24; id x25; long long x26; long long x27; int x28; int x29; } *)a0 bitCount:(unsigned long long)a1;
- (struct VideoFrame { struct VideoFrameBuffer *x0; } *)process:(struct VideoFrame { struct VideoFrameBuffer *x0; } *)a0;
- (void).cxx_destruct;
- (id)init;
- (void)commit:(id)a0;

@end
