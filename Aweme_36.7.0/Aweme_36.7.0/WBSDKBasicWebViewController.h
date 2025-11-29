@class WBBaseRequest, NSString, NSURL, WBSDKWebView;

@interface WBSDKBasicWebViewController : UIViewController <WBSDKWebViewDelegate>

@property (retain, nonatomic) WBBaseRequest *weibosdkRequest;
@property (retain, nonatomic) WBSDKWebView *webView;
@property (retain, nonatomic) NSURL *loadUrl;
@property (nonatomic) BOOL needResponse;
@property (retain, nonatomic) NSString *navigationBarTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)closeBtnClicked;
- (id)urlRequestFromWeiboSDKRequest:(id)a0 andExtraPara:(id)a1;
- (void)wbsdk_webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)loadWebViewUrl;
- (void)wbsdk_webViewDidStartLoad:(id)a0;
- (void)wbsdk_webViewDidFinishLoad:(id)a0;
- (void)wbsdk_webView:(id)a0 didFailLoadWithError:(id)a1;
- (void)wbsdk_webView:(id)a0 didPressErrorViewReloadButton:(id)a1;
- (id)initWithWeiboSDKRequest:(id)a0;
- (id)initWithURL:(id)a0 andTitle:(id)a1;
- (void)startWebViewRequest;
- (void).cxx_destruct;
- (void)reload;
- (void)viewDidLoad;
- (void)dealloc;

@end
