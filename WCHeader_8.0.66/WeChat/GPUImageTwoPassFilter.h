@class GLProgram, GPUImageFramebuffer, NSMutableDictionary;

@interface GPUImageTwoPassFilter : GPUImageFilter {
    GPUImageFramebuffer *secondOutputFramebuffer;
    GLProgram *secondFilterProgram;
    int secondFilterPositionAttribute;
    int secondFilterTextureCoordinateAttribute;
    int secondFilterInputTextureUniform;
    int secondFilterInputTextureUniform2;
    NSMutableDictionary *secondProgramUniformStateRestorationBlocks;
}

- (id)initWithFirstStageVertexShaderFromString:(id)a0 firstStageFragmentShaderFromString:(id)a1 secondStageVertexShaderFromString:(id)a2 secondStageFragmentShaderFromString:(id)a3;
- (id)initWithFirstStageFragmentShaderFromString:(id)a0 secondStageFragmentShaderFromString:(id)a1;
- (void)initializeSecondaryAttributes;
- (id)framebufferForOutput;
- (void)removeOutputFramebuffer;
- (void)renderToTextureWithVertices:(const float *)a0 textureCoordinates:(const float *)a1;
- (int)generateFrameBuffer:(BOOL)a0 newSize:(struct CGSize { double x0; double x1; })a1;
- (void)destroyFrameBuffer;
- (void)setAndExecuteUniformStateCallbackAtIndex:(int)a0 forProgram:(id)a1 toBlock:(id /* block */)a2;
- (void)setUniformsForProgramAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;

@end
