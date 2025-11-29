@class MTLTextureDescriptor, MTLRenderPassDescriptor;
@protocol MTLDevice, MTLLibrary, MTLTexture, MTLBuffer, MTLRenderPipelineState;

@interface VideoLucidMetal : NSObject {
    int _lucidMode;
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
    int _frameNum;
    float _screenBrightness;
    float _screenBrightnessThreshold;
    float _screenBrightnessHeadroom;
    float _screenCurrentEDRHeadroom;
}

- (id)initWithLucidMode:(int)a0 device:(id)a1;
- (void)dealloc;
- (id)getTexture;
- (int)getMode;
- (void)setupTexturesWithWidth:(unsigned long long)a0 height:(unsigned long long)a1;
- (void)setScreenBrightness:(float)a0;
- (void)setScreenEDRHeadroom:(float)a0;
- (void)uploadTexturesToCommandEncoder:(id)a0;
- (void).cxx_destruct;

@end
