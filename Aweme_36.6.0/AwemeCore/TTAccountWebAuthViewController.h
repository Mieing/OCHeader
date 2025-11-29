@class NSString, WKWebView;

@interface TTAccountWebAuthViewController : UIViewController <WKNavigationDelegate>

@property (retain, nonatomic) WKWebView *webView;
@property (copy, nonatomic) NSString *authUrl;
@property (copy, nonatomic) id /* block */ cancelCompletion;
@property (copy, nonatomic) id /* block */ shouldStartLoadWithRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)viewDidLoad;
- (void)cancel;

@end
