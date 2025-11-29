@interface AWECardOCRUtil : NSObject

+ (id)compressImage:(id)a0 toTargetSize:(long long)a1 minQuality:(double)a2 minScale:(double)a3;
+ (void)compressWithImage:(id)a0 size:(double)a1 completionBlock:(id /* block */)a2;
+ (id)cutCenterImage:(id)a0 widthScale:(double)a1 heightScale:(double)a2;
+ (id)imageFromSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;

@end
