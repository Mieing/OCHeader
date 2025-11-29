@class CdnRciContext, CdnOpenGLContext, EAGLContext;

@interface CdnRenderContextWrapper : NSObject

@property long long renderType;
@property (retain) CdnOpenGLContext *cdnGLContext;
@property (retain) CdnRciContext *cdnRciContext;
@property BOOL glContextUsed;
@property (readonly) EAGLContext *glContext;

- (id)initWithCdnGLContext:(id)a0;
- (id)initWithCdnRciContext:(id)a0;
- (void)onGLContextUsed;
- (void)onGLContextEndUse;
- (void)runSync:(id /* block */)a0;
- (void)runAsync:(id /* block */)a0;
- (void)preCheckGLError;
- (void).cxx_destruct;

@end
