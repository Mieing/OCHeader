@interface HTSGLCropFilter : HTSGLFilter {
    struct CGSize { double width; double height; } _originallySuppliedInputSize;
    double _rotateAngle;
    BOOL _flipX;
    BOOL _flipY;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRegion;
@property (nonatomic) BOOL passMemOpt;

- (void)renderToTextureWithVertices:(const float *)a0 textureCoordinates:(const float *)a1;
- (void)setInputRotation:(unsigned long long)a0 atIndex:(long long)a1;
- (void)setInputSize:(struct CGSize { double x0; double x1; })a0 atIndex:(long long)a1;
- (void)initializeRenderer:(id)a0;
- (void)newFrameReadyAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 atIndex:(long long)a1 exceptionBlock:(id /* block */)a2;
- (id)initWithCropRegion:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(id)a1;
- (void)updatePipeline:(long long)a0;
- (void)setFillMode:(long long)a0;
- (id)initWithContext:(id)a0;

@end
