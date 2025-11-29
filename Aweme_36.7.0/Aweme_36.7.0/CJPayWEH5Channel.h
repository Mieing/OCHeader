@class NSString, WKWebView;

@interface CJPayWEH5Channel : CJPayBasicChannel <WKNavigationDelegate>

@property (retain, nonatomic) WKWebView *webView;
@property (nonatomic) double startTime;
@property (nonatomic) BOOL wakingApp;
@property (nonatomic) BOOL showLoading;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerPlugin;

- (BOOL)canProcessWithURL:(id)a0;
- (void)appDidInForeground;
- (void)payActionWithDataDict:(id)a0 completionBlock:(id /* block */)a1;
- (void)exeCompletionBlock:(unsigned long long)a0 resultType:(unsigned long long)a1 errCode:(id)a2;
- (void).cxx_destruct;
- (BOOL)isInstalled;
- (id)init;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)dealloc;

@end
