@class IESSCMetalLibrary, IESSCMetalPipeline, IESSCMetalTextureCache;
@protocol MTLCommandQueue, MTLDevice;

@interface IESSCMetalRenderingDevice : NSObject

@property (retain, nonatomic) id<MTLDevice> device;
@property (retain, nonatomic) id<MTLCommandQueue> commandQueue;
@property (retain, nonatomic) IESSCMetalLibrary *library;
@property (retain, nonatomic) IESSCMetalPipeline *pipeline;
@property (retain, nonatomic) IESSCMetalTextureCache *textureCache;

+ (id)shared;

- (void)renderWithParams:(id)a0;
- (void)updateDevice:(id)a0;
- (void)configureRenderEncoderWithCommandBuffer:(id)a0 params:(id)a1;
- (void)submitCommandBufferWithRenderOptions:(id)a0 encoderGeneratorBlock:(id /* block */)a1;
- (void)renderWithMPSImageKernalParams:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)copyTexture:(id)a0 toTexture:(id)a1;

@end
