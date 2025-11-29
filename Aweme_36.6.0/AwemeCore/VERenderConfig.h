@class HTSGLFramebuffer;

@interface VERenderConfig : NSObject

@property (weak, nonatomic) HTSGLFramebuffer *outputFramebuffer;
@property (nonatomic) void *onScreenRLRenderInfo;
@property (nonatomic) BOOL shouldClear;
@property (nonatomic) BOOL waitFinish;
@property (nonatomic) struct CGSize { double width; double height; } inputSize;
@property (nonatomic) struct CGSize { double width; double height; } outputSize;
@property (nonatomic) long long texWrap;
@property (nonatomic) struct __CVBuffer { } *outputYCbCrPixbuffer;

- (BOOL)renderToScreen;
- (id)initWithFBO:(id)a0;
- (void *)rlRenderingInfo:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
