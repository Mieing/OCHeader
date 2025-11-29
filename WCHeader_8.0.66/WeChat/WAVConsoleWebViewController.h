@class YYBaseWebView, NSString, NSDictionary, WAVConsoleWebLogicController, WAJSContextPlugin_vConsole;

@interface WAVConsoleWebViewController : MMUIViewController <WAVConsoleWebLogicControllerDelegate, UIScrollViewDelegate, IWAVConsoleWebVCHelper>

@property (retain, nonatomic) WAVConsoleWebLogicController *logicController;
@property (retain, nonatomic) NSDictionary *dictExtInfo;
@property (weak, nonatomic) YYBaseWebView *logicWebView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } viewRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) WAJSContextPlugin_vConsole *plugin;
@property (nonatomic) unsigned int htmlId;
@property (nonatomic) unsigned int webviewId;

- (id)initWithURL:(id)a0 extInfo:(id)a1 plugin:(id)a2;
- (id)fetchPublicResLogic;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)useCustomNavibar;
- (void)webViewControllerDidStartLoad:(id)a0;
- (void)webViewControllerDidRecieveResponse:(id)a0 webview:(id)a1 isMainFrame:(BOOL)a2;
- (void)webViewControllerDidFinishLoad:(id)a0 dic:(id)a1;
- (void)handleWebViewVCDismiss;
- (void)configViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateHTMLFrame;
- (id)webView;
- (void)scrollViewDidScroll:(id)a0;
- (void)clearScrollBackgroundColor;
- (id)webViewControllerBackgroundColor;
- (void).cxx_destruct;

@end
