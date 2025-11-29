@class TXCYSuperResolutionFilterMetal, TXCNV12UVSuperResolutionFilterMetal, TXCI420UVSuperResolutionFilterMetal;
@protocol MTLCommandQueue, MTLDevice, MTLTexture;

@interface TXCSuperResolutionFilter : NSObject {
    id<MTLTexture> _cpuTexturesCache[3];
    struct shared_ptr<std::vector<int>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } _lutBuffer;
    struct shared_ptr<liteav::video::GraphicsContext> { struct GraphicsContext *__ptr_; struct __shared_weak_count *__cntrl_; } _graphicsContext;
}

@property (nonatomic) BOOL initialized;
@property (retain, nonatomic) id<MTLDevice> device;
@property (retain, nonatomic) id<MTLCommandQueue> commandQueue;
@property (nonatomic) struct __CVMetalTextureCache { } *metalTextureCache;
@property (retain, nonatomic) TXCYSuperResolutionFilterMetal *yFilter;
@property (retain, nonatomic) TXCNV12UVSuperResolutionFilterMetal *nv12uvFilter;
@property (retain, nonatomic) TXCI420UVSuperResolutionFilterMetal *i420uvFilter;

- (id)initWithGraphicsContext:(struct shared_ptr<liteav::video::GraphicsContext> { struct GraphicsContext *x0; struct __shared_weak_count *x1; })a0 lutBuffer:(const void *)a1;
- (void)dealloc;
- (void)initialize;
- (BOOL)doInitialize;
- (void)uninitialize;
- (BOOL)process:(const struct NativePixelFrame { void /* function */ **x0; } *)a0 target:(struct NativePixelFrame { void /* function */ **x0; } *)a1;
- (BOOL)processNv12Frame:(struct __CVBuffer { } *)a0 target:(struct __CVBuffer { } *)a1;
- (BOOL)processI420Frame:(const void *)a0 target:(struct __CVBuffer { } *)a1;
- (id)metalTextureFromNV12PixelBuffer:(struct __CVBuffer { } *)a0 planeIndex:(unsigned long long)a1;
- (id)metalTextureFromI420PixelBuffer:(struct __CVBuffer { } *)a0 planeIndex:(unsigned long long)a1;
- (id)metalTextureFromImageFrame:(void *)a0 planeIndex:(unsigned long long)a1;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
