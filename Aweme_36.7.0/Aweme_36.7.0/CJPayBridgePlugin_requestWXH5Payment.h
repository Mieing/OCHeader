@class NSString, WKWebView, TTBridgeCommand;

@interface CJPayBridgePlugin_requestWXH5Payment : TTBridgePlugin <WKNavigationDelegate>

@property (retain, nonatomic) WKWebView *webView;
@property (copy, nonatomic) id /* block */ bridgeCallback;
@property (weak, nonatomic) TTBridgeCommand *command;
@property (nonatomic) BOOL hasOpenWXSchema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerBridge;
+ (unsigned long long)instanceType;

- (void)requestWXH5PaymentWithParam:(id)a0 callback:(id /* block */)a1 engine:(id)a2 controller:(id)a3 command:(id)a4;
- (void)p_delayDetectWXOpenStatus;
- (void).cxx_destruct;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)dealloc;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;

@end
