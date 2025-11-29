@class BDASifContext, NSString;

@interface BDASifContainerLifecycle : NSObject <BDXContainerLifecycleProtocol>

@property (nonatomic) BOOL isFirstLoadFinished;
@property (retain, nonatomic) BDASifContext *sifContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)containerWillDestory:(id)a0;
- (void)containerViewControllerViewDidAppear:(id)a0;
- (void)containerViewControllerViewDidDisAppear:(id)a0;
- (void)container:(id)a0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)containerDidStartLoading:(id)a0;
- (void)container:(id)a0 didStartLoadingSuccessWithUrl:(id)a1;
- (void)container:(id)a0 didStartLoadingFailedWithUrl:(id)a1;
- (void)container:(id)a0 didFetchedResource:(id)a1 error:(id)a2;
- (void)containerDidFirstScreen:(id)a0;
- (void)container:(id)a0 didRecieveError:(id)a1;
- (void)container:(id)a0 updateTitle:(id)a1;
- (void)containerDidClose:(id)a0;
- (void)containerDidConstructJSRuntime:(id)a0;
- (void)container:(id)a0 didFallBackWithURL:(id)a1;
- (void)container:(id)a0 onUpdateLynxInfo:(id)a1 bulletInfo:(id)a2;
- (void)containerOnAppBecomeActive:(id)a0;
- (void)containerOnAppResignActive:(id)a0;
- (void)containerOnTakeScreenShot:(id)a0;
- (void)containerOnMemoryWarning:(id)a0;
- (void)containerOnBlockBackGesture:(id)a0;
- (id)anniexMonitorByContainer:(id)a0;
- (void)setProportion;
- (id)sifSchemaByContainer:(id)a0;
- (id)cardModelByContainer:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
