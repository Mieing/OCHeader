@class EAGLContext, NSObject;
@protocol OS_dispatch_queue;

@interface CdnOpenGLContext : NSObject {
    int _refCnt;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _refCntMutex;
}

@property (retain, nonatomic) EAGLContext *glContext;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *renderQueue;
@property (nonatomic) struct __CVOpenGLESTextureCache { } *coreVideoTextureCache;
@property (readonly, nonatomic) BOOL isAvailable;
@property (nonatomic) BOOL isMainThreadLag2024T3StopGlContextEnabled;

+ (id)sharedInstance;
+ (BOOL)supportsFastTextureUpload;

- (id)init;
- (void)dealloc;
- (void)setupGLContext;
- (id)openGLContext;
- (void)applicationWillResignActive:(id)a0;
- (void)applicationDidEnterBackground:(id)a0;
- (void)stopGlContext;
- (id)deviceModelVersion;
- (BOOL)canRenderOnInactiveState;
- (void)runSyncOnRenderQueue:(id /* block */)a0;
- (void)runAsyncOnRenderQueue:(id /* block */)a0;
- (void)increaseReference;
- (void)decreaseReference;
- (void).cxx_destruct;

@end
