@class NSString, NSTimer, DYRouterModel;

@interface DYBindFillInCodeViewModel : AWEBaseViewModel

@property (copy) NSString *errorMessage;
@property BOOL enableNextButton;
@property long long curCountDown;
@property (retain) NSTimer *timer;
@property (retain) DYRouterModel *context;

- (void)setCountDownAndTimer:(long long)a0;
- (void)countDownAction:(id)a0;
- (void)trackClickBindWithClickType:(id)a0;
- (void)handleSendCodeResend:(BOOL)a0;
- (void)handleNextAction:(id)a0;
- (void)handleCaptchaChange:(id)a0;
- (void)trackSendCodeResult:(id)a0;
- (void)showBindSuccessToast;
- (void)trackBindSuccess;
- (void)trackBindResult:(id)a0;
- (id)uidType;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)init;
- (void)fetchData;
- (void)dealloc;

@end
