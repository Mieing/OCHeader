@class NSString;

@interface SECWebViewPiperDiscoveryMonitor : NSObject <SECWebViewPlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)webView:(id)a0 didLoadContext:(id)a1;
- (void)webView:(id)a0 didHandleScriptMessageContext:(id)a1;
- (void)discoveryIframePiperProtocol:(id)a0 webView:(id)a1;
- (id)methodFromMessage:(id)a0;
- (id)resolveHandler:(id)a0 withContentController:(id)a1;

@end
