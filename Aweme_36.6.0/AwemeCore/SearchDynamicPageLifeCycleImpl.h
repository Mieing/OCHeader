@class NSString;
@protocol SearchDynamicServiceProtocol, BDXContainerProtocol;

@interface SearchDynamicPageLifeCycleImpl : NSObject <BDXContainerLifecycleProtocol>

@property (weak, nonatomic) id<BDXContainerProtocol> container;
@property (retain, nonatomic) id<SearchDynamicServiceProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createServiceWithURL:(id)a0;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)containerDidCreated:(id)a0 view:(id)a1;
- (void)containerWillDestory:(id)a0;
- (void)containerDidPageReady:(id)a0 sourceParam:(id)a1;
- (void)containerOnShow:(id)a0 sourceParam:(id)a1;
- (void)containerOnHide:(id)a0 sourceParam:(id)a1;
- (void)containerViewControllerViewDidAppear:(id)a0;
- (void)containerViewControllerViewDidDisAppear:(id)a0;
- (BOOL)container:(id)a0 shouldStartLoadWithRequest:(id)a1 navigationType:(id)a2;
- (void)container:(id)a0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)containerOnTasmFinishByNative:(id)a0;
- (void)containerWillConstructKitView:(id)a0 source:(long long)a1;
- (void)containerWillStartLoading:(id)a0;
- (void)containerDidStartLoading:(id)a0;
- (void)container:(id)a0 didStartLoadingSuccessWithUrl:(id)a1;
- (void)container:(id)a0 didStartLoadingFailedWithUrl:(id)a1;
- (void)container:(id)a0 didStartFetchResourceWithURL:(id)a1;
- (void)container:(id)a0 didFetchedResource:(id)a1 error:(id)a2;
- (void)containerDidFirstScreen:(id)a0;
- (void)containerDidUpdate:(id)a0;
- (void)container:(id)a0 didRecieveError:(id)a1;
- (void)container:(id)a0 didReceivePerformance:(id)a1;
- (void)container:(id)a0 updateTitle:(id)a1;
- (void)containerDidClose:(id)a0;
- (void)container:(id)a0 didStartAnimationWithDuration:(double)a1 startFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 finalFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)container:(id)a0 didEndAnimationWithDuration:(double)a1 startFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 finalFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)containerDidPageUpdate:(id)a0;
- (void)containerDidConstructJSRuntime:(id)a0;
- (void)container:(id)a0 didReceivePerformanceFirstLoad:(id)a1 bulletPerfDict:(id)a2;
- (void)container:(id)a0 didFetchFromPool:(id)a1;
- (void)container:(id)a0 didReuseFromPool:(id)a1;
- (void)container:(id)a0 didRecycleIntoPool:(id)a1;
- (void)container:(id)a0 didFallBackWithURL:(id)a1;
- (void)container:(id)a0 onSetupLynxInfo:(id)a1 bulletInfo:(id)a2;
- (void)container:(id)a0 onUpdateLynxInfo:(id)a1 bulletInfo:(id)a2;
- (void)container:(id)a0 onKeyBoardChange:(id)a1 eventType:(unsigned long long)a2;
- (void)containerOnAppBecomeActive:(id)a0;
- (void)containerOnAppResignActive:(id)a0;
- (void)containerOnTakeScreenShot:(id)a0;
- (void)containerOnMemoryWarning:(id)a0;
- (void)containerOnBlockBackGesture:(id)a0;
- (void)sendEvent:(id)a0 params:(id)a1;
- (void).cxx_destruct;

@end
