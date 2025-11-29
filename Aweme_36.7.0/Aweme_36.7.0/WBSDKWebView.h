@class NSURLRequest, NSString, WKWebView, WBSDKWebViewErrorView, WBSDKWebViewProgressView;
@protocol WBSDKWebViewDelegate;

@interface WBSDKWebView : UIView <WKNavigationDelegate>

@property (retain, nonatomic) WKWebView *internalWebView;
@property (retain, nonatomic) WBSDKWebViewProgressView *progressView;
@property (retain, nonatomic) WBSDKWebViewErrorView *errorView;
@property (weak, nonatomic) id<WBSDKWebViewDelegate> delegate;
@property (readonly, nonatomic) NSURLRequest *request;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)errorViewRetryButtonPressed:(id)a0;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void).cxx_destruct;
- (void)reload;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)layoutSubviews;
- (void)dealloc;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 didStartProvisionalNavigation:(id)a1;
- (void)loadRequest:(id)a0;

@end
