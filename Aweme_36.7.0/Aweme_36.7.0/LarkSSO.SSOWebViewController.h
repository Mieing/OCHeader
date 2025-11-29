@interface LarkSSO.SSOWebViewController : UIViewController <WKUIDelegate, WKNavigationDelegate> {
    void /* unknown type, empty encoding */ webView;
    void /* unknown type, empty encoding */ url;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backItem;
    void /* unknown type, empty encoding */ $__lazy_storage_$_closeItem;
}

@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;

- (id)webView:(id)a0 createWebViewWithConfiguration:(id)a1 forNavigationAction:(id)a2 windowFeatures:(id)a3;
- (void)webView:(id)a0 didReceiveServerRedirectForProvisionalNavigation:(id)a1;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)webView:(id)a0 decidePolicyForNavigationResponse:(id)a1 decisionHandler:(id /* block */)a2;
- (void)closeVC:(id)a0;
- (void)webViewBack:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;

@end
