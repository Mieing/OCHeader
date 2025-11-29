@interface DYCreateSubAccountService : NSObject

+ (void)updateCurrentUserWithPassportUser:(id)a0 retryCount:(long long)a1 completion:(id /* block */)a2;
+ (void)checkBeforeRegister:(id /* block */)a0;
+ (void)assistMobileRegisterWithTicket:(id)a0 completion:(id /* block */)a1;

@end
