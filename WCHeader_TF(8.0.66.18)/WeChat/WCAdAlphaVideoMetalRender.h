@class MTKView, NSString;
@protocol MTLBuffer, MTLTexture, MTLCommandQueue, MTLRenderPipelineState;

@interface WCAdAlphaVideoMetalRender : MMUIView <MTKViewDelegate>

@property (nonatomic) int videoCompositeType;
@property (retain, nonatomic) MTKView *mtkView;
@property (nonatomic) struct __CVMetalTextureCache { } *textureCache;
@property (nonatomic) void /* unknown type, empty encoding */ viewportSize;
@property (retain, nonatomic) id<MTLRenderPipelineState> pipelineState;
@property (retain, nonatomic) id<MTLCommandQueue> commandQueue;
@property (retain, nonatomic) id<MTLTexture> texture;
@property (retain, nonatomic) id<MTLBuffer> vertices;
@property (nonatomic) unsigned long long numVertices;
@property (nonatomic) struct __CVBuffer { } *inputPixelBuffer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 videoCompositeType:(int)a1;
- (void)renderFrame:(struct __CVBuffer { } *)a0;
- (void)clearFrame;
- (void)setup;
- (void)setupMTKView;
- (void)setupPipeline;
- (void)setupVertex;
- (void)dealloc;
- (void)mtkView:(id)a0 drawableSizeWillChange:(struct CGSize { double x0; double x1; })a1;
- (void)drawInMTKView:(id)a0;
- (void)drawTextureWithEncoder:(id)a0;
- (void).cxx_destruct;

@end
