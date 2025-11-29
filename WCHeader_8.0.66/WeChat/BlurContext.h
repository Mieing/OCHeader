@class EAGLContext, WADynamicBackgroundGLSceneRenderTexture;

@interface BlurContext : NSObject

@property (retain, nonatomic) WADynamicBackgroundGLSceneRenderTexture *displayFramebufferPlane;
@property (nonatomic) unsigned int framebuffer;
@property (nonatomic) unsigned int framebufferColorTexture;
@property (weak, nonatomic) EAGLContext *glContext;

- (void)dealloc;
- (void).cxx_destruct;

@end
