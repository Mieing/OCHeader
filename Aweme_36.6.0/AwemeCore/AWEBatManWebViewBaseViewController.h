@class NSString, WKWebView;
@protocol AWEBatManWebViewBaseViewControllerDelegate;

@interface AWEBatManWebViewBaseViewController : UIViewController <WKUIDelegate, WKNavigationDelegate, WKScriptMessageHandler>

@property (copy, nonatomic) id /* block */ completion;
@property (weak, nonatomic) WKWebView *webView;
@property (copy, nonatomic) NSString *url;
@property (weak, nonatomic) id<AWEBatManWebViewBaseViewControllerDelegate> delegate;
@property (nonatomic) BOOL isShowFromDialog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configUI;
- (id)initWithURL:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)presentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)dismissAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)userContentController:(id)a0 didReceiveScriptMessage:(id)a1;

@end
