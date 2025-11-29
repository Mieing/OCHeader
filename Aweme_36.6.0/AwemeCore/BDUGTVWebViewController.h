@class NSDictionary, WKWebView, NSString;
@protocol BDUGTwiceVerifyDelegate;

@interface BDUGTVWebViewController : UIViewController <MFMessageComposeViewControllerDelegate, WKNavigationDelegate>

@property (retain, nonatomic) WKWebView *webview;
@property (nonatomic) double webviewHeight;
@property (nonatomic) double webviewWidth;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } oriFrame;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) id /* block */ cacheCallback;
@property (nonatomic) unsigned long long blockType;
@property (weak, nonatomic) id<BDUGTwiceVerifyDelegate> delegate;
@property (copy, nonatomic) id /* block */ callBack;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *appid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissLoading;
- (void)registerShowLoading;
- (void)setupNotification;
- (void)dismissSelfControllerWithParams:(id)a0 error:(id)a1;
- (void)registerFetch;
- (void)registerClose;
- (void)registerToast;
- (void)registerDismissLoading;
- (void)registerIsSmsAvailable;
- (void)registerOpenSms;
- (void)setupBackGroundView;
- (void)setupWebViewHeight;
- (void)setupXBottomView;
- (void)tapGestureResponse:(id)a0;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void)webViewWebContentProcessDidTerminate:(id)a0;
- (void).cxx_destruct;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (id)initWithParams:(id)a0;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)viewDidLoad;
- (void)dealloc;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)setupViews;
- (void)messageComposeViewController:(id)a0 didFinishWithResult:(long long)a1;
- (void)setupWebView;
- (void)showLoading;

@end
