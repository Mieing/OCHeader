@interface AWEUserLoginEmailCodeDataController : AWEUserLoginBaseDataController

- (void)handleLoginError:(id)a0 ticket:(id)a1;
- (void)handleSendCodeError:(id)a0 model:(id)a1 isResend:(BOOL)a2 email:(id)a3;
- (void)handleLoginSuccessAccount:(id)a0 isValidateLogin:(BOOL)a1 ticket:(id)a2;
- (void)requestSendCodeEmail:(id)a0 isResend:(BOOL)a1 completion:(id /* block */)a2;
- (void)requireLoginWithEmail:(id)a0 code:(id)a1;

@end
