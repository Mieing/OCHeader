@class NSString;

@interface CGAuthEventComponent : CGObject <CGAuthEventComponentProtocol>

@property (copy, nonatomic) NSString *token;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)shouldLoadByItem:(id)a0 cloudPlayer:(id)a1;

- (void)requestBusinessConfig;
- (void)requestUserAuthorizedWithAuthCheck:(BOOL)a0 callback:(id /* block */)a1;
- (void)completeUserRealNameAuthWithIdentityName:(id)a0 identityNumber:(id)a1 callback:(id /* block */)a2;
- (void)requestAuthInfoWithCompletion:(id /* block */)a0;
- (void)completeAuthWithUserEdit:(id)a0 businessResult:(long long)a1 authCode:(id)a2 authMessage:(id)a3 needCheckAuth:(BOOL)a4 callback:(id /* block */)a5;
- (id)initWithItem:(id)a0 cloudPlayer:(id)a1;
- (void)_handleLocalAuthInfo:(id)a0;
- (void)_callbackBusinessConfig:(id)a0;
- (void)_sendAuthResultWithResult:(long long)a0 message:(id)a1 clientKey:(id)a2;
- (void).cxx_destruct;

@end
