@interface XSharedCache : NSObject {
    struct ObjectRef<rfx::RfxShaderLibrary> { struct RfxShaderLibrary *mpObject; } _shaderLibrary;
    struct ObjectRef<rfx::RfxPipelineStateCache> { struct RfxPipelineStateCache *mpObject; } _pipelineStateCache;
    struct ObjectRef<rfx::RfxAssetManager> { struct RfxAssetManager *mpObject; } _assetManager;
    struct ObjectRef<xnet::rci::RciRenderDevice> { struct RciRenderDevice *mpObject; } _device;
    struct shared_ptr<rfx::RfxThreadPool> { struct RfxThreadPool *__ptr_; struct __shared_weak_count *__cntrl_; } _threadPool;
}

+ (id)sharedCache;

- (void *)shaderLibrary;
- (void *)pipelineStateCache;
- (void *)assetManager;
- (struct shared_ptr<rfx::RfxThreadPool> { struct RfxThreadPool *x0; struct __shared_weak_count *x1; })threadPool;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
