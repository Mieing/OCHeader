@class MTLTextureDescriptor, MTLRenderPassDescriptor;
@protocol MTLDevice, MTLLibrary, MTLTexture, MTLRenderPipelineState, MTLBuffer;

@interface TAVVideoSharpenMetal : NSObject {
    id<MTLDevice> _metalDevice;
    id<MTLLibrary> mShadersLibrary;
    id<MTLRenderPipelineState> mBlurPipeline;
    id<MTLRenderPipelineState> mExtractResiduePipeline;
    id<MTLRenderPipelineState> mUSM3FusionPipeline;
    MTLRenderPassDescriptor *mBlurPass1;
    MTLRenderPassDescriptor *mUSM3FusionPass;
    MTLTextureDescriptor *mTextureDescriptor;
    id<MTLTexture> mBlurTexture1;
    id<MTLTexture> mUSM3FusionTexture;
    id<MTLBuffer> mvertexBuffer;
    int mWidth;
    int mHeight;
    int mSharpenMode;
}

- (id)init:(int)a0 device:(id)a1;
- (void)dealloc;
- (void)setuptextures:(int)a0 height:(int)a1;
- (id)process:(id)a0 commandbuf:(id)a1 width:(int)a2 height:(int)a3 mode:(int)a4;
- (void).cxx_destruct;

@end
