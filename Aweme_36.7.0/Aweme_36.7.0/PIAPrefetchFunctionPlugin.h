@class NSString, WKWebView, PIAWorker;

@interface PIAPrefetchFunctionPlugin : NSObject <PIAWorkerDelegate, PIAFunctionPlugin>

@property (weak, nonatomic) WKWebView *webView;
@property (retain, nonatomic) PIAWorker *worker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)executeAfterPrepareTask;
+ (unsigned long long)pluginMode;
+ (void)addPrefetchEnabledPVEvent:(BOOL)a0 engine:(id)a1;

- (void)engine:(id)a0 onLoadStart:(id)a1;
- (void)engine:(id)a0 onURLChange:(id)a1;
- (void)onEngineDestroy:(id)a0;
- (void)PIAWorker:(id)a0 didReceiveError:(id)a1;
- (void)PIAWorker:(id)a0 willFetchScriptURL:(id)a1;
- (void)PIAWorker:(id)a0 didFetchScriptURL:(id)a1 fetchMetrics:(id)a2 error:(id)a3;
- (void)willPIAWorkerCreate:(id)a0;
- (void)PIAWorker:(id)a0 didExecuteScriptURL:(id)a1 executeMetrics:(id)a2;
- (void)PIAWorker:(id)a0 didReceiveMessage:(id)a1;
- (void)startPrefetchWithEngine:(id)a0 URL:(id)a1;
- (void)releaseWorker;
- (id)getOnPageReadyParams;
- (void)injectBridgeAPI;
- (void).cxx_destruct;

@end
