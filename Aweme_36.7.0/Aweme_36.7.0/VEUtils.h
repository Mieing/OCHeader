@interface VEUtils : NSObject

+ (void)setPageMode:(int)a0;
+ (id)convertRecordSpeedToStringFromFloat:(double)a0;
+ (unsigned long long)systemCurrentTime;
+ (id)captureResolutionWithSessionPreset:(id)a0;
+ (int)webpEncode:(id)a0 destpath:(id)a1 quality:(double)a2 preset:(int)a3 para:(int)a4 onEncodeCallback:(id /* block */)a5;
+ (id)MD5WithNSString:(id)a0;
+ (void)setFrameCacheDiskDir:(id)a0;
+ (void)clearCacheDiskDir:(BOOL)a0;
+ (int)webpEncode:(id)a0 destpath:(id)a1 quality:(double)a2 preset:(int)a3 para:(int)a4;
+ (id)heicEncode:(id)a0 quality:(double)a1;
+ (id)resizeImageWithEffect:(id)a0 scale:(double)a1 error:(id *)a2;
+ (id)sharedInstance;

- (BOOL)isViewInvalid:(id)a0;
- (id)init;

@end
