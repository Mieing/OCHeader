@class UIView, NSString, BDPFeedBackLogin, UIImage, BDPUniqueID, BDPFeedBackLoadingView, BDPFeedBackHeightAdapterView, UIViewController, BDPFeedBackWebView;

@interface BDPFeedBackViewController : BDPBusinessXScreenViewController <BDPFeedBackLoadingViewDelegate, BDPFeedBackWebViewDelegate, BDPFeedBackHeightAdapterViewDelegate, BDPFeedbackViewProtocol>

@property (retain, nonatomic) BDPFeedBackLogin *feedBacklogin;
@property (copy, nonatomic) NSString *URLString;
@property (nonatomic) unsigned long long reportType;
@property (retain, nonatomic) BDPFeedBackWebView *webview;
@property (retain, nonatomic) BDPFeedBackLoadingView *processView;
@property (retain, nonatomic) BDPFeedBackHeightAdapterView *blankView;
@property (nonatomic) unsigned long long webviewState;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) UIImage *snapShotImage;
@property (retain, nonatomic) UIViewController *snapshotController;
@property (retain, nonatomic) UIView *secView;
@property (nonatomic) BOOL enableScreenRecord;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)closeButtonDidClick;
- (void)updateContainerView;
- (void)retryDidClick;
- (void)registerFeedBackMessageHandler;
- (BOOL)XScreenWindowShouldShowLeftCustomButton:(id)a0;
- (id)initWithUniqueID:(id)a0 urlString:(id)a1;
- (id)screenProtectVersion;
- (BOOL)canGestureNavigateBackToLastVC;
- (void)feedBackUpdateNavigationBarConstraintFrame;
- (void)updateFeedBackNavigationBarHeight;
- (id)initWithUniqueID:(id)a0 urlString:(id)a1 snapshotTarget:(id)a2;
- (void)initReportType;
- (void)initPrePageWithUniqueID:(id)a0;
- (void)addBaseConsoleMessage;
- (void)_getSnapShotDate;
- (void)feedBackJudgeLogin:(id /* block */)a0;
- (void)feedBackJudgeLoginWeak:(id /* block */)a0;
- (void)feedBackScreenShot:(id /* block */)a0;
- (void)feedBackWebView:(id)a0 didStartProvisionalNavigation:(id)a1;
- (void)feedBackWebView:(id)a0 didFinishNavigation:(id)a1;
- (void)feedBackWebView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (BOOL)navigationBarHidden;
- (void)updateURL;

@end
