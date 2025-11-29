@interface PAGImageImpl : NSObject

@property (nonatomic) struct shared_ptr<pag::PAGImage> { struct PAGImage *__ptr_; struct __shared_weak_count *__cntrl_; } pagImage;

+ (id)FromPath:(id)a0;
+ (id)FromBytes:(const void *)a0 size:(unsigned long long)a1;
+ (id)FromPixelBuffer:(struct __CVBuffer { } *)a0;
+ (id)FromCGImage:(struct CGImage { } *)a0;

- (id)initWidthPAGImage:(struct shared_ptr<pag::PAGImage> { struct PAGImage *x0; struct __shared_weak_count *x1; })a0;
- (long long)width;
- (long long)height;
- (int)scaleMode;
- (void)setScaleMode:(int)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })matrix;
- (void)setMatrix:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
