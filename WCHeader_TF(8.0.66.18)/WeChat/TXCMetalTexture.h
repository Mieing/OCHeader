@protocol MTLTexture;

@interface TXCMetalTexture : NSObject

@property (readonly, nonatomic) id<MTLTexture> texture;
@property (readonly, nonatomic) struct __CVBuffer { } *pixelBuffer;

- (id)initWithTexture:(id)a0 pixelBuffer:(struct __CVBuffer { } *)a1;
- (void)dealloc;
- (void).cxx_destruct;

@end
