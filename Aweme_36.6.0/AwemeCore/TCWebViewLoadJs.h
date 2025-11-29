@class NSString, WKWebView;

@interface TCWebViewLoadJs : NSObject <WKNavigationDelegate>

@property (retain, nonatomic) WKWebView *webView;
@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *openId;
@property (retain, nonatomic) NSString *appId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)clear;
+ (id)getInstance;

- (void)loadJS:(id)a0 openId:(id)a1 andKey:(id)a2;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void).cxx_destruct;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)dealloc;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 didStartProvisionalNavigation:(id)a1;

@end
