@class VEFilterFrameExtractor;

@interface VEFrameExtractFilter : HTSGLFilter

@property (retain, nonatomic) VEFilterFrameExtractor *frameExtrator;

- (void)informTargetsAboutNewFrameAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)setInputFramebufferForTarget:(id)a0 atIndex:(long long)a1;
- (void)setInputFramebuffer:(id)a0 atIndex:(long long)a1;
- (void)newFrameReadyAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 atIndex:(long long)a1 exceptionBlock:(id /* block */)a2;
- (void)addFrameExtractDriver:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
