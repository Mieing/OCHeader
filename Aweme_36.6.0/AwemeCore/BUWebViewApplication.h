@interface BUWebViewApplication : NSObject

+ (void)invokeJSBCallbackWithCommand:(id)a0 msg:(unsigned long long)a1 data:(id)a2 webView:(id)a3;
+ (void)fireEvent:(id)a0 data:(id)a1 withWebView:(id)a2 completion:(id /* block */)a3;
+ (BOOL)handleRequest:(id)a0 withWebView:(id)a1 viewController:(id)a2;
+ (void)fireEvent:(id)a0 data:(id)a1 withWebView:(id)a2;
+ (void)registeJSBAlias:(id)a0 for:(id)a1;
+ (id)sharedInstance;

@end
