@class NSString;
@protocol BDPHostWebViewDelegate;

@interface BDPLightBoardWebView : WKWebView <WKNavigationDelegate, BDPHostWebViewProtocol>

@property (weak, nonatomic) id<BDPHostWebViewDelegate> bdp_webViewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
