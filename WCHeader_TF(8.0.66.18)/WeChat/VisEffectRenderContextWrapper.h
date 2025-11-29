@class XImageContext, MMOpenGLContext;

@interface VisEffectRenderContextWrapper : NSObject

@property long long renderType;
@property (retain) MMOpenGLContext *openGLContext;
@property (retain) XImageContext *rciContext;

- (id)initWithOpenGLContext:(id)a0;
- (id)initWithRciContext:(id)a0;
- (void)runSync:(id /* block */)a0;
- (void)runAsync:(id /* block */)a0;
- (void).cxx_destruct;

@end
