@interface TTAccountMulticastDispatcher : NSObject

+ (void)dispatchAccountGetUserInfoWithBisectBlock:(id /* block */)a0;
+ (void)dispatchAccountLoginSuccess:(id)a0 platform:(id)a1 reason:(long long)a2 bisectBlock:(id /* block */)a3;
+ (void)dispatchAccountProfileChanged:(id)a0 error:(id)a1 bisectBlock:(id /* block */)a2;
+ (void)dispatchAccountLogoutAuthPlatform:(id)a0 error:(id)a1 bisectBlock:(id /* block */)a2;
+ (void)dispatchAccountLogoutInScene:(long long)a0 bisectBlock:(id /* block */)a1;
+ (void)dispatchAccountSessionExpirationWithUser:(id)a0 error:(id)a1 bisectBlock:(id /* block */)a2;
+ (void)dispatchAccountSDKFetchLoginWithJson:(id)a0 response:(id)a1 callbackSchema:(id)a2 completion:(id /* block */)a3;
+ (void)dispatchAccountSessionExpired:(id)a0 bisectBlock:(id /* block */)a1;
+ (void)dispatchAccountLoginSuccess:(id)a0 platform:(id)a1 reason:(long long)a2 bisectBlock:(id /* block */)a3 wait:(BOOL)a4;
+ (void)dispatchAccountLoginAuthPlatform:(id)a0 error:(id)a1 bisectBlock:(id /* block */)a2;
+ (void)dispatchAccountExpireAuthPlatform:(id)a0 error:(id)a1 bisectBlock:(id /* block */)a2;
+ (void)dispatchAccountSDKFetchLoginWithJson:(id)a0 callbackSchema:(id)a1 completion:(id /* block */)a2;

@end
