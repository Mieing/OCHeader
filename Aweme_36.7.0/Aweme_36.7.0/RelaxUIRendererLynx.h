@class NSString, LynxShadowNodeOwner, RelaxUIBodyView, LynxContext, LynxEventEmitter, LynxUIOwner, LynxEventHandler, RelaxEngineProxy;

@interface RelaxUIRendererLynx : UIResponder <RelaxUIRendererProtocol> {
    RelaxUIBodyView *contentView_;
    LynxContext *context_;
    LynxUIOwner *uiOwner_;
    LynxShadowNodeOwner *shadowNodeOwner_;
    LynxEventEmitter *eventEmitter_;
    LynxEventHandler *eventHandler_;
    RelaxEngineProxy *relaxEngineProxy_;
    void *relaxEngineImpl_;
    struct RefPtr<lynx::fml::TaskRunner> { struct TaskRunner *ptr_; } uiTaskRunner_;
}

@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (float)devicePixelRatio;
- (void)handleFocus:(id)a0 onView:(id)a1 withContainer:(id)a2 andPoint:(struct CGPoint { double x0; double x1; })a3 andEvent:(id)a4;
- (void)initLynxWithBuilder:(id)a0;
- (void)bindRelaxEngine:(id)a0 withRelaxView:(id)a1;
- (void)bindShouldInterceptUrlCallback:(id /* block */)a0;
- (void)setViewOpaque:(BOOL)a0;
- (void)setViewSizeMode:(id)a0;
- (void)forceTouchesCancelled:(id)a0;
- (void).cxx_destruct;
- (id)contentView;
- (void)viewDidLayoutSubviews;
- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;
- (id).cxx_construct;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithBuilder:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setRootView:(id)a0;

@end
