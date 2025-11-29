@class NSData, NSMutableDictionary, BackendWorker;

@interface RelaxEngine : NSObject {
    struct shared_ptr<relax::shell::RelaxEngineImpl> { struct RelaxEngineImpl *__ptr_; struct __shared_weak_count *__cntrl_; } _relax_engine;
    BackendWorker *_backendWorker;
    NSData *_templateData;
    NSMutableDictionary *_nativeBindings;
}

- (id)GetNativeBinding:(int)a0;
- (void)onEnterBackground;
- (void)setGlobalProperties:(id)a0;
- (void)onDestroy;
- (void)onEnterForeground;
- (long long)getInstanceId;
- (void)ensureRunningOnJSThread;
- (void)switchToMainThread;
- (BOOL)loadScript:(id)a0 url:(id)a1;
- (BOOL)loadByteCode:(id)a0;
- (BOOL)loadFile:(id)a0 withUrl:(id)a1;
- (void)setExtraLibDir:(id)a0;
- (void)fireEvent:(id)a0 param:(id)a1;
- (id)callRTSFunction:(id)a0 param:(id)a1;
- (void)initReceivedErrorCallback:(id /* block */)a0;
- (id)AttachToNativeBinding:(Class)a0;
- (BOOL)loadByteCode:(id)a0 withUrl:(id)a1;
- (void)detachNativeBinding;
- (long long)getNativeRelaxEnginePtr;
- (long long)getWorkerInstanceId;
- (void)setTiming:(id)a0 key:(id)a1 timestamp:(long long)a2;
- (void)initTimingWithSetupCallback:(id /* block */)a0 updateCallback:(id /* block */)a1 requestFrameCallback:(id /* block */)a2;
- (void)setContentSizeChangedCallback:(id /* block */)a0;
- (void)updateViewport:(double)a0 screenHeight:(double)a1 width:(double)a2 widthMode:(int)a3 height:(double)a4 heightMode:(int)a5 dpi:(double)a6 devicePixelRatio:(double)a7 fontScale:(double)a8 isDarkMode:(BOOL)a9;
- (struct CGSize { double x0; double x1; })measureWidthWidth:(double)a0 height:(double)a1;
- (id)getSources:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)destroy;
- (id).cxx_construct;
- (void)dealloc;

@end
