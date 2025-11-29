@class HTSGLFramebuffer;

@interface IESMMImageCanvasFilter : IESMMCanvasBaseFilter

@property (retain, nonatomic) HTSGLFramebuffer *hdrBgImageFramebuffer;
@property (nonatomic) BOOL enableHdrEffectOptimization;

- (void)renderToTextureWithVertices:(const float *)a0 textureCoordinates:(const float *)a1;
- (void)initializeRenderer:(id)a0;
- (void)drawCanvas:(BOOL)a0;
- (void)drawWithoutEffectRenderer;
- (void).cxx_destruct;

@end
