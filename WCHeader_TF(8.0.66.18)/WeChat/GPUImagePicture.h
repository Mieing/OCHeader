@class NSObject;
@protocol OS_dispatch_semaphore;

@interface GPUImagePicture : GPUImageOutput {
    struct CGSize { double width; double height; } pixelSizeOfImage;
    BOOL hasProcessedImage;
    NSObject<OS_dispatch_semaphore> *imageUpdateSemaphore;
}

- (id)initWithURL:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithImage:(id)a0;
- (id)initWithCGImage:(struct CGImage { } *)a0;
- (id)initWithImage:(id)a0 smoothlyScaleOutput:(BOOL)a1;
- (id)initWithCGImage:(struct CGImage { } *)a0 smoothlyScaleOutput:(BOOL)a1;
- (id)initWithImage:(id)a0 removePremultiplication:(BOOL)a1;
- (id)initWithCGImage:(struct CGImage { } *)a0 removePremultiplication:(BOOL)a1;
- (id)initWithImage:(id)a0 smoothlyScaleOutput:(BOOL)a1 removePremultiplication:(BOOL)a2;
- (id)initWithCGImage:(struct CGImage { } *)a0 smoothlyScaleOutput:(BOOL)a1 removePremultiplication:(BOOL)a2;
- (void)dealloc;
- (void)removeAllTargets;
- (void)processImage;
- (BOOL)processImageWithCompletionHandler:(id /* block */)a0;
- (void)processImageUpToFilter:(id)a0 withCompletionHandler:(id /* block */)a1;
- (struct CGSize { double x0; double x1; })outputImageSize;
- (void)addTarget:(id)a0 atTextureLocation:(long long)a1;
- (void).cxx_destruct;

@end
