@class EAGLContext, NSObject;
@protocol OS_dispatch_queue;

@interface XImageContext : NSObject {
    struct ObjectRef<xnet::rci::RciRenderDevice> { struct RciRenderDevice *mpObject; } _renderDevice;
    struct unique_ptr<rfx::RfxRenderGraph, std::default_delete<rfx::RfxRenderGraph>> { struct __compressed_pair<rfx::RfxRenderGraph *, std::default_delete<rfx::RfxRenderGraph>> { struct RfxRenderGraph *__value_; } __ptr_; } _renderGraph;
    struct vector<PixelBufferPool, std::allocator<PixelBufferPool>> { struct PixelBufferPool *__begin_; struct PixelBufferPool *__end_; struct __compressed_pair<PixelBufferPool *, std::allocator<PixelBufferPool>> { struct PixelBufferPool *__value_; } __end_cap_; } _pixelBufferPools;
    struct __CVMetalTextureCache { } *_cvMetalTextureCache;
    struct __CVOpenGLESTextureCache { } *_cvGLTextureCache;
    EAGLContext *_glContext;
    EAGLContext *_originGLContext;
    struct ObjectRef<rfx::RfxContext> { struct RfxContext *mpObject; } _rfxContext;
    NSObject<OS_dispatch_queue> *_queue;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _mutex;
}

+ (id)context;
+ (id)builtInShaderPath;

- (void)setup:(id)a0;
- (id)init;
- (id)initWithGLContext:(id)a0;
- (void)clear;
- (void)dealloc;
- (void)bindToTLS;
- (void)unBindFromTLS;
- (BOOL)isValid;
- (void *)renderDevice;
- (void *)renderGraph;
- (void *)shaderLibrary;
- (void *)pipelineStateCache;
- (void *)assetManager;
- (struct __CVMetalTextureCache { } *)cvMetalTextureCache;
- (struct __CVOpenGLESTextureCache { } *)cvGLTextureCache;
- (id)glContext;
- (void *)rfxContext;
- (struct __CVPixelBufferPool { } *)getCompatiblePixelBufferPool:(unsigned int)a0 width:(int)a1 height:(int)a2;
- (struct __CVBuffer { } *)createPixelBuffer:(unsigned int)a0 width:(int)a1 height:(int)a2;
- (void)dispatchSync:(id /* block */)a0;
- (void)dispatchAsync:(id /* block */)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
