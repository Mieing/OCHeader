@interface XLiveRenderTargetPool : NSObject {
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _lock;
    struct vector<xnet::ObjectRef<rfx::RfxTexture>, std::allocator<xnet::ObjectRef<rfx::RfxTexture>>> { void *__begin_; void *__end_; struct __compressed_pair<xnet::ObjectRef<rfx::RfxTexture> *, std::allocator<xnet::ObjectRef<rfx::RfxTexture>>> { void *__value_; } __end_cap_; } _freeList;
}

- (void)pushTexture:(struct ObjectRef<rfx::RfxTexture> { struct RfxTexture *x0; })a0;
- (struct ObjectRef<rfx::RfxTexture> { struct RfxTexture *x0; })acquireTexture;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
