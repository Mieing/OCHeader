@class YYBaseWebView, NSString, NSNumber, NSURLRequest;

@interface WARichTextWebView : WANativeView <YYWebViewDelegate>

@property (retain, nonatomic) YYBaseWebView *webView;
@property (retain, nonatomic) NSString *curApiName;
@property (retain, nonatomic) NSNumber *curApiCallbackId;
@property (nonatomic) BOOL isSnapshoting;
@property (nonatomic) double snapshotEndTime;
@property (readonly, nonatomic) NSURLRequest *request;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)onInsertWithParam:(id)a0;
- (id)onUpdateWithParam:(id)a0;
- (id)onRemoveWithParam:(id)a0;
- (void)dealloc;
- (void)loadHTMLString:(id)a0;
- (void)trySnapshot;
- (void)doSnapshot;
- (id)getPreInjectScriptStr;
- (void)webviewDidReceiveScriptMessage:(id)a0 handler:(id)a1 rawMessage:(id)a2;
- (void)webViewDidFinishLoad:(id)a0 navigation:(id)a1;
- (void)webView:(id)a0 didFailLoadWithError:(id)a1 navigation:(id)a2;
- (void)endWithState:(long long)a0 msg:(id)a1 dic:(id)a2;
- (void)api_sendRichTextInfo:(id)a0;
- (void)api_log:(id)a0;
- (void).cxx_destruct;

@end
