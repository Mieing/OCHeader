@interface NHAccountPhoneRegistration : NSObject

+ (void)_handleUserInfoChange:(id)a0 error:(id)a1 sendMessageBlock:(id /* block */)a2 finishBlock:(id /* block */)a3;
+ (id)sharedInstance;

- (void)POST:(id)a0 parameters:(id)a1 model:(Class)a2 completion:(id /* block */)a3;
- (void)GET:(id)a0 parameters:(id)a1 model:(Class)a2 completion:(id /* block */)a3;
- (void)startSendCodeRequest:(id)a0 finishBlock:(id /* block */)a1;
- (void)startValidateWithCode:(id)a0 captcha:(id)a1 sharkTicket:(id)a2 type:(long long)a3 ticketBlock:(id /* block */)a4;
- (void)GET:(id)a0 parameters:(id)a1 completion:(id /* block */)a2;
- (void)POST:(id)a0 parameters:(id)a1 completion:(id /* block */)a2;

@end
