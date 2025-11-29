@class MTLTextureDescriptor, MTLRenderPassDescriptor;
@protocol MTLDevice, MTLLibrary, MTLTexture, MTLBuffer, MTLRenderPipelineState;

@interface VideoColorLUTMetal : NSObject {
    id<MTLDevice> _metalDevice;
    id<MTLLibrary> _shadersLibrary;
    unsigned long long _width;
    unsigned long long _height;
    id<MTLBuffer> _vertexBuffer;
    MTLRenderPassDescriptor *mSourcePassDescriptor;
    MTLTextureDescriptor *_sourceTextureDescriptor;
    id<MTLTexture> _sourceTexture;
    MTLRenderPassDescriptor *_drawablePassDescriptor;
    id<MTLRenderPipelineState> _drawablePipelineState;
    id<MTLTexture> _lutTexture;
    int _frameNum;
}

- (id)manualLoadTextureFromImagePath:(id)a0 device:(id)a1;
- (id)MTKLoadTextureFromImagePath:(id)a0 device:(id)a1;
- (id)initWithDevice:(id)a0 lutFilePath:(id)a1;
- (void)dealloc;
- (id)getTexture;
- (void)setupTexturesWithWidth:(unsigned long long)a0 height:(unsigned long long)a1;
- (void)uploadTexturesToCommandEncoder:(id)a0;
- (void).cxx_destruct;

@end
