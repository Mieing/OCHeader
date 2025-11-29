@interface HTSGLPassthroughFilter : HTSGLFilter

- (void)informTargetsAboutNewFrameAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)setInputFramebufferForTarget:(id)a0 atIndex:(long long)a1;
- (void)forceProcessingAtSize:(struct CGSize { double x0; double x1; })a0;
- (void)forceProcessingAtSizeRespectingAspectRatio:(struct CGSize { double x0; double x1; })a0;
- (void)setInputRotation:(unsigned long long)a0 atIndex:(long long)a1;
- (void)setInputFramebuffer:(id)a0 atIndex:(long long)a1;
- (void)newFrameReadyAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 atIndex:(long long)a1 exceptionBlock:(id /* block */)a2;

@end
