@class NSString, WKWebSearchView, WAWxMaterialOpenInfo, NSURLRequest;

@interface WAOpenWxMaterialListController : MMUIHalfScreenViewController <YYWebViewDelegate>

@property (retain, nonatomic) NSURLRequest *request;
@property (retain, nonatomic) WAWxMaterialOpenInfo *openInfo;
@property (retain, nonatomic) WKWebSearchView *webView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRequest:(id)a0 openInfo:(id)a1;
- (void)viewDidLoad;
- (id)contentView;
- (void)onClickCloseButton:(id)a0;
- (BOOL)hidesStatusBar;
- (void)js2oc_launchWeApp:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)openWeApp;
- (void)js2oc_onWeAppExposure:(id)a0;
- (void)webviewDidReceiveScriptMessage:(id)a0 handler:(id)a1 rawMessage:(id)a2;
- (void).cxx_destruct;

@end
