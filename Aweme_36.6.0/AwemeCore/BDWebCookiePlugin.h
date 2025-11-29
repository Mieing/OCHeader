@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface BDWebCookiePlugin : IWKPluginObject <WKScriptMessageHandler, IWKClassPlugin>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_getSyncCookieTag:(id)a0;
+ (void)syncCookiesWithRequest:(id)a0 completion:(id /* block */)a1;
+ (id)_cookiesStringFromCookies:(id)a0;
+ (BOOL)containsCookieWithCookies:(id)a0 cookie:(id)a1;

- (id)webView:(id)a0 loadRequest:(id)a1;
- (id)webView:(id)a0 willInitWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 configuration:(id)a2;
- (id)_unsyncCookiesWithWKCookies:(id)a0 httpCookies:(id)a1;
- (id)fetchCookieSyncJS;
- (void)syncCookiesForWKWebView:(id)a0;
- (void).cxx_destruct;
- (id)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (id)webView:(id)a0 decidePolicyForNavigationResponse:(id)a1 decisionHandler:(id /* block */)a2;
- (void)userContentController:(id)a0 didReceiveScriptMessage:(id)a1;

@end
