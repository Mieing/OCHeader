@class NSString;

@interface CJPayDSWebView : WKWebView <WKNavigationDelegate>

@property (copy, nonatomic) NSString *returnUrl;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;

@end
