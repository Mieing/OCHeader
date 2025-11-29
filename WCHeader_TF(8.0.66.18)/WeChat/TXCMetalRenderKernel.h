@class TXCMetalContext;
@protocol MTLDevice, MTLRenderPipelineState;

@interface TXCMetalRenderKernel : NSObject {
    TXCMetalContext *_context;
    id<MTLRenderPipelineState> _renderPipelineState;
}

@property (readonly, nonatomic) id<MTLDevice> device;

+ (id)kernelWithSource:(id)a0 context:(id)a1 vertexFunction:(id)a2 fragmentFunction:(id)a3;
+ (id)kernelWithSource:(id)a0 pixelFormat:(unsigned long long)a1 context:(id)a2 vertexFunction:(id)a3 fragmentFunction:(id)a4;

- (id)initWithContext:(id)a0 renderPipelineState:(id)a1;
- (id)renderTextures:(id)a0 toTarget:(id)a1 parameters:(id)a2 coordinate:(id)a3;
- (void).cxx_destruct;

@end
