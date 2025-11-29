@interface FlowWebView.SearchWebViewController : FlowCommon.FlowBaseViewController <WKNavigationDelegate> {
    void /* unknown type, empty encoding */ _appInfoProvider;
    void /* unknown type, empty encoding */ _networkProvider;
    void /* unknown type, empty encoding */ observation;
    void /* unknown type, empty encoding */ $__lazy_storage_$_webView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_progressView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_navigationBar;
    void /* unknown type, empty encoding */ url;
    void /* unknown type, empty encoding */ searchEngineType;
    void /* unknown type, empty encoding */ evaluateHideHeaderJS;
}

- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 didStartProvisionalNavigation:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;

@end
