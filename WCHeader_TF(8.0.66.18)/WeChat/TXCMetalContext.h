@class TXCMetalRenderKernel;
@protocol MTLCommandQueue, MTLDevice, MTLCommandBuffer;

@interface TXCMetalContext : NSObject {
    unsigned int _gpuTaskCount;
}

@property (readonly, nonatomic) id<MTLDevice> device;
@property (readonly, nonatomic) id<MTLCommandQueue> commandQueue;
@property (readonly, nonatomic) id<MTLCommandBuffer> sharedCommandBuffer;
@property (readonly, nonatomic) id<MTLCommandBuffer> commandBuffer;
@property (readonly, nonatomic) struct __CVMetalTextureCache { } *metalTextureCache;
@property (readonly, nonatomic) TXCMetalRenderKernel *sharedBGRARenderKernel;
@property (readonly, nonatomic) TXCMetalRenderKernel *sharedRGBARenderKernel;

- (id)initWithCommandQueue:(id)a0;
- (void)dealloc;
- (id)newTXCMetalTexture:(struct CGSize { double x0; double x1; })a0;
- (id)newTextureWithTXImage:(id)a0;
- (id)textureFromCVPixelBuffer:(struct __CVBuffer { } *)a0;
- (BOOL)commitCommandBuffer;
- (void)notifyTaskIncrement;
- (void)flush;
- (void)finish;
- (void)waitUntilScheduled;
- (void).cxx_destruct;

@end
