@interface IESMMScaleAlphaBlendFilter : HTSGLFilterTwoInput

@property (nonatomic) double mix;

- (void)renderToTextureWithVertices:(const float *)a0 textureCoordinates:(const float *)a1;
- (void)initializeRenderer:(id)a0;
- (id)initWithContext:(id)a0;

@end
