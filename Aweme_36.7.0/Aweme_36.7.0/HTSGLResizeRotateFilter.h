@interface HTSGLResizeRotateFilter : HTSGLFilter

@property (nonatomic) struct CGSize { double width; double height; } targetSize;
@property (nonatomic) struct CGSize { double width; double height; } inputSize;
@property (nonatomic) struct CGSize { double x0; double x1; } renderSize;
@property (nonatomic) unsigned long long outputRotation;
@property (nonatomic) BOOL onlyRotated;
@property (nonatomic) BOOL resourceRotationMode;

- (void)renderToTextureWithVertices:(const float *)a0 textureCoordinates:(const float *)a1;
- (void)forceProcessingAtSize:(struct CGSize { double x0; double x1; })a0;
- (void)forceProcessingAtSizeRespectingAspectRatio:(struct CGSize { double x0; double x1; })a0;
- (void)setInputSize:(struct CGSize { double x0; double x1; })a0 atIndex:(long long)a1;
- (id)initWithContext:(id)a0;

@end
