@interface DYAPasswordService : NSObject

+ (void)trackUserProtocolStatus:(BOOL)a0;
+ (void)setAccountPasswordWhenSignedIn:(id)a0 ticket:(id)a1 completion:(id /* block */)a2;
+ (void)changePassword:(id)a0 code:(id)a1 mobileType:(long long)a2 ticket:(id)a3 completion:(id /* block */)a4;
+ (void)checkPasswordStrength:(id)a0 completion:(id /* block */)a1;
+ (void)setAccountPasswordWhenSignedIn:(id)a0 completion:(id /* block */)a1;
+ (void)resetPassword:(id)a0 phoneNumber:(id)a1 code:(id)a2 completion:(id /* block */)a3;
+ (void)resetPassword:(id)a0 ticket:(id)a1 completion:(id /* block */)a2;
+ (void)resetEmailPassword:(id)a0 ticket:(id)a1 completion:(id /* block */)a2;
+ (void)resetPassword:(id)a0 ticket:(id)a1 secUid:(id)a2 isBusiness:(BOOL)a3 completion:(id /* block */)a4;
+ (void)updatePassword:(id)a0 oldPassword:(id)a1 ticket:(id)a2 completion:(id /* block */)a3;
+ (void)changePassword:(id)a0 code:(id)a1 mobileType:(long long)a2 completion:(id /* block */)a3;
+ (void)checkHasSetPassword:(id /* block */)a0;
+ (void)setOperStaffPassword:(id)a0 ticket:(id)a1 completion:(id /* block */)a2;
+ (void)changeOperStaffPassword:(id)a0 code:(id)a1 completion:(id /* block */)a2;
+ (void)resetOperStaffPassword:(id)a0 ticket:(id)a1 secUid:(id)a2 completion:(id /* block */)a3;

@end
