@interface DYABindService : NSObject

+ (id)passportUserForUpdate:(id)a0;
+ (unsigned long long)_platformTransform:(unsigned long long)a0;
+ (void)startBindMobile:(id)a0 code:(id)a1 completion:(id /* block */)a2;
+ (void)startBindMobile:(id)a0 code:(id)a1 ticket:(id)a2 completion:(id /* block */)a3;
+ (void)startBindSafeMobile:(id)a0 code:(id)a1 ticket:(id)a2 needUpdateUser:(BOOL)a3 completion:(id /* block */)a4;
+ (void)startChangeBindMobile:(id)a0 code:(id)a1 ticket:(id)a2 completion:(id /* block */)a3;
+ (void)startChangeBindSafeMobile:(id)a0 code:(id)a1 ticket:(id)a2 completion:(id /* block */)a3;
+ (void)startChangeBindChinesePhoneWithPhoneNumber:(id)a0 code:(id)a1 ticket:(id)a2 params:(id)a3 completion:(id /* block */)a4;
+ (void)startOneKeyBind:(id)a0 completion:(id /* block */)a1;
+ (void)startOneKeyBind:(id)a0 ticket:(id)a1 completion:(id /* block */)a2;
+ (void)startBindLogin:(id)a0 code:(id)a1 password:(id)a2 ticket:(id)a3 completion:(id /* block */)a4;
+ (void)startBindLoginWithCarrier:(long long)a0 token:(id)a1 ticket:(id)a2 completion:(id /* block */)a3;
+ (void)startBindEmail:(id)a0 code:(id)a1 completion:(id /* block */)a2;
+ (void)startChangeBindEmail:(id)a0 code:(id)a1 ticket:(id)a2 completion:(id /* block */)a3;
+ (void)startBindEmailAndGetTicketWithEmail:(id)a0 code:(id)a1 completion:(id /* block */)a2;
+ (void)startChangeBindEmailAndGetTicketWithEmail:(id)a0 code:(id)a1 completion:(id /* block */)a2;
+ (void)startBindThird:(unsigned long long)a0 completion:(id /* block */)a1;
+ (void)startUnbindThird:(unsigned long long)a0 completion:(id /* block */)a1;
+ (void)unBindWithTicket:(id)a0 code:(id)a1 completion:(id /* block */)a2;
+ (void)needBindMobile:(id /* block */)a0;
+ (void)unBindOldUserMobileWithUids:(id)a0 code:(id)a1 scene:(id)a2 completion:(id /* block */)a3;
+ (void)queryVerifyWaysWithCompletion:(id /* block */)a0;
+ (void)startChangeOperStaffBindMobile:(id)a0 code:(id)a1 ticket:(id)a2 completion:(id /* block */)a3;

@end
