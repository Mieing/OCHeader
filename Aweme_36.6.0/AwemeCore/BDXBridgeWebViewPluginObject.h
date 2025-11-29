@class NSURL, NSString;
@protocol BDXBridgeWebViewPluginObjectIFrameHandler, BDXBridgeWebViewPluginObjectJSHandler;

@interface BDXBridgeWebViewPluginObject : IWKPluginObject <WKScriptMessageHandler, IWKInstancePlugin>

@property (retain, nonatomic) NSURL *commitURL;
@property (weak, nonatomic) id<BDXBridgeWebViewPluginObjectJSHandler> jsHandler;
@property (weak, nonatomic) id<BDXBridgeWebViewPluginObjectIFrameHandler> iframeHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupJSBEnv:(id)a0;
- (void).cxx_destruct;
- (id)webView:(id)a0 didCommitNavigation:(id)a1;
- (id)init;
- (id)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)userContentController:(id)a0 didReceiveScriptMessage:(id)a1;
- (void)onLoad:(id)a0;

@end
