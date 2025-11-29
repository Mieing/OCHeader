@interface IESMMColorCanvasFilter : IESMMCanvasBaseFilter

@property (nonatomic) BOOL enableHdrEffectOptimization;

- (void)renderToTextureWithVertices:(const float *)a0 textureCoordinates:(const float *)a1;
- (void)initializeRenderer:(id)a0;
- (void)newFrameReadyAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 atIndex:(long long)a1 exceptionBlock:(id /* block */)a2;
- (void)drawCanvas:(id)a0 shouldDraw:(BOOL)a1;
- (void)drawWithoutEffectRenderer;

@end
