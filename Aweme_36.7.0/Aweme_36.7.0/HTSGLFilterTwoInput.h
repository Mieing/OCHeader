@class HTSGLFramebuffer;

@interface HTSGLFilterTwoInput : HTSGLFilter {
    HTSGLFramebuffer *_secondInputFramebuffer;
    unsigned long long _inputRotation2;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _firstFrameTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _secondFrameTime;
    BOOL _hasSetFirstTexture;
    BOOL _hasReceivedFirstFrame;
    BOOL _hasReceivedSecondFrame;
    BOOL _firstFrameWasVideo;
    BOOL _secondFrameWasVideo;
    BOOL _firstFrameCheckDisabled;
    BOOL _secondFrameCheckDisabled;
}

@property (nonatomic) BOOL isCustomSecond;
@property (retain, nonatomic) HTSGLFramebuffer *blendFramebuffer;

- (long long)nextAvailableTextureIndex;
- (void)renderToTextureWithVertices:(const float *)a0 textureCoordinates:(const float *)a1;
- (struct CGSize { double x0; double x1; })rotatedSize:(struct CGSize { double x0; double x1; })a0 forIndex:(long long)a1;
- (void)setInputRotation:(unsigned long long)a0 atIndex:(long long)a1;
- (void)setInputFramebuffer:(id)a0 atIndex:(long long)a1;
- (void)setInputSize:(struct CGSize { double x0; double x1; })a0 atIndex:(long long)a1;
- (void)initializeRenderer:(id)a0;
- (void)newFrameReadyAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 atIndex:(long long)a1 exceptionBlock:(id /* block */)a2;
- (void)setBlendSecond:(id)a0;
- (void)disableFirstFrameCheck;
- (void)disableSecondFrameCheck;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)initializeAttributes;

@end
