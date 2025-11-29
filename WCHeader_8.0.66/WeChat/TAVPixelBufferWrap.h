@interface TAVPixelBufferWrap : NSObject

@property (nonatomic) struct __CVBuffer { } *pixelBuf;

+ (id)wrapWithPixelBuf:(struct __CVBuffer { } *)a0;

- (id)initWithPixelBuf:(struct __CVBuffer { } *)a0;
- (void)dealloc;

@end
