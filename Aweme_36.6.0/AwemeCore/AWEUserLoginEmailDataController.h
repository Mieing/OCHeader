@interface AWEUserLoginEmailDataController : AWEUserLoginBaseDataController

- (id)dictionaryFromJsonString:(id)a0;
- (void)isSpecialErrorHandled:(id)a0 ticketModel:(id)a1 password:(id)a2 completion:(id /* block */)a3;
- (void)showTooManyTriesAlert:(id)a0;
- (unsigned long long)errorType:(id)a0;
- (void)bindSafeMobile:(id)a0 commercialAccountType:(id)a1 password:(id)a2;
- (id)stringWithError:(id)a0 keyString:(id)a1;
- (void)verifySafeMobile:(id)a0 phoneNumber:(id)a1 countryCode:(id)a2 password:(id)a3;
- (void)handleSecondaryVerificationError:(id)a0 completion:(id /* block */)a1;
- (id)stringFromExtraDic:(id)a0 keyString:(id)a1;
- (void)showForget;
- (void)showErrorDialog:(id)a0;
- (void)realNameAuthentication:(id)a0 verifyType:(long long)a1 completion:(id /* block */)a2;
- (void)requireLoginWithEmail:(id)a0 password:(id)a1;

@end
