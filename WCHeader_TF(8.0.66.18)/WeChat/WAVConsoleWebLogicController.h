@class YYBaseWebView, NSString, WAVConsoleJSLogicImpl, NSURL, WAJSContextPlugin_vConsole, NSURLRequest, UIViewController;
@protocol WAVConsoleWebLogicControllerDelegate;

@interface WAVConsoleWebLogicController : MMObject <WAVConsoleJSLogicImplDelegate, YYWebViewDelegate>

@property (weak, nonatomic) UIViewController *viewController;
@property (weak, nonatomic) id<WAVConsoleWebLogicControllerDelegate> delegate;
@property (retain, nonatomic) YYBaseWebView *webView;
@property (retain, nonatomic) WAVConsoleJSLogicImpl *jsLogicImpl;
@property (copy, nonatomic) NSURL *oInitUrl;
@property (nonatomic) long long nHttpRspCode;
@property (copy, nonatomic) NSString *nsLoadingUrl;
@property (copy, nonatomic) NSString *appID;
@property (nonatomic) unsigned int requestID;
@property (nonatomic) BOOL isWebviewFirstLoad;
@property (nonatomic) unsigned int htmlId;
@property (nonatomic) unsigned int webviewId;
@property (weak, nonatomic) WAJSContextPlugin_vConsole *plugin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSURLRequest *request;

- (id)initWithUrl:(id)a0 appID:(id)a1 viewController:(id)a2 delegate:(id)a3 plugin:(id)a4;
- (void)dealloc;
- (id)fetchPublicResLogic;
- (void)initWebJSLogic;
- (void)initWebView;
- (void)notifyToJSBridgeVisibilityChanged:(BOOL)a0;
- (void)doInitialize;
- (id)getCurrentUrl;
- (void)loadFrameContent:(id)a0;
- (id)getFrameContent;
- (BOOL)webView:(id)a0 shouldStartLoadWithRequest:(id)a1 navigationType:(long long)a2 isMainFrame:(BOOL)a3 navigationAction:(id)a4;
- (void)webViewDidStartLoad:(id)a0 navigation:(id)a1;
- (void)webViewDidReceiveServerRedirect:(id)a0 navigation:(id)a1;
- (void)webViewDidReceiveResponse:(id)a0 isMainFrame:(BOOL)a1 andGetIsCancelNavigation:(BOOL *)a2;
- (void)webViewDidFinishLoad:(id)a0 navigation:(id)a1;
- (void)webView:(id)a0 didFailLoadWithError:(id)a1 nnavigation:(id)a2;
- (void)webviewDidReceiveScriptMessage:(id)a0 handler:(id)a1 rawMessage:(id)a2;
- (void)onDomReady;
- (void)onWebInvokeAppService:(id)a0;
- (void).cxx_destruct;

@end
