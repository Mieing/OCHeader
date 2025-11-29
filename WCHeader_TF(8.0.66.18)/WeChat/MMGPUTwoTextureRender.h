@interface MMGPUTwoTextureRender : MMGPUOneTextureRender {
    int filterSecondTextureCoordinateAttribute;
    int filterInputTextureUniform2;
}

- (id)initWithFragmentShaderFromString:(id)a0;
- (id)initWithVertexShaderFromString:(id)a0 fragmentShaderString:(id)a1;
- (void)initializeAttributes;
- (int)renderToTextue:(int)a0 inputSecondTexture:(int)a1 inputRes:(struct CGSize { double x0; double x1; })a2;

@end
