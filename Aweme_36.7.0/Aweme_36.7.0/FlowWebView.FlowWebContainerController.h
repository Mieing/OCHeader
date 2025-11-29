@interface FlowWebView.FlowWebContainerController : FlowCommon.FlowBaseViewController <IvyKit.IvyWebViewContainerWrapperProtocol> {
    void /* unknown type, empty encoding */ ivyContainer;
    void /* unknown type, empty encoding */ safeAreaBottom;
    void /* unknown type, empty encoding */ trackParams;
    void /* unknown type, empty encoding */ enterTimeStamp;
    void /* unknown type, empty encoding */ initURLString;
    void /* unknown type, empty encoding */ isInitLoad;
    void /* unknown type, empty encoding */ $__lazy_storage_$_navigationBar;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bottomBar;
}

- (void)updateTitleWithTitle:(id)a0;
- (void)containerWillStartLoading;
- (void)containerDidFinishLoad;
- (void)containerDidReceiveError:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;

@end
