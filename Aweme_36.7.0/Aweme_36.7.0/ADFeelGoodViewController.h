@class UIWindow, ADFGBulletWebView, UIView, NSString, ADFeelGoodOpenModel, ADFeedGoodLoadStatusView, ADFGWKWebView;
@protocol BDXKitViewProtocol;

@interface ADFeelGoodViewController : UIViewController <ADFGWKWebViewDelegate, ADFGBulletWebViewDelegate>

@property (retain, nonatomic) UIWindow *window;
@property (retain, nonatomic) ADFeedGoodLoadStatusView *statusView;
@property (retain, nonatomic) ADFGWKWebView *webView;
@property (retain, nonatomic) ADFGBulletWebView *bulletWebView;
@property (retain, nonatomic) ADFeelGoodOpenModel *openModel;
@property (retain, nonatomic) UIView<BDXKitViewProtocol> *kitView;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)retryFetch;
- (id)initWithOpenModel:(id)a0;
- (void)prepareiPadLayoutModeParams;
- (void)startRequset;
- (void)fetchViewTraitCollectionSizeClass:(id)a0;
- (void)registerJSBridge;
- (void)webViewDidStarLoad;
- (void)showLoadingStatus;
- (void)configBgColor;
- (void)webviewDidFinishLoad;
- (void)didShowsWebViewWithConfrim:(BOOL)a0;
- (void)stopLoadingStatus;
- (void)webviewDidFailLoadWithError:(id)a0;
- (void)showErrorStatus;
- (void)bulletWebViewDidStartLoad:(id)a0;
- (void)bulletWebViewDidFinishLoad:(id)a0;
- (void)bulletWebView:(id)a0 didFailLoadWithError:(id)a1;
- (void)willTransitionToTraitCollection:(id)a0 withTransitionCoordinator:(id)a1;
- (void)close;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)webView:(id)a0 didFailLoadWithError:(id)a1;
- (void)webViewDidStartLoad:(id)a0;
- (void)webViewDidFinishLoad:(id)a0;

@end
