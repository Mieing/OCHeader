@class DYPhoneNumberModel;

@interface AWEUserLoginSMSDataController : AWEUserLoginBaseDataController

@property (retain, nonatomic) DYPhoneNumberModel *phoneModel;

- (void)handleVerificationCodeLoginMessage:(id)a0;
- (void)handleSendCodeError:(id)a0 model:(id)a1 isResend:(BOOL)a2 phoneModel:(id)a3;
- (void)handleSendVoiceCodeError:(id)a0 phoneModel:(id)a1;
- (void)requestSMSLoginPhoneModel:(id)a0 verificationCode:(id)a1 ticketModel:(id)a2 extraDict:(id)a3 completion:(id /* block */)a4;
- (id)smsLoginAdditionalTrackParams:(BOOL)a0;
- (void)handleSMSLoginError:(id)a0 phoneModel:(id)a1 ticket:(id)a2;
- (void)handleLoginSuccessAccount:(id)a0 phoneModel:(id)a1 isValidateLogin:(BOOL)a2 ticket:(id)a3;
- (void)trackMobileVerifyResult:(unsigned long long)a0 error:(id)a1;
- (void)requestMobileAuth:(id)a0 phoneModel:(id)a1 completion:(id /* block */)a2;
- (void)handleValidateSMSLoginError:(id)a0 phoneModel:(id)a1 ticket:(id)a2 completion:(id /* block */)a3;
- (void)trackSendSMS:(id)a0 isResend:(BOOL)a1 trackParams:(id)a2;
- (void)requestSendCodePhoneModel:(id)a0 isResend:(BOOL)a1 completion:(id /* block */)a2;
- (void)requestSendCodeParams:(id)a0 phoneModel:(id)a1 isResend:(BOOL)a2 completion:(id /* block */)a3;
- (void)requestSendVoiceCodePhoneModel:(id)a0 completion:(id /* block */)a1;
- (void)requestSendVoiceCodePhoneModel:(id)a0 ticketModel:(id)a1 extraDict:(id)a2 completion:(id /* block */)a3;
- (void)requestSMSLoginPhoneModel:(id)a0 verificationCode:(id)a1 completion:(id /* block */)a2;
- (void)requestValidateSMSLoginPhoneModel:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
