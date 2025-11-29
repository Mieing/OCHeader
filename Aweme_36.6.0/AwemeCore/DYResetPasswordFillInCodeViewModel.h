@class NSString, NSTimer, DYRouterModel;

@interface DYResetPasswordFillInCodeViewModel : AWEBaseViewModel

@property (copy) NSString *errorMessage;
@property BOOL enableNextButton;
@property long long curCountDown;
@property (retain) NSString *password;
@property (retain) NSTimer *timer;
@property BOOL isResend;
@property (retain) DYRouterModel *context;
@property (retain, nonatomic) NSString *passwordType;

- (BOOL)inLoginProcedure;
- (void)setCountDownAndTimer:(long long)a0;
- (void)countDownAction:(id)a0;
- (id)initWithPassword:(id)a0 context:(id)a1;
- (void)handleNextAction:(id)a0;
- (void)handleCaptchaChange:(id)a0;
- (void)trackError:(id)a0 api:(id)a1;
- (void)handleSendCode;
- (void)setupTrackParams;
- (void)trackResend;
- (void)trackPasswordEvent:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)fetchData;
- (void)dealloc;

@end
