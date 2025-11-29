@class NSMutableDictionary, JITRuntimeMessageHandler, NSString, JITRuntimeURLSchemeHandler, NSMutableArray;
@protocol JITRuntimeViewDelegate;

@interface JITRuntimeView : WKWebView <WKScriptMessageHandler, WKUIDelegate, WKNavigationDelegate, XHRRequestTaskDelegate, WKURLSchemeHandler>

@property (retain, nonatomic) JITRuntimeMessageHandler *messageHandler;
@property (retain, nonatomic) JITRuntimeURLSchemeHandler *urlHandler;
@property (copy, nonatomic) id /* block */ loadResolver;
@property (retain, nonatomic) NSMutableDictionary *tasks;
@property (nonatomic) unsigned int jitLiteMode;
@property (weak, nonatomic) id<JITRuntimeViewDelegate> delegate;
@property (retain, nonatomic) NSString *baseUrl;
@property (copy, nonatomic) id /* block */ iOS16StringFixBlock;
@property (readonly, nonatomic) BOOL forbidMetalCPP;
@property (nonatomic) BOOL jitLoaded;
@property (retain, nonatomic) NSMutableArray *prevInvokers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1 confDict:(id)a2;
- (void)configurationWillCreate:(id)a0 liteMode:(unsigned int)a1;
- (void)destroy;
- (void)dealloc;
- (void)evaluate:(id)a0 handler:(id /* block */)a1;
- (void)evaluateInvoker:(id)a0;
- (void)onTaskFinished:(id)a0;
- (void)webView:(id)a0 startURLSchemeTask:(id)a1;
- (void)webView:(id)a0 stopURLSchemeTask:(id)a1;
- (void)webView:(id)a0 runJavaScriptTextInputPanelWithPrompt:(id)a1 defaultText:(id)a2 initiatedByFrame:(id)a3 completionHandler:(id /* block */)a4;
- (void)userContentController:(id)a0 didReceiveScriptMessage:(id)a1;
- (void)webView:(id)a0 runJavaScriptAlertPanelWithMessage:(id)a1 initiatedByFrame:(id)a2 completionHandler:(id /* block */)a3;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)resize:(struct CGSize { double x0; double x1; })a0;
- (void)webViewWebContentProcessDidTerminate:(id)a0;
- (void)loadHTML:(id)a0 baseURL:(id)a1 withResolverBlock:(id /* block */)a2;
- (void)jitTriggerGC;
- (void)jitSimulateFullGC;
- (void)jitSimulateFullGCWithDeleteAllCode;
- (void)jitSimulateLowMemory;
- (void)jitDumpGCHeap;
- (unsigned int)getJITLiteMode;
- (void)evaluatePrevInvoker;
- (void)addPrevInvoker:(id)a0;
- (void).cxx_destruct;

@end
