@class NSPointerArray, NSMutableArray, NSString;

@interface TMNetworkWebviewInterceptor : IWKPluginObject <BDWebRequestDecorator>

@property (retain, nonatomic) NSMutableArray *webViewRequests;
@property (retain, nonatomic) NSPointerArray *enableInterceptWebviews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)webView:(id)a0 loadRequest:(id)a1;
- (id)webView:(id)a0 willInitWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 configuration:(id)a2;
- (void)bdw_decorateSchemeTask:(id)a0;
- (id)bdw_decorateRequest:(id)a0;
- (void)bdw_decorateURLProtocolTask:(id)a0;
- (void)startIntercepting;
- (void)stopIntercepting;
- (BOOL)enabledInterceptForWebview:(id)a0;
- (void).cxx_destruct;
- (long long)priority;
- (id)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (id)uniqueID;
- (id)webView:(id)a0 decidePolicyForNavigationResponse:(id)a1 decisionHandler:(id /* block */)a2;

@end
