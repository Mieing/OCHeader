@class NSMutableDictionary, AWEPSSOSecondaryVerificationInfo;

@interface AWEAccountUtils : NSObject

@property (retain, nonatomic) NSMutableDictionary *captchaValueMap;
@property (retain, nonatomic) NSMutableDictionary *timeRemainMap;
@property (retain, nonatomic) NSMutableDictionary *timerMap;
@property (retain, nonatomic) NSMutableDictionary *retryTimeMap;
@property (retain, nonatomic) NSMutableDictionary *startTimeMap;
@property (retain, nonatomic) NSMutableDictionary *ticketsMap;
@property (retain, nonatomic) NSMutableDictionary *verifyTypeMap;
@property (retain, nonatomic) NSMutableDictionary *unusableMobileTicketMap;
@property (retain, nonatomic) NSMutableDictionary *OAuthInfoMap;
@property (retain, nonatomic) AWEPSSOSecondaryVerificationInfo *verificationInfo;
@property (nonatomic) BOOL isHUDShowing;

+ (void)showCaptchaAlertWithCaptchaImage:(id)a0 context:(unsigned long long)a1 confirm:(id /* block */)a2 cancel:(id /* block */)a3;
+ (void)showConfirmAlertWithMessage:(id)a0;
+ (void)showCaptchaAlertWithCaptchaImage:(id)a0 confirm:(id /* block */)a1 cancel:(id /* block */)a2;
+ (void)showInvalidPhoneNumberToast;
+ (id)extractEmailSuffixFrom:(id)a0;
+ (void)handleError:(id)a0;
+ (id)sharedInstance;

- (id)_captchaValueForContext:(unsigned long long)a0;
- (id)_ticketForContext:(unsigned long long)a0;
- (id)_unusableMobileTicketForContext:(unsigned long long)a0;
- (long long)_sendCodeToPhoneRegistrationType:(unsigned long long)a0;
- (long long)_sceneToPhoneRegistrationScene:(unsigned long long)a0;
- (unsigned long long)_sendCodeStatusWithError:(id)a0 captcha:(id)a1;
- (void)_setCaptchaValue:(id)a0 context:(unsigned long long)a1;
- (void)startSendCodeWithPhoneNumber:(id)a0 type:(unsigned long long)a1 scene:(unsigned long long)a2 context:(unsigned long long)a3 completion:(id /* block */)a4;
- (void)_startTimerWithDuration:(id)a0 context:(unsigned long long)a1;
- (void)startValidateWithoutPhoneNumber:(id)a0 context:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)_setTicket:(id)a0 context:(unsigned long long)a1;
- (void)_stopTimer:(unsigned long long)a0;
- (void)startValidateWithCode:(id)a0 context:(unsigned long long)a1 type:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)_timerCallback:(id)a0;
- (void)_setTimer:(id)a0 context:(unsigned long long)a1;
- (void)_setTimeRemain:(unsigned long long)a0 context:(unsigned long long)a1;
- (void)_setRetryTime:(unsigned long long)a0 context:(unsigned long long)a1;
- (void)_setStartTime:(double)a0 context:(unsigned long long)a1;
- (id)_timerForContext:(unsigned long long)a0;
- (unsigned long long)_timeRemainForContext:(unsigned long long)a0;
- (unsigned long long)_retryTimeForContext:(unsigned long long)a0;
- (long long)_sceneToEmailRegisterationScene:(unsigned long long)a0;
- (void)_setUnusableMobileTicket:(id)a0 context:(unsigned long long)a1;
- (void).cxx_destruct;

@end
