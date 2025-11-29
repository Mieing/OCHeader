@interface PAGSurfaceImpl : NSObject {
    struct __CVBuffer { } *pixelBuffer;
}

@property (nonatomic) struct shared_ptr<pag::PAGSurface> { struct PAGSurface *__ptr_; struct __shared_weak_count *__cntrl_; } pagSurface;

+ (id)FromLayer:(id)a0;
+ (id)FromCVPixelBuffer:(struct __CVBuffer { } *)a0;
+ (id)FromCVPixelBuffer:(struct __CVBuffer { } *)a0 context:(id)a1;
+ (id)MakeOffscreen:(struct CGSize { double x0; double x1; })a0;

- (id)initWithSurface:(struct shared_ptr<pag::PAGSurface> { struct PAGSurface *x0; struct __shared_weak_count *x1; })a0;
- (id)initWithSurface:(struct shared_ptr<pag::PAGSurface> { struct PAGSurface *x0; struct __shared_weak_count *x1; })a0 pixelBuffer:(struct __CVBuffer { } *)a1;
- (void)updateSize;
- (int)width;
- (int)height;
- (BOOL)clearAll;
- (void)freeCache;
- (struct __CVBuffer { } *)getCVPixelBuffer;
- (struct __CVBuffer { } *)makeSnapshot;
- (BOOL)copyPixelsTo:(void *)a0 rowBytes:(unsigned long long)a1;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
