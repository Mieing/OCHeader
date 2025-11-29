@class UIView, AWECertProcessView, AWECertCheckPopupView, DUXAlertDialog, DUXNavigationBar, UIImageView, UIButton, AWEStudentCertConfig, NSTimer, DUXLoadingToast, NSString, WKWebView;
@protocol AWEHttpTask, BDXViewContainerProtocol;

@interface AWEStudentCertViewController : UIViewController <BDXContainerLifecycleProtocol>

@property (retain, nonatomic) DUXNavigationBar *duxNavigationBar;
@property (retain, nonatomic) UIView<BDXViewContainerProtocol> *bdxView;
@property (weak, nonatomic) WKWebView *webView;
@property (retain, nonatomic) AWECertProcessView *certButtonView;
@property (retain, nonatomic) AWECertCheckPopupView *checkPopupView;
@property (retain, nonatomic) UIView *guideBgView;
@property (retain, nonatomic) UIImageView *guideImageView;
@property (retain, nonatomic) UIButton *guideButton;
@property (retain, nonatomic) DUXLoadingToast *loadingToast;
@property (retain, nonatomic) DUXAlertDialog *successDialog;
@property (retain, nonatomic) AWEStudentCertConfig *certConfig;
@property (nonatomic) BOOL isLoading;
@property (nonatomic) double startTime;
@property (nonatomic) BOOL hasReported;
@property (retain, nonatomic) id<AWEHttpTask> task;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) long long secondsElapsed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)containerDidCreated:(id)a0 view:(id)a1;
- (void)container:(id)a0 didStartFetchResourceWithURL:(id)a1;
- (void)sendEvent:(id)a0 params:(id)a1;
- (void)customAction;
- (void)buildBdxView;
- (void)successDismissAction:(id)a0;
- (void)hideGuideImage;
- (BOOL)isURLMatchingRegex:(id)a0 url:(id)a1;
- (void)showGuideImageWithItem:(id)a0;
- (void)startCaptureWithWebViewSnapshot;
- (id)captureScreenBae64Image;
- (void)startCertWithImage:(id)a0 completion:(id /* block */)a1;
- (id)getCurrentWebView;
- (void)showCertSuccessDialog:(id)a0;
- (void)showCertFailureDialog:(id)a0;
- (void)checkCertInfoWithCompletion:(id /* block */)a0;
- (void)startCertProcess;
- (void)checkCertInfo;
- (id)initWithConfigInfo:(id)a0 completion:(id /* block */)a1;
- (void)updateCountdown;
- (void)loadSchema;
- (void)backAction;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dealloc;
- (void)setupViews;

@end
