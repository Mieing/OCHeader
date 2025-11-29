@class MMPatternLockTipsView, WCBizLoadingView, NSString, MMUIButton, MMPatternLockView;
@protocol MMPatternLockViewControllerDelegate;

@interface MMPatternLockViewController : MMUIViewController <MMPatternLockViewDelegate>

@property (weak, nonatomic) id<MMPatternLockViewControllerDelegate> delegate;
@property (nonatomic) long long curScene;
@property (retain, nonatomic) MMPatternLockView *lockView;
@property (retain, nonatomic) MMPatternLockView *confirmLockView;
@property (retain, nonatomic) MMPatternLockTipsView *tipsView;
@property (retain, nonatomic) MMPatternLockTipsView *confirmTipsView;
@property (retain, nonatomic) MMUIButton *forgetPwdBtn;
@property (retain, nonatomic) WCBizLoadingView *loadingView;
@property (nonatomic) BOOL isConfirm;
@property (retain, nonatomic) NSString *firstResult;
@property (retain, nonatomic) NSString *confirmResult;
@property (nonatomic) long long retryTime;
@property (nonatomic) BOOL isOpSuccess;
@property (nonatomic) BOOL isNeedSvrVerify;
@property (nonatomic) BOOL isBlock2Root;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)navigationBarBackgroundColor;
- (void)setupWithData:(id)a0;
- (void)initData;
- (void)initLoadingView;
- (void)initView;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePoped:(BOOL)a0;
- (void)viewWillBePoped:(BOOL)a0;
- (void)applicationWillTerminate:(id)a0;
- (void)didReceiveMemoryWarning;
- (void)setupNewPatternLockPwdSuccess;
- (void)setupNewPatternLockPwdFail;
- (void)verifyPatternLockPwdCorrect:(id)a0;
- (void)verifyPatternLockPwdError;
- (void)verifyPatternLockPwdFail;
- (void)modifyPatternLockPwdSuccess;
- (void)modifyPatternLockPwdFail;
- (void)closePatternLockPwdSuccess;
- (void)closePatternLockPwdFail;
- (id)getDisplayTitle;
- (void)onForgetPwdBtnPress:(id)a0;
- (void)showToastTipsViewWithText:(id)a0 isSuccess:(BOOL)a1;
- (void)handlePatternLockViewConfirmTransform;
- (void)handlePatternLockViewConfirmErrorTransform;
- (void)handleDidGetPatternPwd:(id)a0;
- (void)onPwdErrorAlertViewClickCancel;
- (void)onAlertViewClickCancel;
- (void)onAlertViewClickForgetPwd;
- (void)resetViewPosition;
- (void)onOpCancel;
- (void)onOpSucess;
- (void)onPwdErrorBeyondLimit;
- (void)lockView:(id)a0 didEndWithPattern:(id)a1;
- (BOOL)isContinueWhenlockViewResultInValid:(id)a0;
- (void)onCancelPress:(id)a0;
- (void)fadeShowEnd;
- (void).cxx_destruct;

@end
