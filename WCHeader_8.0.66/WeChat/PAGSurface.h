@class PAGSurfaceImpl;

@interface PAGSurface : NSObject

@property (retain, nonatomic) PAGSurfaceImpl *surface;

+ (id)FromLayer:(id)a0;
+ (id)FromCVPixelBuffer:(struct __CVBuffer { } *)a0;
+ (id)FromCVPixelBuffer:(struct __CVBuffer { } *)a0 context:(id)a1;
+ (id)MakeFromGPU:(struct CGSize { double x0; double x1; })a0;
+ (id)MakeOffscreen:(struct CGSize { double x0; double x1; })a0;

- (id)impl;
- (void)dealloc;
- (void)updateSize;
- (int)width;
- (int)height;
- (BOOL)clearAll;
- (void)freeCache;
- (struct __CVBuffer { } *)getCVPixelBuffer;
- (struct __CVBuffer { } *)makeSnapshot;
- (BOOL)copyPixelsTo:(void *)a0 rowBytes:(unsigned long long)a1;

@end
