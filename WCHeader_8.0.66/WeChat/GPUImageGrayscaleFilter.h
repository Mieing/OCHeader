@interface GPUImageGrayscaleFilter : GPUImageFilter

- (void)renderToTextureWithVertices:(const float *)a0 textureCoordinates:(const float *)a1;
- (BOOL)wantsMonochromeInput;
- (BOOL)providesMonochromeOutput;
- (id)init;

@end
