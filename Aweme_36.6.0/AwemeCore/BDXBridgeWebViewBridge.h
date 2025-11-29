@class BDXBridgeWebViewPluginObject, WKWebView, NSString;
@protocol BDXBridgeEngineCallMessageHandler;

@interface BDXBridgeWebViewBridge : NSObject <BDXBridgeWebViewPluginObjectJSHandler, BDXBridgeWebViewPluginObjectIFrameHandler>

@property (retain, nonatomic) BDXBridgeWebViewPluginObject *webviewPlugin;
@property (weak, nonatomic) WKWebView *webView;
@property (weak, nonatomic) id<BDXBridgeEngineCallMessageHandler> messageHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bridgeScriptWithProtocol:(Class)a0;

- (void)fireEvent:(id)a0 params:(id)a1 resultBlock:(id /* block */)a2;
- (void)callbackWithCalledMessage:(id)a0 param:(id)a1 resultBlock:(id /* block */)a2;
- (id)injectionJsScript;
- (id)JSCallHandlerNames;
- (void)handleScriptMessage:(id)a0 withInterceptionPlugin:(id)a1;
- (BOOL)shouldHandleIFrameScheme:(id)a0 withHost:(id)a1 withInterceptionPlugin:(id)a2;
- (void)flushBridgeMessages;
- (void).cxx_destruct;
- (id)initWithWebView:(id)a0;
- (id)supportedProtocols;
- (void)dealloc;

@end
