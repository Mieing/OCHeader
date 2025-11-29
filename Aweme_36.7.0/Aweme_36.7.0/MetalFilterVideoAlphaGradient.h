@class NSArray;
@protocol MTLBuffer;

@interface MetalFilterVideoAlphaGradient : MetalFilterDefault {
    id<MTLBuffer> _indexBuffer;
    unsigned int curColorConversionType;
    id<MTLBuffer> curColorConversionBuffer;
    long long curYCbCrMatrixType;
}

@property (retain, nonatomic) NSArray *mGradientInterval;
@property (retain, nonatomic) NSArray *mGradientWeight;
@property (nonatomic) int mDirectScreen;
@property (nonatomic) int indexCount;

- (id)getFragmentShader;
- (id)getVertexShader;
- (void)generateVertex;
- (BOOL)checkIsRenderToMetalView;
- (BOOL)supportRenderToMetalView;
- (long long)renderBefore:(id)a0 frame:(struct MetalTextureBuffer { void /* function */ **x0; struct __CVBuffer *x1; void **x2; int *x3; id x4; id x5; id x6; int x7; id x8; id x9; id x10; int x11; int x12; int x13; int x14; int x15; void *x16; int x17; id x18; BOOL x19; BOOL x20; float x21; int x22; int x23; int x24; id x25; long long x26; long long x27; int x28; int x29; } *)a1;
- (void)drawFrame:(struct MetalTextureBuffer { void /* function */ **x0; struct __CVBuffer *x1; void **x2; int *x3; id x4; id x5; id x6; int x7; id x8; id x9; id x10; int x11; int x12; int x13; int x14; int x15; void *x16; int x17; id x18; BOOL x19; BOOL x20; float x21; int x22; int x23; int x24; id x25; long long x26; long long x27; int x28; int x29; } *)a0 withRenderEncoder:(id)a1;
- (id)setUpRenderPipeline:(unsigned long long)a0;
- (void)checkColorConversion:(unsigned int)a0 YCbCrMatrixAttachment:(void *)a1;
- (id)reSetUpRenderPipeline:(unsigned long long)a0 isDirectScreen:(BOOL)a1;
- (struct VideoFrame { struct VideoFrameBuffer *x0; } *)process:(struct VideoFrame { struct VideoFrameBuffer *x0; } *)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 index:(int)a1;

@end
