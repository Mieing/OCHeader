@class NSString, NSDictionary, NSArray, WKWebView;

@interface AWEPayWebviewPlugin : IWKPluginObject <CJPayAPIDelegate, IWKClassPlugin>

@property (copy, nonatomic) NSDictionary *pluginConfig;
@property (copy, nonatomic) NSString *authDyURL;
@property (copy, nonatomic) NSArray *authURLArray;
@property (copy, nonatomic) NSDictionary *authURLConfig;
@property (copy, nonatomic) NSArray *payURLArray;
@property (weak, nonatomic) WKWebView *currentPayWebView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableWebviewPlugin;
+ (void)inject;
+ (id)shared;

- (void)onResponse:(id)a0;
- (void)monitorPlugin:(double)a0 isBreak:(BOOL)a1;
- (void)redirectToDyPayDesk:(id)a0 URL:(id)a1;
- (id)checkAuthUrl:(id)a0;
- (id)webviewURL:(id)a0 params:(id)a1;
- (void).cxx_destruct;
- (long long)priority;
- (id)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (id)defaultConfig;

@end
