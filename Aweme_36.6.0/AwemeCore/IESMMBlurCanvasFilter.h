@class HTSGLFilterGaussianBlur;

@interface IESMMBlurCanvasFilter : IESMMCanvasBaseFilter

@property (retain, nonatomic) HTSGLFilterGaussianBlur *blurFilter;
@property (nonatomic) BOOL isSkipCanvas;

- (void)renderToTextureWithVertices:(const float *)a0 textureCoordinates:(const float *)a1;
- (void)setupFilterForSize:(struct CGSize { double x0; double x1; })a0;
- (void)setInputRotation:(unsigned long long)a0 atIndex:(long long)a1;
- (void)setInputFramebuffer:(id)a0 atIndex:(long long)a1;
- (void)setInputSize:(struct CGSize { double x0; double x1; })a0 atIndex:(long long)a1;
- (void)initializeRenderer:(id)a0;
- (id)initWithConfig:(id)a0 observable:(id /* block */)a1 canvasSize:(struct CGSize { double x0; double x1; })a2 context:(id)a3;
- (void)renderBlurToTexture:(const float *)a0 textureCoordinates:(const float *)a1;
- (void)setCanvasRender;
- (void)updateBlurRadiusInPixels:(double)a0;
- (void)drawCanvas:(BOOL)a0;
- (void)drawWithoutEffectRenderer;
- (void).cxx_destruct;

@end
