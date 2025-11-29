@class HTSGLFramebuffer;

@interface VEEffectMaskFilter : HTSGLFilter

@property (nonatomic) void *mattingBlendHandle;
@property (nonatomic) unsigned int maskTexture;
@property (retain, nonatomic) HTSGLFramebuffer *maskFrameBuffer;
@property (retain, nonatomic) HTSGLFramebuffer *lastBuffer;
@property (nonatomic) BOOL enableRenderLib;
@property (nonatomic) BOOL enableAgfxMetal;

- (void)renderToTextureWithVertices:(const float *)a0 textureCoordinates:(const float *)a1;
- (void)p_skipFrameProcess;
- (void)initEffect;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)dealloc;

@end
