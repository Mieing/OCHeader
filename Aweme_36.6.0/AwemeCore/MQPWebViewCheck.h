@class NSString, MQPWebView;

@interface MQPWebViewCheck : NSObject <WKNavigationDelegate>

@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) MQPWebView *webview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)checkUrlShouldRenderInWebview:(id)a0 withBlock:(id /* block */)a1;
- (void)postCheckRequestByJS:(id)a0;
- (void)removeWebView;
- (void).cxx_destruct;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)webView:(id)a0 decidePolicyForNavigationResponse:(id)a1 decisionHandler:(id /* block */)a2;

@end
