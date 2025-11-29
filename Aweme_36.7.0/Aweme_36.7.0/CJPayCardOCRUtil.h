@interface CJPayCardOCRUtil : NSObject

+ (void)compressWithImage:(id)a0 size:(double)a1 completionBlock:(id /* block */)a2;
+ (void)approximateCompressWithImage:(id)a0 targetKB:(double)a1 completionBlock:(id /* block */)a2;
+ (void)compressWithImageV2:(id)a0 size:(double)a1 completionBlock:(id /* block */)a2;
+ (id)compressSizeWithImage:(id)a0 size:(double)a1 minScale:(double)a2;
+ (id)compressQualityWithImage:(id)a0 size:(double)a1 minQuality:(double)a2;
+ (id)resizeScaleImage:(id)a0 scale:(double)a1 size:(double)a2;
+ (id)approximateResizeImage:(id)a0 toTargetKB:(double)a1;
+ (id)preciseResizeImage:(id)a0 toBelowTargetKB:(double)a1 minScale:(double)a2;
+ (void)preciseCompressWithImage:(id)a0 targetKB:(double)a1 completionBlock:(id /* block */)a2;

@end
