@class TransformTextureVertices;

@interface HTSTransformFilter : HTSGLFilter {
    float _textureVertices[8];
}

@property (retain, nonatomic) TransformTextureVertices *verticesParams;
@property (nonatomic) struct CGSize { double width; double height; } canvasSize;
@property (nonatomic) unsigned long long clapRotation;

- (void)setInputSize:(struct CGSize { double x0; double x1; })a0 atIndex:(long long)a1;
- (void)newFrameReadyAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 atIndex:(long long)a1 exceptionBlock:(id /* block */)a2;
- (void)setupTextureVertices:(id)a0;
- (void)updateTextureVertices:(id)a0;
- (id)initWithTextureVertices:(id)a0 canvasSize:(struct CGSize { double x0; double x1; })a1 context:(id)a2;
- (void).cxx_destruct;

@end
