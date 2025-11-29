@interface VERLContextResourceManager : NSObject {
    void *_rlDeviceMgr;
}

+ (id)defaultManager;

- (void)destroyResourcesForHTSGLContext:(id)a0;
- (void)cleanupResourcesForHTSGLContext:(id)a0;
- (void *)renderingDeviceFromHTSGLContext:(id)a0;
- (void *)renderingDeviceFromHTSGLContext:(id)a0 shareContext:(id)a1;
- (void *)rlRenderingDeviceFromHTSGLContext:(id)a0 shareContext:(id)a1;
- (void *)p_renderingDeviceFromContext:(struct shared_ptr<TESharedGLContext> { struct TESharedGLContext *x0; struct __shared_weak_count *x1; })a0 shareContext:(struct shared_ptr<TESharedGLContext> { struct TESharedGLContext *x0; struct __shared_weak_count *x1; })a1;
- (void *)renderingDeviceFromTEGLContext:(void *)a0 shareContext:(void *)a1;
- (void *)rlRenderingDeviceFromTEGLContext:(void *)a0 shareContext:(void *)a1;
- (void)destroyResourcesForTEGLContext:(void *)a0;
- (void)cleanupResourcesForTEGLContext:(void *)a0;
- (void *)rlRenderingDeviceFromHTSGLContext:(id)a0;
- (void *)renderingDeviceFromTEGLContext:(void *)a0;
- (void *)rlRenderingDeviceFromTEGLContext:(void *)a0;
- (void *)renderingDeviceFromRenderScene:(const char *)a0;
- (id)init;
- (void)dealloc;

@end
