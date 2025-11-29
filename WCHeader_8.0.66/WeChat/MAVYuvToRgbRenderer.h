@class MAVMetalContext;
@protocol MTLCommandQueue, MTLDevice;

@interface MAVYuvToRgbRenderer : NSObject

@property (retain, nonatomic) MAVMetalContext *context;
@property (retain, nonatomic) id<MTLDevice> device;
@property (retain, nonatomic) id<MTLCommandQueue> commandQueue;
@property (nonatomic) struct __CVMetalTextureCache { } *textureCache;

- (id)initWithContext:(id)a0 CommandQueue:(id)a1;
- (void)fromPixelBuffer:(struct __CVBuffer { } *)a0 toTexture:(id)a1;
- (struct __CVBuffer { } *)acquireTextureFromBuffer:(struct __CVBuffer { } *)a0 isLuma:(BOOL)a1;
- (void).cxx_destruct;

@end
