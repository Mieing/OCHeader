@class NSString, NSTimer, DYRouterModel;

@interface DYReBindFillInNewCodeViewModel : AWEBaseViewModel

@property (copy) NSString *errorMessage;
@property BOOL enableNextButton;
@property long long curCountDown;
@property (retain) NSTimer *timer;
@property (retain) DYRouterModel *context;
@property BOOL showResetPasswordPage;
@property (retain, nonatomic) NSString *clickType;
@property BOOL isSecondChance;

- (void)setCountDownAndTimer:(long long)a0;
- (void)countDownAction:(id)a0;
- (void)trackBindSamePersonCheck;
- (void)handleSendCodeResend:(BOOL)a0;
- (void)handleNextAction:(id)a0;
- (void)handleCaptchaChange:(id)a0;
- (void)trackBindResult:(id)a0;
- (id)uidType;
- (BOOL)isSafeMobileForNonBusinessAccount;
- (void)trackBindSubmitWithClickType:(id)a0;
- (void)trackError:(id)a0 api:(id)a1;
- (void)changeOperStaffBindMobileWithCode:(id)a0;
- (void)__showHumanReviewAlertDialog:(id)a0 error:(id)a1;
- (void)showRebindSuccessToastIsSafeMobile:(BOOL)a0;
- (id)teaCommonParams;
- (void)trackBundlingResult:(id)a0;
- (void)__trackHumanReviewAlertDialogShow;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)init;
- (void)fetchData;
- (void)dealloc;
- (long long)codeType;

@end
