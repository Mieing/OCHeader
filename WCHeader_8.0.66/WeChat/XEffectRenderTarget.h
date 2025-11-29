@class EAGLContext, CAEAGLLayer;
@protocol XEffectRenderTargetDelegate;

@interface XEffectRenderTarget : NSObject {
    struct __CVOpenGLESTextureCache { } *_cvTextureCache;
    unsigned int _renderBuffer;
    unsigned int _frameBuffer;
    unsigned int _texVAO;
    unsigned int _texVBO;
    unsigned int _glProgTex;
    struct __CVBuffer { } *_videoTexture;
    unsigned int _videoTextureID;
    struct __CVBuffer { } *_drawTexture;
    unsigned int _drawTextureID;
    unsigned int _prevPointGroupCount;
    struct XEffect_GLContext { unsigned int program; unsigned int vShader; unsigned int fShader; } _ctx;
}

@property (nonatomic) struct __CVBuffer { } *renderPixelBuffer;
@property (nonatomic) BOOL isBackground;
@property (retain, nonatomic) EAGLContext *glContext;
@property (nonatomic) struct CGSize { double width; double height; } drawTextureSize;
@property (retain, nonatomic) CAEAGLLayer *layer;
@property (weak, nonatomic) id<XEffectRenderTargetDelegate> delegate;
@property (nonatomic) BOOL shouldRecreateTexture;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } renderArea;
@property (nonatomic) struct CGSize { double width; double height; } currentViewSize;
@property (nonatomic) long long orientation;
@property (nonatomic) BOOL shouldUpdateLayer;

- (id)initWithDelegate:(id)a0;
- (id)init;
- (void)dealloc;
- (void)registerBackgroundNotification;
- (void)appWillResignActive:(id)a0;
- (void)appDidBecomeActive:(id)a0;
- (void)setupProgTex;
- (void)setupVerticeArrWithTexSize:(struct CGSize { double x0; double x1; })a0;
- (void)setupFramebuffers;
- (void)resetViewPort;
- (unsigned int)loadGLProgram:(const char *)a0 frag:(const char *)a1 ctx:(struct XEffect_GLContext { unsigned int x0; unsigned int x1; unsigned int x2; } *)a2;
- (BOOL)compileShader:(unsigned int *)a0 type:(unsigned int)a1 shaderString:(const char *)a2;
- (BOOL)linkProgram:(unsigned int)a0;
- (unsigned int)setupTexture:(struct __CVBuffer { } *)a0;
- (void)ensureCoreVideoCache;
- (void)ensureDrawTexture:(struct CGSize { double x0; double x1; })a0;
- (void)rebindBuffer;
- (void)renderDrawTexture;
- (unsigned int)getDrawTexture;
- (unsigned int)getVideoTexture;
- (struct CGSize { double x0; double x1; })getDrawTextureSize;
- (id)getLayerForPreview;
- (id)snapshotWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 format:(long long)a1 alwaysCopy:(BOOL)a2;
- (BOOL)setContext:(id)a0;
- (void)begin;
- (void)end;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
