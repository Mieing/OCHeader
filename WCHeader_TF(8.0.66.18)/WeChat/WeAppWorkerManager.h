@class NSString, NSMutableDictionary, NSMutableSet, WAWorkerRuntime;

@interface WeAppWorkerManager : MMUserService <WKUIDelegate, WKNavigationDelegate, WKURLSchemeHandler, MMServiceProtocol> {
    NSMutableDictionary *_noRetainingDelegate;
    NSMutableSet *_waitingDelegate;
    unsigned int _workerId;
}

@property (retain, nonatomic) WAWorkerRuntime *workerRuntime;
@property (nonatomic) BOOL loaded;
@property (nonatomic) BOOL isCompatible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createWorkerRuntime:(id)a0 view:(id)a1 delegate:(id)a2;
- (void)activeWorker:(id)a0;
- (void)clearCachedWorker;
- (void)notifyComplete:(id)a0;
- (void)destroyWorker:(unsigned int)a0;
- (void)webView:(id)a0 startURLSchemeTask:(id)a1;
- (void)webView:(id)a0 stopURLSchemeTask:(id)a1;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void)webView:(id)a0 runJavaScriptAlertPanelWithMessage:(id)a1 initiatedByFrame:(id)a2 completionHandler:(id /* block */)a3;
- (void)webView:(id)a0 runJavaScriptTextInputPanelWithPrompt:(id)a1 defaultText:(id)a2 initiatedByFrame:(id)a3 completionHandler:(id /* block */)a4;
- (void)destroyWeApp:(id)a0;
- (void)webViewWebContentProcessDidTerminate:(id)a0;
- (void)onServiceMemoryWarning;
- (void).cxx_destruct;

@end
