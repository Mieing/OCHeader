@class NSString, UIActivityIndicatorView, WKWebView, NSMutableData, NSError;
@protocol TCWebViewControllerDelegate;

@interface TCWebViewController : UIViewController <WKUIDelegate, WKNavigationDelegate, NSURLConnectionDelegate, NSURLConnectionDataDelegate>

@property (retain, nonatomic) UIActivityIndicatorView *activityIndicatorView;
@property (nonatomic) BOOL finished;
@property (retain, nonatomic) NSMutableData *theData;
@property (nonatomic) unsigned long long retryCount;
@property (nonatomic) int nloadCount;
@property (retain, nonatomic) WKWebView *webview;
@property (copy, nonatomic) NSString *webTitle;
@property (copy, nonatomic) NSString *requestURLStr;
@property (retain, nonatomic) NSError *error;
@property (weak, nonatomic) id<TCWebViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopLoad;
- (void)loadReqURL;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (void).cxx_destruct;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 didStartProvisionalNavigation:(id)a1;
- (void)doClose;

@end
