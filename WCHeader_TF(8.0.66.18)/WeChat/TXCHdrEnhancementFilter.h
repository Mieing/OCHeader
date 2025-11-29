@class TXCRenderCommandMetal, MPSImageGaussianBlur, MPSImageBilinearScale;
@protocol MTLDevice, MTLTexture, MTLCommandQueue, MTLBuffer;

@interface TXCHdrEnhancementFilter : NSObject {
    struct shared_ptr<liteav::video::GraphicsContext> { struct GraphicsContext *__ptr_; struct __shared_weak_count *__cntrl_; } _graphicsContext;
}

@property (nonatomic) BOOL initialized;
@property (retain, nonatomic) id<MTLDevice> device;
@property (retain, nonatomic) id<MTLCommandQueue> commandQueue;
@property (nonatomic) struct __CVMetalTextureCache { } *metalTextureCache;
@property (nonatomic) double sigma;
@property (retain, nonatomic) id<MTLBuffer> vertexBuffer;
@property (retain, nonatomic) id<MTLTexture> gainTexture;
@property (retain, nonatomic) id<MTLTexture> blurredTexture;
@property (retain, nonatomic) TXCRenderCommandMetal *lutCommand;
@property (retain, nonatomic) TXCRenderCommandMetal *mixCommand;
@property (retain, nonatomic) MPSImageGaussianBlur *gaussianBlurFilter;
@property (retain, nonatomic) MPSImageBilinearScale *scaleFilter;

- (id)initWithGraphicsContext:(struct shared_ptr<liteav::video::GraphicsContext> { struct GraphicsContext *x0; struct __shared_weak_count *x1; })a0;
- (void)dealloc;
- (void)initialize;
- (void)uninitialize;
- (BOOL)process:(const struct NativePixelFrame { void /* function */ **x0; } *)a0 target:(struct NativePixelFrame { void /* function */ **x0; } *)a1;
- (BOOL)processTexture:(id)a0 outputTexture:(id)a1;
- (void)recreateTexturesIfResolutionChanged:(unsigned long long)a0 height:(unsigned long long)a1;
- (void)fillMetadata:(struct NativePixelFrame { void /* function */ **x0; } *)a0;
- (id)metalTextureFromRGBA64LEPixelBuffer:(struct __CVBuffer { } *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
