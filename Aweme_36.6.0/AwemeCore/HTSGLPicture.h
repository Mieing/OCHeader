@class VEMVPRenderer, NSObject;
@protocol OS_dispatch_semaphore;

@interface HTSGLPicture : HTSFilterInterface {
    struct CGSize { double width; double height; } _pixelSizeOfImage;
    BOOL _hasProcessedImage;
    NSObject<OS_dispatch_semaphore> *_imageUpdateSemaphore;
}

@property (retain, nonatomic) VEMVPRenderer *pixelBufferRenderer;
@property (nonatomic) BOOL needDealloc;

- (void)removeAllTargets;
- (void)addTarget:(id)a0 atTextureLocation:(long long)a1;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0 context:(id)a1;
- (id)initWithCGImage:(struct CGImage { } *)a0 smoothlyScaleOutput:(BOOL)a1 context:(id)a2;
- (id)initWithCGImage:(struct CGImage { } *)a0 smoothlyScaleOutput:(BOOL)a1 removePremultiplication:(BOOL)a2 context:(id)a3;
- (BOOL)processImageWithCompletionHandler:(id /* block */)a0;
- (BOOL)processImageWithCompletionHandler:(id /* block */)a0 frameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (BOOL)processImageWithCompletionHandler:(id /* block */)a0 frameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 filterInChain:(id)a2;
- (void)processImageUpToFilter:(id)a0 frameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 orientation:(long long)a2 completionHandler:(id /* block */)a3;
- (void)processImageUpToFilter:(id)a0 frameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 orientation:(long long)a2 completionHandler:(id /* block */)a3 colorSpaceName:(struct __CFString { } *)a4;
- (id)initWithURL:(id)a0 context:(id)a1;
- (id)initWithCGImage:(struct CGImage { } *)a0 context:(id)a1;
- (id)initWithImage:(id)a0 removePremultiplication:(BOOL)a1 context:(id)a2;
- (id)initWithCGImage:(struct CGImage { } *)a0 removePremultiplication:(BOOL)a1 context:(id)a2;
- (id)initWithImage:(id)a0 smoothlyScaleOutput:(BOOL)a1 removePremultiplication:(BOOL)a2 context:(id)a3;
- (BOOL)isFrameBufferValid;
- (void)processImage;
- (BOOL)processImageSync;
- (void)processImageUpToFilter:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)initWithImage:(id)a0 context:(id)a1;
- (id)initWithImage:(id)a0 smoothlyScaleOutput:(BOOL)a1 context:(id)a2;
- (void)processImageUpToFilter:(id)a0 frameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 context:(id)a1;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })outputImageSize;

@end
