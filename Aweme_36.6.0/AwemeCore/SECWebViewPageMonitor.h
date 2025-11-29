@class NSString;

@interface SECWebViewPageMonitor : NSObject <SECWebViewPlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)webView:(id)a0 didLoadContext:(id)a1;
- (void)webView:(id)a0 changedURLFrom:(id)a1 toURL:(id)a2;
- (void)onPluginInit;
- (void)updateUIContextIfNeeded:(id)a0;
- (id)collectUIContext:(id)a0;

@end
