@class YYBaseWebView, NSString, NSNumber, NSURLRequest;
@protocol WASnapshotWebViewDelegate;

@interface WAJSContextPlugin_SnapshotWebView : WAJSContextPluginBase <YYWebViewDelegate>

@property (retain, nonatomic) YYBaseWebView *snapshotWebview;
@property (retain, nonatomic) NSString *curApiName;
@property (retain, nonatomic) NSNumber *curApiCallbackId;
@property (nonatomic) double snapshotEndTime;
@property (weak, nonatomic) id<WASnapshotWebViewDelegate> snapshotDelegate;
@property (readonly, nonatomic) NSURLRequest *request;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)handleEvent:(long long)a0 userInfo:(id)a1;
- (void)onWebViewLoadHtmlComplete:(id)a0;
- (void)onWebViewExecScriptComplete:(id)a0;
- (void)onWebViewSnapshotComplete:(id)a0 size:(struct CGSize { double x0; double x1; })a1 error:(id)a2;
- (void)openWebview;
- (void)webViewLoadHTML:(id)a0;
- (void)webviewExecScript:(id)a0;
- (void)webviewSnapshot:(id)a0;
- (void)closeWebview;
- (id)convertImageToARGBBitmap:(id)a0 width:(double)a1 height:(double)a2;
- (id)getPreInjectScriptStr;
- (void)webviewDidReceiveScriptMessage:(id)a0 handler:(id)a1 rawMessage:(id)a2;
- (void)webViewDidFinishLoad:(id)a0 navigation:(id)a1;
- (void)webView:(id)a0 didFailLoadWithError:(id)a1 navigation:(id)a2;
- (void)endWithState:(long long)a0 msg:(id)a1 dic:(id)a2;
- (void)api_sendSnapshotWebViewInfo:(id)a0;
- (void)api_log:(id)a0;
- (void).cxx_destruct;

@end
