@class NSString, DYRouterModel, NSTimer;

@interface DYReBindHighRiskFillInCodeViewModel : AWEBaseViewModel

@property (copy) NSString *errorMessage;
@property BOOL enableNextButton;
@property long long curCountDown;
@property BOOL shouldDismissViewController;
@property (retain) DYRouterModel *context;
@property (retain) NSTimer *timer;
@property BOOL isResend;
@property (readonly) BOOL bindSuccess;

- (void)setCountDownAndTimer:(long long)a0;
- (void)countDownAction:(id)a0;
- (void)handleNextAction:(id)a0;
- (void)handleCaptchaChange:(id)a0;
- (void)handleSendCode;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)init;
- (void)fetchData;
- (void)dealloc;

@end
