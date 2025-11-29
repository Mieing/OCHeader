@class NSString, WKWebView;
@protocol WXWebViewControllerDelegate;

@interface WXWebViewController : UIViewController <WKNavigationDelegate> {
    WKWebView *_webView;
    id<WXWebViewControllerDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)viewDidLoad;
- (void)refresh:(id)a0;

@end
