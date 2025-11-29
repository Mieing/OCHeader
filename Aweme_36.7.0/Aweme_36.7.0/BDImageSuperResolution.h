@interface BDImageSuperResolution : NSObject

@property (class, nonatomic) double minLevel;
@property (class, nonatomic) double maxLevel;
@property (class, nonatomic) unsigned long long maxConcurrentCount;
@property (class, nonatomic) unsigned long long concurrencyExceededStrategy;
@property (class, nonatomic) unsigned long long maxCacheCount;

+ (void)registerMemoryWarningIfNeed;
+ (id)CGImageToMTLTexture:(struct CGImage { } *)a0 pixelFormat:(unsigned long long *)a1 bitmapInfo:(unsigned int *)a2;
+ (struct CGImage { } *)createCGImageFromMTLTexture:(id)a0 pixelFormat:(unsigned long long)a1 originalColorSpace:(struct CGColorSpace { } *)a2 originalBitmapInfo:(unsigned int)a3;
+ (struct CGImage { } *)createCGImageFromRedrawRGBA:(struct CGImage { } *)a0 bitmapInfo:(unsigned int *)a1;
+ (void)removeSuperResolutionCache_sync;
+ (void)removeSuperResolutionCache_async;
+ (id)superResolutionImageWithImage:(id)a0 level:(double)a1 error:(id *)a2;
+ (id)superResolutionImageWithImage:(id)a0 level:(double)a1 cacheCanvas:(BOOL)a2 error:(id *)a3;
+ (int)scaleModeForSRLevel:(double)a0;
+ (struct CGImage { } *)createSuperResolutionImageFromImage:(struct CGImage { } *)a0 scaleMode:(int)a1 cacheCanvas:(BOOL)a2 error:(id *)a3;
+ (id)texture:(id)a0 performSuperResolutionWithScaleMode:(int)a1 cacheCanvas:(BOOL)a2 error:(id *)a3;
+ (id)BMFSRProcessWithImageSize:(struct CGSize { double x0; double x1; })a0 scaleMode:(int)a1 cacheCanvas:(BOOL)a2 error:(id *)a3;
+ (id)superResolution:(id)a0 processImage:(id)a1 withScaleMode:(int)a2 error:(id *)a3;
+ (BOOL)isSmallSrScaleMode:(int)a0;
+ (float)scaleRatioWithScaleMode:(int)a0;
+ (int)bmfSrAlgorithmTypeForScaleMode:(int)a0;
+ (id)requestBMFSRProcessWithImageSize:(struct CGSize { double x0; double x1; })a0 scaleMode:(int)a1 error:(id *)a2;
+ (id)forceCreateBMFSRProcessWithImageSize:(struct CGSize { double x0; double x1; })a0 scaleMode:(int)a1 error:(id *)a2;
+ (void)internal_removeSuperResolutionCache_noLock;
+ (id)superResolutionImageWithImage:(id)a0 error:(id *)a1;
+ (void)removeSuperResolutionCacheWhenChangingSRAlgorithm;
+ (void)didReceiveMemoryWarning:(id)a0;

@end
