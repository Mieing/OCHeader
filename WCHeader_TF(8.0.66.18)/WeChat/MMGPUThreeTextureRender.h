@interface MMGPUThreeTextureRender : MMGPUTwoTextureRender {
    int filterThirdTextureCoordinateAttribute;
    int filterInputTextureUniform3;
}

- (id)initWithFragmentShaderFromString:(id)a0;
- (id)initWithVertexShaderFromString:(id)a0 fragmentShaderString:(id)a1;
- (void)initializeAttributes;
- (int)renderToTextue:(int)a0 inputSecondTexture:(int)a1 inputThirdTexture:(int)a2 inputRes:(struct CGSize { double x0; double x1; })a3;

@end
