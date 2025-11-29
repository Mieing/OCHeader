@interface VEGLMirrorFilter : HTSGLFilter

@property (copy, nonatomic) id /* block */ filterConfig;

- (void)newFrameReadyAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 atIndex:(long long)a1 exceptionBlock:(id /* block */)a2;
- (void)filpConfig:(id /* block */)a0;
- (void).cxx_destruct;

@end
