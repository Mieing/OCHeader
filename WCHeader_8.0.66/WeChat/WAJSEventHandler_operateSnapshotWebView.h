@class NSString, WAWebSnapshotParam;

@interface WAJSEventHandler_operateSnapshotWebView : WAJSEventHandler_BaseEvent <WASnapshotWebViewDelegate>

@property (retain, nonatomic) NSString *html;
@property (retain, nonatomic) NSString *script;
@property (retain, nonatomic) WAWebSnapshotParam *snapshotParam;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)onWebViewLoadHtmlComplete:(id)a0;
- (void)onWebViewExecScriptComplete:(id)a0;
- (void)onWebViewSnapshotComplete:(id)a0 size:(struct CGSize { double x0; double x1; })a1 error:(id)a2;
- (void).cxx_destruct;

@end
