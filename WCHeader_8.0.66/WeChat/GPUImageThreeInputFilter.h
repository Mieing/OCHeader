@class GPUImageFramebuffer;

@interface GPUImageThreeInputFilter : GPUImageTwoInputFilter {
    GPUImageFramebuffer *thirdInputFramebuffer;
    int filterThirdTextureCoordinateAttribute;
    int filterInputTextureUniform3;
    unsigned long long inputRotation3;
    unsigned int filterSourceTexture3;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } thirdFrameTime;
    BOOL hasSetSecondTexture;
    BOOL hasReceivedThirdFrame;
    BOOL thirdFrameWasVideo;
    BOOL thirdFrameCheckDisabled;
}

- (id)initWithFragmentShaderFromString:(id)a0;
- (id)initWithVertexShaderFromString:(id)a0 fragmentShaderFromString:(id)a1;
- (void)initializeAttributes;
- (void)disableThirdFrameCheck;
- (void)renderToTextureWithVertices:(const float *)a0 textureCoordinates:(const float *)a1;
- (long long)nextAvailableTextureIndex;
- (void)setInputFramebuffer:(id)a0 atIndex:(long long)a1;
- (void)setInputSize:(struct CGSize { double x0; double x1; })a0 atIndex:(long long)a1;
- (int)generateFrameBuffer:(BOOL)a0 newSize:(struct CGSize { double x0; double x1; })a1;
- (void)destroyFrameBuffer;
- (void)setInputRotation:(unsigned long long)a0 atIndex:(long long)a1;
- (struct CGSize { double x0; double x1; })rotatedSize:(struct CGSize { double x0; double x1; })a0 forIndex:(long long)a1;
- (void)newFrameReadyAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 atIndex:(long long)a1;
- (void).cxx_destruct;

@end
