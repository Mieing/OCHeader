@interface MobileOCRImage : NSObject

@property (nonatomic) char *data;
@property (nonatomic) int width;
@property (nonatomic) int height;

+ (id)imageWithUIImage:(id)a0;
+ (id)imageWithCMSampleBufferRef:(struct opaqueCMSampleBuffer { } *)a0 reuseImage:(id)a1;
+ (id)getRGBBytesFromPixelBuffer:(struct __CVBuffer { } *)a0 reuseImage:(id)a1;
+ (struct __CVBuffer { } *)rotateBuffer:(struct __CVBuffer { } *)a0 withConstant:(unsigned char)a1;
+ (id)imageWithCMSampleBufferRefRGB:(struct opaqueCMSampleBuffer { } *)a0 reuseImage:(id)a1 direction:(long long)a2;

- (id)init;
- (void)dealloc;
- (long long)pixelFormatOfUIImage:(id)a0;
- (id)createUIImage;

@end
