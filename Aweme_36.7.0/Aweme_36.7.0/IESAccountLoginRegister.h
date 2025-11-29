@interface IESAccountLoginRegister : NSObject

+ (void)emailCodeLoginWithEmail:(id)a0 code:(id)a1 extraParams:(id)a2 completion:(id /* block */)a3;
+ (void)bindMobileLoginWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)carrierCombineLoginWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)complexOneLoginWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)SMSLoginWithMobile:(id)a0 code:(id)a1 authOpposite:(BOOL)a2 useMobile:(BOOL)a3 extraParams:(id)a4 completion:(id /* block */)a5;
+ (void)validateSMSLoginWithMobile:(id)a0 maskMobile:(id)a1 extraParams:(id)a2 completion:(id /* block */)a3;
+ (void)SMSLoginWithMobile:(id)a0 hasMobileMixed:(BOOL)a1 extraParams:(id)a2 completion:(id /* block */)a3;
+ (void)mobilePasswordLoginWithMobile:(id)a0 password:(id)a1 extraParams:(id)a2 completion:(id /* block */)a3;
+ (void)upSMSLoginWithVerifyTicket:(id)a0 extraParams:(id)a1 completion:(id /* block */)a2;
+ (void)douyinAuthLoginWithAuthInfo:(id)a0 completion:(id /* block */)a1;
+ (void)thirdAuthLoginWithAuthInfo:(id)a0 completion:(id /* block */)a1;
+ (void)emailPasswordLoginWithEmail:(id)a0 password:(id)a1 extraParams:(id)a2 completion:(id /* block */)a3;
+ (void)fetchTrustUsersWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)fetchQRLoginCodeDomain:(id)a0 needLogo:(BOOL)a1 extraParams:(id)a2 completion:(id /* block */)a3;
+ (void)checkQRCodeConnectDomain:(id)a0 token:(id)a1 extraParams:(id)a2 completion:(id /* block */)a3;
+ (void)mobileSendCodeType:(long long)a0 extraParams:(id)a1 completion:(id /* block */)a2;
+ (void)emailSendCodeType:(long long)a0 email:(id)a1 extraParams:(id)a2 completion:(id /* block */)a3;
+ (void)checkRegisterAssistAccountWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)registerAssistAccountTicket:(id)a0 extraParams:(id)a1 completion:(id /* block */)a2;
+ (void)SMSLoginWithMobile:(id)a0 code:(id)a1 authOpposite:(BOOL)a2 hasMobileMixed:(BOOL)a3 useMobile:(BOOL)a4 extraParams:(id)a5 completion:(id /* block */)a6;
+ (id)buildParamsWithExtra:(id)a0 isMixMode:(BOOL)a1;
+ (void)commonPostRequestPath:(id)a0 params:(id)a1 completion:(id /* block */)a2;
+ (void)SMSLoginWithMobile:(id)a0 code:(id)a1 extraParams:(id)a2 completion:(id /* block */)a3;
+ (void)mobileSendCodeType:(long long)a0 mobile:(id)a1 extraParams:(id)a2 completion:(id /* block */)a3;

@end
