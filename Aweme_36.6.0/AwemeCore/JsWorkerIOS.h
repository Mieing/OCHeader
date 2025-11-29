@class JSWorkerBridgeEngine, NSString;
@protocol WorkerDelegate, MessageCallback, ErrorCallback;

@interface JsWorkerIOS : NSObject {
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } is_running_;
    BOOL use_jscore_;
    BOOL is_multi_thread_;
    NSString *cache_path_;
    NSString *biz_name_;
    struct shared_ptr<vmsdk::worker::WorkerDelegateIOS> { struct WorkerDelegateIOS *__ptr_; struct __shared_weak_count *__cntrl_; } worker_delegate_;
    struct shared_ptr<vmsdk::worker::Worker> { struct Worker *__ptr_; struct __shared_weak_count *__cntrl_; } worker_;
    struct shared_ptr<vmsdk::piper::ModuleManagerDarwin> { struct ModuleManagerDarwin *__ptr_; struct __shared_weak_count *__cntrl_; } module_manager_;
    struct shared_ptr<vmsdk::piper::ModuleDelegateImpl> { struct ModuleDelegateImpl *__ptr_; struct __shared_weak_count *__cntrl_; } module_delegate_;
    struct shared_ptr<vmsdk::runtime::TaskRunnerManufacture> { struct TaskRunnerManufacture *__ptr_; struct __shared_weak_count *__cntrl_; } task_runner_manufacture_;
    struct shared_ptr<vmsdk::runtime::JSRuntime> { struct JSRuntime *__ptr_; struct __shared_weak_count *__cntrl_; } js_runtime_;
    JsWorkerIOS *js_worker_ios_;
}

@property (readonly, nonatomic) JSWorkerBridgeEngine *tt_engine;
@property (weak) id<MessageCallback> onMessageCallback;
@property (weak) id<ErrorCallback> onErrorCallback;
@property (weak, nonatomic) id<WorkerDelegate> workerDelegate;

+ (id)genCodeCache:(id)a0 useJSCore:(BOOL)a1;

- (void)setTt_engine:(id)a0;
- (void)tt_installBridgeEngine:(id)a0;
- (void)evaluateJavaScript:(id)a0;
- (void)registerModule:(Class)a0 param:(id)a1;
- (void)initJSBridge;
- (id)init:(unsigned char)a0 param:(id)a1 isMutiThread:(unsigned char)a2 biz_name:(id)a3;
- (void *)getWorkerNapiEnv;
- (void)postOnJSRunner:(id /* block */)a0;
- (void)setGlobalProperties:(id)a0;
- (void)onMessage:(id)a0;
- (void)tt_installIESBridgeEngine:(id)a0;
- (void)evaluateJavaScript:(id)a0 param:(id)a1;
- (id)invokeJavaScriptFunctionSync:(id)a0 params:(id)a1;
- (id)invokeJavaScriptModuleSync:(id)a0 methodName:(id)a1 params:(id)a2;
- (void)invokeJavaScriptModule:(id)a0 methodName:(id)a1 params:(id)a2;
- (void)invokeJavaScriptFunction:(id)a0 params:(id)a1;
- (id)init:(unsigned char)a0 param:(id)a1;
- (id)init:(unsigned char)a0 param:(id)a1 isMutiThread:(unsigned char)a2;
- (void *)getTaskRunnerManufacture;
- (void *)getWorker;
- (void)evaluateCodeCache:(id)a0;
- (void)postOnJSRunnerDelay:(id /* block */)a0 delayMilliseconds:(long long)a1;
- (id)FetchJsWithUrlSync:(id)a0;
- (void)Fetch:(id)a0 param:(id)a1 bodyData:(const void *)a2 bodyLength:(int)a3 delPtr:(void *)a4;
- (id)getCacheFilePath;
- (id)init:(unsigned char)a0;
- (void)terminate;
- (void).cxx_destruct;
- (BOOL)isRunning;
- (id)init;
- (id).cxx_construct;
- (void)dealloc;
- (void)registerModule:(Class)a0;
- (void)onError:(id)a0;
- (void)setContextName:(id)a0;
- (void)postMessage:(id)a0;

@end
