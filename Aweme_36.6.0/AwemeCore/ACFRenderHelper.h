@class NSCache, MTKTextureLoader, NSObject, CIContext;
@protocol MTLCommandQueue, MTLDevice, OS_dispatch_queue;

@interface ACFRenderHelper : NSObject

@property (retain, nonatomic) id<MTLDevice> metalDevice;
@property (retain, nonatomic) id<MTLCommandQueue> commandQueue;
@property (retain, nonatomic) MTKTextureLoader *textureLoader;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *isolationQueue;
@property (retain, nonatomic) CIContext *ciContext;
@property (retain, nonatomic) NSCache *blurCache;
@property (retain, nonatomic) NSCache *clampCache;

+ (id)sharedInstance;

- (id)ciContext_applyGaussianBlurWithImage:(id)a0 sigma:(float)a1 targetSize:(struct CGSize { double x0; double x1; })a2;
- (void)cacheBlurImage:(id)a0 forCacheKey:(id)a1;
- (id)fetchCachedBlurImageForCacheKey:(id)a0;
- (id)textureWithUIImage:(id)a0;
- (id)cgImageBackedImageWithTexture:(id)a0;
- (id)mps_applyGaussianBlurWithImage:(id)a0 sigma:(float)a1;
- (id)imageWithTexture:(id)a0;
- (id)applyGaussianBlurWithImage:(id)a0 sigma:(float)a1;
- (id)ciContext_applyGaussianBlurWithImage:(id)a0 sigma:(float)a1;
- (id)ciContext_applyClampWithImage:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1;
- (id)fetchCachedClampImageForCacheKey:(id)a0;
- (void)cacheClampImage:(id)a0 forCacheKey:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
