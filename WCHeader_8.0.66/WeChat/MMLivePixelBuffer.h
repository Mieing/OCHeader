@interface MMLivePixelBuffer : NSObject <NSCopying>

@property (nonatomic) struct __CVBuffer { } *pixelBuffer;

+ (id)bufferWithPixel:(struct __CVBuffer { } *)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (unsigned long long)pixelBufferWidth;
- (unsigned long long)pixelBufferHeight;

@end
