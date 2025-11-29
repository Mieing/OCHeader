@interface TTAccountEmailRegistration : NSObject

+ (id)validateRegisterWithEmail:(id)a0 emailCode:(id)a1 emailCodeType:(long long)a2 password:(id)a3 emailLogicType:(long long)a4 extraParams:(id)a5 completion:(id /* block */)a6;
+ (id)checkEmailRegistedWithEmail:(id)a0 captcha:(id)a1 completion:(id /* block */)a2;
+ (id)changePasswordByEmailWithNewPassword:(id)a0 ticket:(id)a1 completion:(id /* block */)a2;
+ (id)resetPasswordWithEmail:(id)a0 password:(id)a1 code:(id)a2 extraParams:(id)a3 completion:(id /* block */)a4;
+ (id)resetPasswordWithEmailAndLogin:(id)a0 password:(id)a1 code:(id)a2 ticket:(id)a3 extraParams:(id)a4 completion:(id /* block */)a5;
+ (id)startValidateEmailRegister:(id)a0 emailCode:(id)a1 emailCodeType:(long long)a2 captchaString:(id)a3 extraParams:(id)a4 completion:(id /* block */)a5;
+ (id)startRegisterWithEmail:(id)a0 emailCode:(id)a1 password:(id)a2 emailCodeType:(long long)a3 captchaString:(id)a4 extraParams:(id)a5 completion:(id /* block */)a6;
+ (id)startRegisterWithEmail:(id)a0 emailCode:(id)a1 password:(id)a2 captcha:(id)a3 completion:(id /* block */)a4;
+ (id)startRegisterV2WithEmail:(id)a0 emailCode:(id)a1 password:(id)a2 captcha:(id)a3 recaptchaToken:(id)a4 extra:(id)a5 completion:(id /* block */)a6;
+ (id)startGetEmailCodeWithEmail:(id)a0 emailCodeType:(long long)a1 emailLogicType:(long long)a2 password:(id)a3 jumpUrl:(id)a4 captcha:(id)a5 extraParams:(id)a6 completion:(id /* block */)a7;
+ (id)startTicketrRegisterWithEmail:(id)a0 ticket:(id)a1 password:(id)a2 emailCodeType:(long long)a3 emailLogicType:(long long)a4 completion:(id /* block */)a5;
+ (id)startValidateEmailRegister:(id)a0 emailCode:(id)a1 emailCodeType:(long long)a2 captchaString:(id)a3 completion:(id /* block */)a4;
+ (id)startRegisterWithEmail:(id)a0 emailCode:(id)a1 emailCodeType:(long long)a2 captchaString:(id)a3 completion:(id /* block */)a4;
+ (id)startBindWithEmail:(id)a0 emailCode:(id)a1 emailCodeType:(long long)a2 captchaString:(id)a3 completion:(id /* block */)a4;
+ (id)startBindWithEmail:(id)a0 password:(id)a1 completion:(id /* block */)a2;
+ (id)startVerifyEmailWithCode:(id)a0 emailCodeType:(long long)a1 completion:(id /* block */)a2;
+ (id)startChangeEmailWithNewEmail:(id)a0 verifyCode:(id)a1 ticket:(id)a2 completion:(id /* block */)a3;

@end
