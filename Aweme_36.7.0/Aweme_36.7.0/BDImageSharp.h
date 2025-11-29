@interface BDImageSharp : NSObject

+ (id)sharpImageWithImage:(id)a0 sharpConfig:(id)a1 error:(id *)a2;
+ (id)sharpImageWithImage:(id)a0 sharpConfig:(id)a1 cacheCanvas:(BOOL)a2 error:(id *)a3;
+ (void)registerMemoryWarningIfNeed;
+ (struct CGImage { } *)createSharpImageFromImage:(struct CGImage { } *)a0 sharpConfig:(id)a1 cacheCanvas:(BOOL)a2 error:(id *)a3;
+ (id)CGImageToMTLTexture:(struct CGImage { } *)a0 pixelFormat:(unsigned long long *)a1 bitmapInfo:(unsigned int *)a2;
+ (id)texture:(id)a0 performSharpWithSharpConfig:(id)a1 cacheCanvas:(BOOL)a2 error:(id *)a3;
+ (struct CGImage { } *)createCGImageFromMTLTexture:(id)a0 pixelFormat:(unsigned long long)a1 originalColorSpace:(struct CGColorSpace { } *)a2 originalBitmapInfo:(unsigned int)a3;
+ (struct CGImage { } *)createCGImageFromRedrawRGBA:(struct CGImage { } *)a0 bitmapInfo:(unsigned int *)a1;
+ (id)requestBMFSharpProcessWithSharpConfig:(id)a0 error:(id *)a1;
+ (id)forceCreateBMFSharpProcessWithSharpConfig:(id)a0 error:(id *)a1;
+ (id)sharp:(id)a0 processImage:(id)a1 sharpConfig:(id)a2 error:(id *)a3;
+ (void)internal_removeSharpCache_noLock;
+ (void)removeSharpCache_sync;
+ (void)removeSharpCache_async;
+ (id)sharpImageWithImage:(id)a0 error:(id *)a1;
+ (void)didReceiveMemoryWarning:(id)a0;

@end
