@class NSThread, NSMutableArray, NSObject;
@protocol OS_dispatch_semaphore;

@interface BackendWorker : NSObject {
    struct shared_ptr<relax::shell::BackendWorkerImpl> { struct BackendWorkerImpl *__ptr_; struct __shared_weak_count *__cntrl_; } _backendWorker;
    NSThread *_runtimeThread;
    NSMutableArray *_templateDatas;
    BOOL _internalThread;
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

+ (void)registerBridgeModule:(id)a0 classType:(Class)a1 methods:(id)a2;
+ (void)unregisterBridgeModule:(id)a0;

- (BOOL)loadFile:(id)a0 withUrl:(id)a1;
- (id)initWithWorker:(void *)a0;
- (void)setGlobalProperties:(id)a0;
- (long long)getInstanceId;
- (void)internalSetWorker:(struct shared_ptr<relax::shell::BackendWorkerImpl> { struct BackendWorkerImpl *x0; struct __shared_weak_count *x1; })a0;
- (void)internalSetRuntimeThread:(id)a0;
- (void)ensureRunningOnJSThread;
- (void)executeOnWorker:(id /* block */)a0;
- (id)internalGetRuntimeThread;
- (void)switchToMainThread;
- (BOOL)loadScript:(id)a0 url:(id)a1;
- (BOOL)loadByteCode:(id)a0;
- (void)setExtraLibDir:(id)a0;
- (void)fireEvent:(id)a0 param:(id)a1;
- (id)callRTSFunction:(id)a0 param:(id)a1;
- (void)initReceivedErrorCallback:(id /* block */)a0;
- (void)registerBridgeModule:(id)a0 classType:(Class)a1 methods:(id)a2 params:(id)a3;
- (id)init:(BOOL)a0;
- (void).cxx_destruct;
- (void)destroy;
- (id).cxx_construct;
- (void)runBlock:(id /* block */)a0;
- (void)setup;

@end
