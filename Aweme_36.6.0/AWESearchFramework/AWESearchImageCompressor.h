@class AWESearchImageCompressorConfig;

@interface AWESearchImageCompressor : NSObject

@property (retain, nonatomic) AWESearchImageCompressorConfig *config;

+ (id)resizeImage:(id)a0 toSize:(struct CGSize { double x0; double x1; })a1;
+ (id)impResizeImage:(id)a0 toSize:(struct CGSize { double x0; double x1; })a1;
+ (id)sharedInstance;

- (void)impResizeAndCompressImage;
- (id)impResizeImage:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1;
- (id)impCompressImage:(id)a0 maxDataSize:(float)a1;
- (void)trackSearchImageCompressWithResult:(id)a0;
- (void)resizeAndCompressImageWithConfig:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
