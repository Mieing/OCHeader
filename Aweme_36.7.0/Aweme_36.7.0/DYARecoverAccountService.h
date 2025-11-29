@interface DYARecoverAccountService : NSObject

+ (void)p_startCheckWithString:(id)a0 findWay:(long long)a1 completion:(id /* block */)a2;
+ (void)startCheckEmail:(id)a0 completion:(id /* block */)a1;
+ (void)startCheckUserName:(id)a0 completion:(id /* block */)a1;
+ (void)startCheckSafety:(id)a0 scene:(long long)a1 completion:(id /* block */)a2;
+ (void)startCheckSafetyWithNotLoginTicket:(id)a0 completion:(id /* block */)a1;
+ (void)startCheckPhoneNumberUnsableWithLoginPhoneNumber:(id)a0 completion:(id /* block */)a1;

@end
