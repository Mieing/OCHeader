@class NSLock, NSString, NSMutableArray, MTKView;
@protocol MTLCommandQueue, MTLBuffer, MTLRenderPipelineState;

@interface TVLPlayerView : UIView <MTKViewDelegate> {
    MTKView *_renderView;
    struct __CVBuffer { } *_videoFrame;
    NSMutableArray *_textures;
    struct __CVMetalTextureCache { } *_textureCache;
    id<MTLRenderPipelineState> _pipelineState;
    id<MTLCommandQueue> _commandQueue;
    id<MTLBuffer> _vertices;
    unsigned long long _numVertices;
    NSLock *_renderMutex;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _renderRegion;
    long long _conversionMatrixType;
}

@property (nonatomic) BOOL drawsImmediately;
@property (nonatomic) unsigned long long resizingMode;
@property BOOL enableColorRangeChange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupVertex;
- (void)setupRender;
- (void)updateContentScaleFactor;
- (void)renderInit;
- (void)setupRenderView;
- (id)getStrFromFmt;
- (long long)getColorMatrixType:(unsigned int)a0 CVBufferAttachment:(void *)a1;
- (void)updateTextureWithYUVVideoFrame:(struct __CVBuffer { } *)a0;
- (void)updateTextureWithVideoFrame:(struct __CVBuffer { } *)a0;
- (void)renderVideoFrame:(struct __CVBuffer { } *)a0 error:(id *)a1;
- (void)updateVideoFrame:(struct __CVBuffer { } *)a0;
- (void)setupContextIfNeeded;
- (void).cxx_destruct;
- (void)setupTextureCache;
- (void)rendering;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)drawInMTKView:(id)a0;
- (void)mtkView:(id)a0 drawableSizeWillChange:(struct CGSize { double x0; double x1; })a1;
- (void)dealloc;
- (void)setupPipeline;
- (void)setNeedsRedraw;

@end
