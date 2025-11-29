@interface TAVFrame : NSObject

@property (nonatomic) struct __CVBuffer { } *pixelBuffer;

- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0;
- (void)dealloc;
- (struct __CVBuffer { } *)copyPixelBuffer;

@end
