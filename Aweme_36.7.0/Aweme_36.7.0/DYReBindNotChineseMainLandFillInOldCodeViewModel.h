@class NSString, DYRouterModel, NSTimer;

@interface DYReBindNotChineseMainLandFillInOldCodeViewModel : AWEBaseViewModel

@property (copy) NSString *errorMessage;
@property BOOL enableNextButton;
@property long long curCountDown;
@property BOOL shouldShowNextPage;
@property (copy) NSString *url;
@property unsigned long long alertType;
@property (retain) DYRouterModel *context;
@property (retain) NSTimer *timer;

- (void)setCountDownAndTimer:(long long)a0;
- (void)countDownAction:(id)a0;
- (void)handleNextAction:(id)a0;
- (void)handleCaptchaChange:(id)a0;
- (void)trackError:(id)a0 api:(id)a1;
- (void)handleSendCode;
- (id)getTicketModel;
- (void)handlePhoneNotUsable;
- (BOOL)hasThirdPartyLogin;
- (void)rebindinH5:(id)a0;
- (void)checkHasPassword:(id)a0;
- (void)trackSecondNumberResult:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)init;
- (void)fetchData;
- (void)dealloc;

@end
