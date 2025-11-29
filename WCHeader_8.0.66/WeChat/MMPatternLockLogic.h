@class NSString, MMPatternLockViewController, MMUINavigationController;
@protocol MMPatternLockLogicDelegate;

@interface MMPatternLockLogic : WCPayControlLogic <WCPayPayPwdViewControllerDelegate, MMPatternLockViewControllerDelegate, MMPatternLockMgrExt>

@property (nonatomic) long long curScene;
@property (retain, nonatomic) NSString *userToken;
@property (nonatomic) BOOL isNeedOut2BizMain;
@property (retain, nonatomic) NSString *oldHash;
@property (nonatomic) BOOL isPresent;
@property (nonatomic) BOOL isCancel;
@property (retain, nonatomic) MMPatternLockViewController *lockViewController;
@property (retain, nonatomic) MMUINavigationController *enteranceViewController;
@property (weak, nonatomic) id<MMPatternLockLogicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (id)initWithPatternLockScene:(long long)a0 andDelegate:(id)a1 isPresent:(BOOL)a2;
- (void)initDataWithPatternScene:(long long)a0;
- (void)startLogic;
- (BOOL)checkIsPatternLockBlock;
- (void)showWCPayPwdViewController;
- (void)onVerifyPayPwdSuccess;
- (void)showPatternLockViewControllerIsPresnet:(BOOL)a0;
- (void)handlePatternLockSetup;
- (void)handlePatternLockForget;
- (void)handlePatternLockModify;
- (void)handlePatterLockClose;
- (void)handlePatternLockEnterance;
- (void)handlePatternLockBlock;
- (void)handlePatternLockEnterUnNeedPwd;
- (void)showGiveUpLogicAlert;
- (void)onErrorAlertViewDismiss:(id)a0;
- (void)OnAlertGiveUpLogic;
- (void)PayPwdBack;
- (void)PayPwdRightActionBack;
- (void)VerifyPayPwdNext:(id)a0;
- (void)OnVerifyPayPassword:(id)a0;
- (void)OnVerifyPayPassword:(id)a0 andRetToken:(id)a1;
- (void)onPayPasswordErrorAlertViewDismiss:(id)a0;
- (void)OnPayPasswordError:(id)a0 ErrorCount:(int)a1 LockTotalCount:(unsigned int)a2;
- (void)goBack2EnteranceViewController;
- (void)onPatternLockViewControllerDidOperateCancel;
- (void)onPatternLockViewControllerDidOperateSuccess;
- (void)onPatternLockViewControllerDidOperateError;
- (void)onPatternLockViewControllerDidForgetPwd;
- (void)onPatternLockViewControllerDidErrorBeyondLimit;
- (void)onPatternLockSetupNewWithPatternHash:(id)a0;
- (void)onPatternLockVerifyPatternLockPwdWithPatternHash:(id)a0;
- (void)onModifyPatternLockWithNewPatternHash:(id)a0;
- (void)onClosePatternLockPwdWithPatternHash:(id)a0;
- (BOOL)isNeedSvrVerify;
- (BOOL)needBlockViewControllerLeftBarbuttonItemInEnteranceScene;
- (void)onSetupNewPatternLockPwdSuccess;
- (void)onSetupNewPatternLockPwdFail;
- (void)onClosePatternLockPwdSuccess;
- (void)onClosePatternLockPwdFail;
- (void)onModifyPatternLockPwdSuccess;
- (void)onModifyPatternLockPwdFail;
- (void)onVerifyPatternLockPwdCorrect;
- (void)onVerifyPatternLockPwdError;
- (void)onVerifyPatternLockPwdFail;
- (void).cxx_destruct;

@end
