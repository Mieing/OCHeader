@class NSString, WKWebView;

@interface BDPPrivacyPolicyWebViewController : UIViewController <WKNavigationDelegate, WKUIDelegate, UINavigationControllerDelegate> {
    WKWebView *_webview;
}

@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *feedbackTitle;
@property (nonatomic) BOOL isPersonalizeFeedBack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithURLString:(id)a0 title:(id)a1;
- (void)onClickWebViewCancelButton;
- (void).cxx_destruct;
- (id)initWithURLString:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;

@end
