@interface IESNonOverlapTransitionFilter : IESBaseTransitionFilter {
    BOOL _hasSetFirstTexture;
}

- (long long)nextAvailableTextureIndex;
- (void)renderToTextureWithVertices:(const float *)a0 textureCoordinates:(const float *)a1;
- (struct CGSize { double x0; double x1; })rotatedSize:(struct CGSize { double x0; double x1; })a0 forIndex:(long long)a1;
- (void)setInputRotation:(unsigned long long)a0 atIndex:(long long)a1;
- (void)setInputFramebuffer:(id)a0 atIndex:(long long)a1;
- (void)setInputSize:(struct CGSize { double x0; double x1; })a0 atIndex:(long long)a1;
- (void)newFrameReadyAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 atIndex:(long long)a1 exceptionBlock:(id /* block */)a2;
- (id)initWithRenderer:(id)a0 context:(id)a1;
- (void)setProgress:(float)a0;

@end
