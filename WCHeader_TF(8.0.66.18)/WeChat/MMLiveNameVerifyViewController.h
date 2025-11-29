@class NSString, MMLiveTaskId, MMAcceptAgreementCommonHeadView, UIButton;
@protocol MMLiveNameVerifyViewControllerDelegate;

@interface MMLiveNameVerifyViewController : MMCPUIViewController <MMGroupLiveMgrExt, MMWebViewDelegate, MMLiveTaskMgrExt>

@property (retain, nonatomic) NSString *verifyUrl;
@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (nonatomic) long long entryType;
@property (nonatomic) BOOL isVerify;
@property (retain, nonatomic) MMAcceptAgreementCommonHeadView *nameVerifyHeadView;
@property (retain, nonatomic) UIButton *nameVerifyButton;
@property (weak, nonatomic) id<MMLiveNameVerifyViewControllerDelegate> delegate;
@property (nonatomic) BOOL needAutoRotateToPortrait;
@property (nonatomic) long long currDeviceOrientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithVerifyUrl:(id)a0 taskId:(id)a1 withEntryType:(long long)a2;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (id)navigationBarBackgroundColor;
- (long long)getCurrentOrientation;
- (void)dealloc;
- (void)intUI;
- (void)onNameVerifyButtonClicked;
- (void)onWebViewCloseAndGoNext:(id)a0 webVC:(id)a1 customClose:(BOOL *)a2;
- (void)webViewReturn:(id)a0;
- (void)onBackButtonClicked:(id)a0;
- (void)checkVerifyStatus;
- (void)onFaceVerifyFailed;
- (void)onFaceVerifySucceeded;
- (void)OnRealnameVerfitySuccessNotification:(id)a0;
- (BOOL)useWepayNameVerify;
- (void)forceRotateToPortrait;
- (void).cxx_destruct;

@end
