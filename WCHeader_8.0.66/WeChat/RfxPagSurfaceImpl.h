@interface RfxPagSurfaceImpl : NSObject

@property (nonatomic) struct shared_ptr<rfx::RfxPagSurface> { struct RfxPagSurface *__ptr_; struct __shared_weak_count *__cntrl_; } pagSurface;

+ (id)FromView:(id)a0;

- (id)initWithSurface:(struct shared_ptr<rfx::RfxPagSurface> { struct RfxPagSurface *x0; struct __shared_weak_count *x1; })a0;
- (void)dealloc;
- (int)width;
- (int)height;
- (void)updateSize;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
