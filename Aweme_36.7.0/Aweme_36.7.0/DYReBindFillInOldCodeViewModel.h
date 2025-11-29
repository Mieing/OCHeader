@class NSString, DYASecurityTicketModel, DYRouterModel, NSTimer;

@interface DYReBindFillInOldCodeViewModel : AWEBaseViewModel

@property (copy) NSString *errorMessage;
@property BOOL enableNextButton;
@property long long curCountDown;
@property (copy) DYASecurityTicketModel *ticketModel;
@property (copy) NSString *url;
@property unsigned long long alertType;
@property (retain) DYRouterModel *context;
@property (retain) NSTimer *timer;
@property BOOL getCodeFinish;

- (void)setCountDownAndTimer:(long long)a0;
- (void)countDownAction:(id)a0;
- (void)handleSendCodeResend:(BOOL)a0;
- (void)handleNextAction:(id)a0;
- (void)handleCaptchaChange:(id)a0;
- (id)uidType;
- (void)trackError:(id)a0 api:(id)a1;
- (void)trackOriginBindSMSSubmitWithClickType:(id)a0;
- (void)trackOriginBindSMSResultWithClickType:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)init;
- (void)fetchData;
- (void)dealloc;

@end
