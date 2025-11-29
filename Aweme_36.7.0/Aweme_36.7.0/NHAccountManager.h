@interface NHAccountManager : NSObject

@property (nonatomic) BOOL isForLogin;
@property (nonatomic) unsigned long long platform;

+ (void)_handleUserInfo:(id)a0 finishBlock:(id /* block */)a1;
+ (id)sharedInstance;

- (void)requestLogin:(unsigned long long)a0 middleCheck:(id /* block */)a1 completion:(id /* block */)a2;
- (void)requestLoginWithSecondaryVerification:(id)a0 platformName:(unsigned long long)a1 middleCheck:(id /* block */)a2 completion:(id /* block */)a3;
- (void)handleLoginSuccess:(unsigned long long)a0 verificationInfo:(id)a1 params:(id)a2 completion:(id /* block */)a3;
- (void)handleNetworkResponse:(id)a0 platformName:(unsigned long long)a1 error:(id)a2 completion:(id /* block */)a3;
- (void)handleFailure:(unsigned long long)a0 completion:(id /* block */)a1 error:(id)a2;
- (void)handleCancel:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)handleBindSuccess:(unsigned long long)a0 params:(id)a1 completion:(id /* block */)a2;
- (void)requestBind:(unsigned long long)a0 verifyType:(long long)a1 ticket:(id)a2 OAuthInfo:(id)a3 completion:(id /* block */)a4;
- (id)getCurrentAppleUserId;
- (void)requestLogin:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)requestBind:(unsigned long long)a0 completion:(id /* block */)a1;

@end
