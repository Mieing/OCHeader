@interface AWEIMMessageTabFPSMonitorComponent : AWEIMComponentBase

@property (copy, nonatomic) id /* block */ envBlock;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)app_didEnterBackground;
- (void)app_willEnterForeground;
- (void)hostVC_viewDidDisappear;
- (void)hostVC_viewWillAppear;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppear;
- (void)hostVC_viewWillDisappear;
- (id)p_traceDict;
- (void).cxx_destruct;

@end
