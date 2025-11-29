@class MTKTextureLoader;
@protocol MTLComputePipelineState, MTLDevice, MTLCommandBuffer, MTLLibrary, MTLTexture, MTLCommandQueue, MTLFunction;

@interface IESImgPreProcessor : NSObject {
    id<MTLTexture> _rgbaTex;
    id<MTLDevice> _device;
    id<MTLCommandQueue> _mtlQue;
    id<MTLCommandBuffer> _currentCmdBuffer;
    id<MTLLibrary> _library;
    id<MTLFunction> _kernel_copy_func;
    id<MTLComputePipelineState> _pipeline;
}

@property (retain, nonatomic) MTKTextureLoader *loader;

- (id)createTextureFromImage:(id)a0;
- (id)createImageFromTexture:(id)a0;
- (void)blitImg:(id)a0 outTex:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
