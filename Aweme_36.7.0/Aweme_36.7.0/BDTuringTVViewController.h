@class NSString, NSDictionary, WKWebView, BDTuringConfig;

@interface BDTuringTVViewController : UIViewController <MFMessageComposeViewControllerDelegate, WKNavigationDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ callBack;
@property (copy, nonatomic) NSString *scene;
@property (retain, nonatomic) BDTuringConfig *config;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) long long startLoadTime;
@property (nonatomic) long long closeStatus;
@property (retain, nonatomic) WKWebView *webView;
@property (nonatomic) double webViewHeight;
@property (nonatomic) double webViewWidth;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } oriFrame;
@property (copy, nonatomic) NSDictionary *params;
@property (nonatomic) unsigned long long blockType;
@property (copy, nonatomic) id /* block */ cacheCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canSendText;
+ (BOOL)canSendText;

- (void)dismissLoading;
- (void)registerShowLoading;
- (void)setupNotification;
- (void)presentMessageComposeViewControllerWithPhone:(id)a0 content:(id)a1;
- (void)presentMessageComposeViewControllerWithPhone:(id)a0 content:(id)a1;
- (id)createErrorWithErrorCode:(long long)a0 errorMsg:(id)a1;
- (void)dismissSelfControllerWithParams:(id)a0 error:(id)a1;
- (void)registerFetch;
- (void)registerClose;
- (void)registerToast;
- (void)registerDismissLoading;
- (void)registerIsSmsAvailable;
- (void)registerOpenSms;
- (void)registerCopy;
- (void)registerAppInfo;
- (void)setupBackGroundView;
- (void)setupWebViewHeight;
- (void)setupXBottomView;
- (void)tapGestureResponse:(id)a0;
- (void)closeVerifyViewFromMask;
- (id)setupRequestURL;
- (void)setupWebViewWithURL:(id)a0;
- (void)onWebViewFinish;
- (void)closeEvent:(unsigned long long)a0;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void)webViewWebContentProcessDidTerminate:(id)a0;
- (void).cxx_destruct;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (id)initWithParams:(id)a0;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)setupViews;
- (void)messageComposeViewController:(id)a0 didFinishWithResult:(long long)a1;
- (void)setupWebView;
- (void)showLoading;

@end
