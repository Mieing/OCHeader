@class MMLiveVerifyAgreementProtocolView, UIView, NSString, MMLiveView, WCFinderAnimationLoadingView, UIImageView, UIButton, MMLiveVerifyAgreementCommonHeadView;
@protocol MMLiveVerifyViewControllerDelegate;

@interface MMLiveVerifyViewController : MMCPUIViewController <MMGroupLiveMgrExt, MMLiveTaskMgrExt, AVCaptureVideoDataOutputSampleBufferDelegate, MMAcceptAgreementProtocolViewDelegate, MMWebViewDelegate>

@property (weak, nonatomic) id<MMLiveVerifyViewControllerDelegate> delegate;
@property (copy, nonatomic) id /* block */ verifyCompletionBlock;
@property (retain, nonatomic) UIButton *backButton;
@property (nonatomic) unsigned int lastEventId;
@property (retain, nonatomic) UIImageView *backgroundView;
@property (retain, nonatomic) MMLiveView *liveView;
@property (retain, nonatomic) MMLiveVerifyAgreementCommonHeadView *liveVerifyHeadView;
@property (retain, nonatomic) MMLiveVerifyAgreementProtocolView *liveVerifyProtocolView;
@property (retain, nonatomic) UIButton *liveVerifyButton;
@property (retain, nonatomic) WCFinderAnimationLoadingView *animatedLoadingView;
@property (retain, nonatomic) UIView *liveVerifyButtonLoadingView;
@property (nonatomic) BOOL isAgreementChecked;
@property (nonatomic) BOOL hasCalledCompletionBlock;
@property (nonatomic) BOOL needAutoRotateToPortrait;
@property (nonatomic) long long currDeviceOrientation;
@property (nonatomic) BOOL navigationBarHiddenWhenDisappear;
@property (copy, nonatomic) id /* block */ didAppearHandleCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLiveView:(id)a0 delegate:(id)a1 andVerifyCompletionBlock:(id /* block */)a2;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (long long)getCurrentOrientation;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)useBlackStatusbar;
- (long long)preferredStatusBarStyle;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (void)dealloc;
- (void)setupVideoBlurBackground;
- (void)intUI;
- (void)startVerifyButtonLoading;
- (void)stopVerifyButtonLoading;
- (void)onBackButtonClicked;
- (void)onVerifyButtonClicked;
- (void)onLiveVerifyWithEventId:(unsigned int)a0 result:(id)a1 isVerified:(BOOL)a2 withVerifyUrl:(id)a3;
- (void)animateToFadeOut;
- (void)showAlert:(id)a0;
- (void)onProtocolLinkClicked:(id)a0;
- (void)onProtocolSelectedClicked;
- (void)forceRotateToPortrait;
- (void).cxx_destruct;

@end
