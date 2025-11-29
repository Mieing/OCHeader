@interface TTAccountPhoneRegistration : NSObject

+ (id)checkRegisteredWithPhone:(id)a0 completion:(id /* block */)a1;
+ (id)startGetSMSCodeWithPhone:(id)a0 captcha:(id)a1 SMSCodeType:(long long)a2 unbindExist:(BOOL)a3 completion:(id /* block */)a4;
+ (id)startGetSMSCodeWithPhone:(id)a0 captcha:(id)a1 SMSCodeType:(long long)a2 extraInfo:(id)a3 completion:(id /* block */)a4;
+ (id)startGetSMSCodeWithPhone:(id)a0 oldMobile:(id)a1 captcha:(id)a2 SMSCodeType:(long long)a3 unbindExist:(BOOL)a4 completion:(id /* block */)a5;
+ (id)startGetSMSCodeWithPhone:(id)a0 oldMobile:(id)a1 captcha:(id)a2 SMSCodeType:(long long)a3 unbindExist:(BOOL)a4 extraParams:(id)a5 completion:(id /* block */)a6;
+ (id)startGetSMSCodeWithOldPhone:(id)a0 newPhone:(id)a1 captcha:(id)a2 SMSCodeType:(long long)a3 unbindExist:(BOOL)a4 completion:(id /* block */)a5;
+ (id)startAccountLogin:(id)a0 password:(id)a1 captcha:(id)a2 accountType:(long long)a3 extraParams:(id)a4 completion:(id /* block */)a5;
+ (id)startLoginWithPhone:(id)a0 password:(id)a1 captcha:(id)a2 extraParams:(id)a3 completion:(id /* block */)a4;
+ (id)startQuickLoginWithPhone:(id)a0 SMSCode:(id)a1 captcha:(id)a2 registerNewUser:(BOOL)a3 extraParams:(id)a4 jsonObjCompletion:(id /* block */)a5;
+ (id)startValidateSMSCode:(id)a0 SMSCodeType:(long long)a1 captchaString:(id)a2 needTicket:(int)a3 scene:(int)a4 completion:(id /* block */)a5;
+ (id)startValidateSMSCode:(id)a0 SMSCodeType:(long long)a1 captchaString:(id)a2 needTicket:(int)a3 scene:(int)a4 extraParams:(id)a5 completion:(id /* block */)a6;
+ (id)startResetPasswordWithPhone:(id)a0 SMSCode:(id)a1 password:(id)a2 captcha:(id)a3 ticket:(id)a4 extraParams:(id)a5 completionWithJsonObj:(id /* block */)a6;
+ (id)startModifyPasswordWithNewPassword:(id)a0 SMSCode:(id)a1 ticket:(id)a2 captcha:(id)a3 completion:(id /* block */)a4;
+ (id)startChangeUserPhoneWithModel:(id)a0 completion:(id /* block */)a1;
+ (id)startBindPhone:(id)a0 SMSCode:(id)a1 password:(id)a2 captcha:(id)a3 unbind:(BOOL)a4 extraParams:(id)a5 completion:(id /* block */)a6;
+ (id)startRegisterWithPhone:(id)a0 SMSCode:(id)a1 password:(id)a2 captcha:(id)a3 completion:(id /* block */)a4;
+ (id)startAccountLogin:(id)a0 password:(id)a1 captcha:(id)a2 accountType:(long long)a3 completion:(id /* block */)a4;
+ (id)startLoginWithPhone:(id)a0 password:(id)a1 captcha:(id)a2 completion:(id /* block */)a3;
+ (id)startTokenLoginWithPhone:(id)a0 token:(id)a1 captcha:(id)a2 completion:(id /* block */)a3;
+ (id)startQuickLoginWithPhone:(id)a0 SMSCode:(id)a1 captcha:(id)a2 jsonObjCompletion:(id /* block */)a3;
+ (id)startQuickLoginOnlyWithPhone:(id)a0 SMSCode:(id)a1 captcha:(id)a2 jsonObjCompletion:(id /* block */)a3;
+ (id)startQuickLoginOnlyContinueWithPhone:(id)a0 smsCodeKey:(id)a1 extraParams:(id)a2 jsonObjCompletion:(id /* block */)a3;
+ (id)startValidateSMSCode:(id)a0 SMSCodeType:(long long)a1 captchaString:(id)a2 completion:(id /* block */)a3;
+ (id)startValidateSMSCode:(id)a0 SMSCodeType:(long long)a1 captchaString:(id)a2 needTicket:(int)a3 completion:(id /* block */)a4;
+ (id)startSetPasswordWithPassword:(id)a0 captcha:(id)a1 completion:(id /* block */)a2;
+ (id)startResetPasswordWithPhone:(id)a0 SMSCode:(id)a1 password:(id)a2 captcha:(id)a3 completionWithJsonObj:(id /* block */)a4;
+ (id)startModifyPasswordWithNewPassword:(id)a0 SMSCode:(id)a1 captcha:(id)a2 completion:(id /* block */)a3;
+ (id)startModifyPasswordWithNewPassword:(id)a0 ticket:(id)a1 captcha:(id)a2 completion:(id /* block */)a3;
+ (id)startChangeUserPhone:(id)a0 SMSCode:(id)a1 captcha:(id)a2 completion:(id /* block */)a3;
+ (id)startChangeUserPhone:(id)a0 ticket:(id)a1 SMSCode:(id)a2 captcha:(id)a3 completion:(id /* block */)a4;
+ (id)startChangeUserPhone:(id)a0 ticket:(id)a1 SMSCode:(id)a2 captcha:(id)a3 customParams:(id)a4 completion:(id /* block */)a5;
+ (id)startRefreshCaptchaWithCompletion:(id /* block */)a0;
+ (id)startBindPhone:(id)a0 SMSCode:(id)a1 password:(id)a2 captcha:(id)a3 unbind:(BOOL)a4 completion:(id /* block */)a5;
+ (id)startUnbindPhoneWithSMSCode:(id)a0 captcha:(id)a1 completion:(id /* block */)a2;
+ (id)startBindAndLogingWithPhonenumber:(id)a0 SMSCode:(id)a1 profileKey:(id)a2 SMSCodeType:(long long)a3 captcha:(id)a4 extraParams:(id)a5 completion:(id /* block */)a6;
+ (id)startCancelLogoutWithToken:(id)a0 completion:(id /* block */)a1;
+ (id)startCheckPhoneIsUseableWithModel:(id)a0 completion:(id /* block */)a1;
+ (id)startFetchAvailableWaysWithModel:(id)a0 completion:(id /* block */)a1;
+ (id)startAccountVerifyWithModel:(id)a0 completion:(id /* block */)a1;
+ (id)startGetSMSCodeWithModel:(id)a0 completion:(id /* block */)a1;
+ (id)startGetSMSCodeWithModel:(id)a0 jsonCompletion:(id /* block */)a1;
+ (id)startgenerateTicketByPhoneWithModel:(id)a0 completion:(id /* block */)a1;
+ (id)startloginContinueWithMobile:(id)a0 ticket:(id)a1 completion:(id /* block */)a2;
+ (id)startCheckHasSetPasswordWithModel:(id)a0 completion:(id /* block */)a1;
+ (id)startCheckMobileCodeWithModel:(id)a0 completion:(id /* block */)a1;

@end
