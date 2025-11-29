@interface HTSGLAspectScaleFilter : HTSGLFilter

@property (nonatomic) struct CGSize { double width; double height; } targetSize;
@property (nonatomic) struct CGSize { double width; double height; } inputSize;
@property (nonatomic) long long mode;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transformBeforeAspectScale;
@property (nonatomic) struct CGSize { double width; double height; } fitInAspectRatio;
@property (nonatomic) struct CGSize { double x0; double x1; } renderSize;

- (void)renderToTextureWithVertices:(const float *)a0 textureCoordinates:(const float *)a1;
- (void)forceProcessingAtSize:(struct CGSize { double x0; double x1; })a0;
- (void)forceProcessingAtSizeRespectingAspectRatio:(struct CGSize { double x0; double x1; })a0;
- (void)setInputSize:(struct CGSize { double x0; double x1; })a0 atIndex:(long long)a1;
- (void)newFrameReadyAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 atIndex:(long long)a1 exceptionBlock:(id /* block */)a2;
- (id)initWithContext:(id)a0;

@end
