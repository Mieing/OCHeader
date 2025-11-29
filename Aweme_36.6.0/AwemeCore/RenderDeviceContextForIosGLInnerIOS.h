@class CAEAGLLayer, EAGLContext;

@interface RenderDeviceContextForIosGLInnerIOS : NSObject

@property (retain, nonatomic) CAEAGLLayer *eaglLayer;
@property (retain, nonatomic) EAGLContext *glContext;
@property (nonatomic) int frameBufferWidth;
@property (nonatomic) int frameBufferHeight;
@property (nonatomic) unsigned int frameBuffer;
@property (nonatomic) unsigned int colorBuffer;
@property (nonatomic) unsigned int depthBuffer;
@property (nonatomic) unsigned int sampleFrameBuffer;
@property (nonatomic) unsigned int sampleColorBuffer;
@property (nonatomic) unsigned int sampleDepthBuffer;
@property (nonatomic) BOOL enableFramebufferDiscard;
@property (nonatomic) BOOL needRecreateFrameBuffer;
@property (nonatomic) BOOL bAntiAliasing;
@property (nonatomic) BOOL hasFrontSurface;
@property (nonatomic) BOOL needBackgroudRender;
@property (nonatomic) BOOL readyToDraw;
@property (nonatomic) BOOL ableToDraw;
@property (nonatomic) int colorBits;

- (void)DestoryEGLContext;
- (void)deleteFramebuffer;
- (void)createFramebuffer;
- (void)getDeivceColorBits;
- (void)setDisplayAndWindow:(long long)a0 window:(long long)a1;
- (BOOL)HasEglContext;
- (BOOL)CreateEGLContext:(void *)a0;
- (BOOL)ChangeEGLSurface:(int)a0 height:(int)a1;
- (void)GetSurfaceSize:(int *)a0 height:(int *)a1;
- (void)DestroyEGLSurface;
- (BOOL)MakeCurrent;
- (BOOL)SwapBuffers;
- (void)Finish;
- (id)init;
- (void)dealloc;

@end
