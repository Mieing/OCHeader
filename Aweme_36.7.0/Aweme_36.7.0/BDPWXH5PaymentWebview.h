@class NSString;

@interface BDPWXH5PaymentWebview : WKWebView <WKNavigationDelegate> {
    BOOL _hasGotResult;
    BOOL _hasSetTimout;
}

@property (copy, nonatomic) id /* block */ loadSucessCallBack;
@property (copy, nonatomic) id /* block */ loadFailCallBack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_callDelegateFailedWithErrorMsg:(id)a0;
- (void)_callDelegateSucceed;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void)webViewWebContentProcessDidTerminate:(id)a0;
- (void).cxx_destruct;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(id)a1;

@end
