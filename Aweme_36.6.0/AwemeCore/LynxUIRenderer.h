@class NSString, LynxEventHandler, LynxUIOwner, LynxEventEmitter, LynxKeyboardEventDispatcher, LynxUIIntersectionObserverManager;

@interface LynxUIRenderer : NSObject <LynxUIRendererProtocol> {
    struct unique_ptr<lynx::tasm::UIDelegate, std::default_delete<lynx::tasm::UIDelegate>> { struct UIDelegate *__ptr_; } ui_delegate_;
    LynxUIOwner *_uiOwner;
    LynxEventHandler *_eventHandler;
    LynxEventEmitter *_eventEmitter;
    LynxKeyboardEventDispatcher *_keyboardEventDispatcher;
    LynxUIIntersectionObserverManager *_intersectionObserverManager;
    BOOL _enableGenericResourceLoader;
}

@property (readonly, nonatomic) BOOL useInvokeUIMethodFunction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getGestureArenaManager;
- (id)findViewWithName:(id)a0;
- (id)uiWithName:(id)a0;
- (id)uiWithIdSelector:(id)a0;
- (id)viewWithName:(id)a0;
- (void)onEnterBackground;
- (void)setEnableGenericResourceFetcher:(BOOL)a0;
- (void)onEnterForeground;
- (id)viewWithIdSelector:(id)a0;
- (id)uiOwner;
- (id)rootUI;
- (void)setLynxContext:(id)a0;
- (void)resumeRootLayoutAnimation;
- (void)pauseRootLayoutAnimation;
- (void)handleFocus:(id)a0 onView:(id)a1 withContainer:(id)a2 andPoint:(struct CGPoint { double x0; double x1; })a3 andEvent:(id)a4;
- (void)setImageFetcherInUIOwner:(id)a0;
- (void)setResourceFetcherInUIOwner:(id)a0;
- (id)genericResourceFetcher;
- (id)mediaResourceFetcher;
- (id)templateResourceFetcher;
- (void)attachContainerView:(id)a0;
- (id)hitTestInEventHandler:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setCustomizedLayoutInUIContext:(id)a0;
- (void)updateScreenWidth:(double)a0 height:(double)a1;
- (id)findUIBySign:(long long)a0;
- (void)setFluencyTracerEnabled:(long long)a0;
- (void)setPageConfig:(const void *)a0 context:(id)a1;
- (id)eventHandlerRootView;
- (void)invokeUIMethodForSelectorQuery:(id)a0 params:(id)a1 callback:(id /* block */)a2 toNode:(int)a3;
- (id)getScreenMetrics;
- (void)onSetupUIDelegate:(struct UIDelegate { void /* function */ **x0; int x1; } *)a0;
- (BOOL)needPaintingContextProxy;
- (void)setupEventHandler:(id)a0 engineProxy:(id)a1 containerView:(id)a2 context:(id)a3 shellPtr:(long long)a4;
- (void)setupWithContainerView:(id)a0 builder:(id)a1 screenSize:(struct CGSize { double x0; double x1; })a2;
- (void)setupResourceProvider:(id)a0 withBuilder:(id)a1;
- (void)onSetupUIDelegate:(void *)a0 withModuleManager:(void *)a1 withJSProxy:(struct shared_ptr<lynx::shell::LynxRuntimeProxy> { struct LynxRuntimeProxy *x0; struct __shared_weak_count *x1; })a2;
- (id)getLynxUIIntersectionObserverManager;
- (void)onSetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)needHandleHitTest;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (struct UIDelegate { void /* function */ **x0; int x1; } *)uiDelegate;
- (void)reset;
- (void)willMoveToWindow:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setScrollListener:(id)a0;
- (void)resetAnimation;
- (void)restartAnimation;
- (void)didMoveToWindow:(BOOL)a0;

@end
