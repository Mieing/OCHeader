@class IESLiveEffectProcessorInterface, LSGLFramebuffer;

@interface IESGLEffectFilter : IESGLFilter {
    BOOL _needRender;
    BOOL _enableMipmap;
    struct LSGPUTextureOptions { unsigned int minFilter; unsigned int magFilter; unsigned int wrapS; unsigned int wrapT; unsigned int internalFormat; unsigned int format; unsigned int type; unsigned int bind; } _outputTextureOptionsMipmap;
    LSGLFramebuffer *lastEffectProcessdFrame;
}

@property (nonatomic) BOOL isAux;
@property (nonatomic) struct CGSize { double width; double height; } lastEffectFrameSize;
@property (nonatomic) int forceDetectCount;
@property (nonatomic) BOOL forceDetectInFirstThreeFrames;
@property (retain, nonatomic) IESLiveEffectProcessorInterface *processor;
@property (nonatomic) BOOL enableEffect;
@property (copy, nonatomic) id /* block */ effectInfoBlck;

- (void)informTargetsAboutNewFrameAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)endProcessing;
- (void)handleFullLinkEnableDumpNotifications:(id)a0;
- (void)setInputFramebuffer:(id)a0 atIndex:(long long)a1;
- (void)needRender:(BOOL)a0;
- (void)newFrameReadyAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 atIndex:(long long)a1;
- (id)getOutputFrameBuffer;
- (BOOL)checkEnableMipmap;
- (id)fetchOutputFrameBuffer;
- (void)generateMipmap:(int)a0;
- (void)releaseFBO;
- (void)skipFrameProcess;
- (void)initialProcessorWithConfig:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)name;
- (void)dealloc;
- (void)startProcessing;

@end
