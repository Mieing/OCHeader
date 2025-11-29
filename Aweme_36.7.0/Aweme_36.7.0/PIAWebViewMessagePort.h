@class WKUserScript, NSString, WKWebView, PIASTLQueue;

@interface PIAWebViewMessagePort : NSObject <WKScriptMessageHandler, PIAMessageChannelPort>

@property (weak, nonatomic) WKWebView *webView;
@property (retain, nonatomic) PIASTLQueue *pendingList;
@property (retain, nonatomic) WKUserScript *propsScript;
@property BOOL portReady;
@property (nonatomic) unsigned long long version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onMessage:(id)a0;
- (void)updatePIAPropsWithContext:(id)a0;
- (void)setupWebViewBridge;
- (void)setupWebViewPolyfills;
- (void)executeAllPendingOnMessageList;
- (void).cxx_destruct;
- (id)initWithWebView:(id)a0;
- (void)dealloc;
- (void)userContentController:(id)a0 didReceiveScriptMessage:(id)a1;
- (void)postMessage:(id)a0;

@end
