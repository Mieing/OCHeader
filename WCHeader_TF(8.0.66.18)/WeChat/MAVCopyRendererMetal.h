@class MAVMetalContext, MTLRenderPassDescriptor, MTLRenderPipelineDescriptor;
@protocol MTLDevice, MTLRenderCommandEncoder, MTLTexture, MTLCommandQueue, MTLRenderPipelineState;

@interface MAVCopyRendererMetal : NSObject {
    MTLRenderPassDescriptor *_renderToTextureRenderPassDescriptor;
}

@property (retain, nonatomic) MAVMetalContext *context;
@property (retain, nonatomic) id<MTLDevice> device;
@property (retain, nonatomic) id<MTLCommandQueue> commandQueue;
@property (retain, nonatomic) id<MTLRenderCommandEncoder> encoder;
@property (retain, nonatomic) MTLRenderPipelineDescriptor *pipelineStateDescriptor;
@property (retain, nonatomic) id<MTLRenderPipelineState> renderToTextureRenderPipeline;
@property (retain, nonatomic) id<MTLTexture> inputTexture;
@property (nonatomic) float inputRatio;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } inputMatrix;

- (id)initWithContext:(id)a0 CommandQueue:(id)a1;
- (void)fromTexture:(id)a0;
- (void)fromTexture:(id)a0 Rotate:(long long)a1;
- (void)toTexture:(id)a0;
- (void)toScreen:(id)a0;
- (void).cxx_destruct;

@end
