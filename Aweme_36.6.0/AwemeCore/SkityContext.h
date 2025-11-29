@protocol MTLCommandQueue, MTLDevice;

@interface SkityContext : NSObject {
    struct unique_ptr<skity::GPUContext, std::default_delete<skity::GPUContext>> { struct GPUContext *__ptr_; } _gpu_ctx;
    struct unique_ptr<SkityFontDelegate, std::default_delete<SkityFontDelegate>> { struct SkityFontDelegate *__ptr_; } _font_delegate;
    struct vector<skity::TypefaceDarwin *, std::allocator<skity::TypefaceDarwin *>> { struct TypefaceDarwin **__begin_; struct TypefaceDarwin **__end_; struct TypefaceDarwin **__cap_; } _ct_fonts;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _cache_mutex;
}

@property (readonly, nonatomic) id<MTLDevice> device;
@property (readonly, nonatomic) id<MTLCommandQueue> queue;
@property (nonatomic) BOOL enableMergeDraw;
@property (nonatomic) BOOL texturePow2;
@property (nonatomic) unsigned long long resourceCacheLimit;

- (void *)fontDelegate;
- (void *)registFont:(id)a0 weight:(long long)a1 width:(long long)a2 slant:(long long)a3;
- (void).cxx_destruct;
- (id)init;
- (void *)handler;
- (id).cxx_construct;

@end
