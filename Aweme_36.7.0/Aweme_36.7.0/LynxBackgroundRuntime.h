@class NSString, LynxBackgroundRuntimeOptions, NSHashTable, LynxDevtool;

@interface LynxBackgroundRuntime : NSObject <LynxErrorReceiverProtocol> {
    NSHashTable *_innerLifecycleClients;
    long long _state;
    struct weak_ptr<lynx::piper::ModuleFactoryDarwin> { struct ModuleFactoryDarwin *__ptr_; struct __shared_weak_count *__cntrl_; } _weak_module_factory;
    struct shared_ptr<lynx::shell::JSProxyDarwin> { struct JSProxyDarwin *__ptr_; struct __shared_weak_count *__cntrl_; } _js_proxy;
    struct shared_ptr<lynx::piper::InspectorRuntimeObserverNG> { struct InspectorRuntimeObserverNG *__ptr_; struct __shared_weak_count *__cntrl_; } _runtime_observer;
    struct InitRuntimeStandaloneResult { struct shared_ptr<lynx::shell::LynxActor<lynx::runtime::LynxRuntime>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } runtime_actor_; struct shared_ptr<lynx::shell::LynxActor<lynx::tasm::performance::PerformanceController>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } perf_controller_actor_; struct shared_ptr<lynx::shell::LynxActor<lynx::shell::NativeFacade>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } native_runtime_facade_; struct shared_ptr<lynx::tasm::WhiteBoardRuntimeDelegate> { struct WhiteBoardRuntimeDelegate *__ptr_; struct __shared_weak_count *__cntrl_; } white_board_delegate_; } _runtime_standalone_bundle;
    LynxDevtool *_devTool;
}

@property (retain, nonatomic) LynxBackgroundRuntimeOptions *options;
@property (retain) NSString *lastScriptUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addLifecycleClient:(id)a0;
- (void)removeLifecycleClient:(id)a0;
- (void)sendGlobalEvent:(id)a0 withParams:(id)a1;
- (void)setSessionStorageItem:(id)a0 withTemplateData:(id)a1;
- (void)getSessionStorageItem:(id)a0 withCallback:(id /* block */)a1;
- (double)subscribeSessionStorage:(id)a0 withCallback:(id /* block */)a1;
- (void)unSubscribeSessionStorage:(id)a0 withId:(double)a1;
- (void)evaluateJavaScript:(id)a0 withSources:(id)a1;
- (void)onErrorOccurred:(id)a0;
- (void)onEvaluateJavaScriptEnd:(id)a0;
- (id)initWithOptions:(id)a0 debuggable:(BOOL)a1;
- (void)initDevTool:(BOOL)a0;
- (struct weak_ptr<lynx::piper::ModuleFactoryDarwin> { struct ModuleFactoryDarwin *x0; struct __shared_weak_count *x1; })moduleFactoryPtr;
- (struct shared_ptr<lynx::shell::LynxActor<lynx::runtime::LynxRuntime>> { void *x0; struct __shared_weak_count *x1; })runtimeActor;
- (struct shared_ptr<lynx::shell::LynxActor<lynx::tasm::performance::PerformanceController>> { void *x0; struct __shared_weak_count *x1; })perfControllerActor;
- (id)devtool;
- (void)setRuntimeObserver:(const void *)a0;
- (void)evaluateTemplateBundle:(id)a0 widthBundle:(id)a1 withJSFile:(id)a2;
- (void)callFunction:(id)a0 withMethod:(id)a1 withParams:(id)a2;
- (void)addRuntimeLifecycleListener:(id)a0;
- (void)transitionToFullRuntime;
- (BOOL)attachToLynxView;
- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (id).cxx_construct;
- (void)dealloc;

@end
