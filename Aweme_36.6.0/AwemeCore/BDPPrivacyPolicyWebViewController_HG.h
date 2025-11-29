@class NSString, WKWebView;

@interface BDPPrivacyPolicyWebViewController_HG : UIViewController <WKNavigationDelegate> {
    WKWebView *_webview;
}

@property (retain, nonatomic) NSString *url;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onClickWebViewCancelButton;
- (void).cxx_destruct;
- (id)initWithURLString:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;

@end
