@class ADFGWebViewBridgeEngine, NSString;
@protocol ADFGWKWebViewDelegate;

@interface ADFGWKWebView : WKWebView <WKNavigationDelegate>

@property (retain, nonatomic) ADFGWebViewBridgeEngine *adfg_engine;
@property (weak, nonatomic) id<ADFGWKWebViewDelegate> slaveDelates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareProcessPool;

- (void)adfg_installBridgeEngine:(id)a0;
- (void)adfg_uninstallBridgeEngine;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void).cxx_destruct;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)dealloc;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 didStartProvisionalNavigation:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(id)a1;

@end
