@class NSString, NSObject;
@protocol MTLRenderPipelineState, OS_dispatch_queue, MTLCommandQueue, MTLBuffer;

@interface IESSoloKTVImageMetalView : MTKView <MTKViewDelegate>

@property (nonatomic) struct __CVMetalTextureCache { } *textureCache;
@property (nonatomic) void /* unknown type, empty encoding */ viewportSize;
@property (retain, nonatomic) id<MTLRenderPipelineState> pipelineState;
@property (retain, nonatomic) id<MTLCommandQueue> cmdQueue;
@property (retain, nonatomic) id<MTLBuffer> vertices;
@property (nonatomic) unsigned long long verticesCount;
@property (nonatomic) BOOL isDraw;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *timerQueue;
@property (copy, nonatomic) id /* block */ createTextureBlock;
@property (nonatomic) float fps;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initView;
- (void)initMTKView;
- (void)setCreateTexture:(id /* block */)a0;
- (void)startRendering;
- (void)stopRendering;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawInMTKView:(id)a0;
- (void)mtkView:(id)a0 drawableSizeWillChange:(struct CGSize { double x0; double x1; })a1;
- (void)layoutSubviews;
- (void)dealloc;
- (BOOL)isRendering;

@end
