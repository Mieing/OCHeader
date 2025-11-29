@class NSString;
@protocol SECForceHTTPSLoggerProtocol, SECForceHTTPSProtocol;

@interface SECForceHTTPSWebViewPlugin : IWKPluginObject <IWKClassPlugin>

@property (retain, nonatomic) id<SECForceHTTPSProtocol> forceHTTPSDelegate;
@property (retain, nonatomic) id<SECForceHTTPSLoggerProtocol> logger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setupForceHTTPSDelegate:(id)a0;
+ (void)injectWithHTTPSDelegate:(id)a0;
+ (void)setupLogger:(id)a0;
+ (id)shared;

- (id)webView:(id)a0 loadRequest:(id)a1;
- (BOOL)shouldForceHttpsForURL:(id)a0;
- (id)webView:(id)a0 forceHTTPSForRequest:(id)a1;
- (void).cxx_destruct;
- (id)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;

@end
