@class LSIMObserverHash, NSString;

@interface LSUserServiceImpl : NSObject <LSIMFunctionUser, AWEUserMessage>

@property (retain, nonatomic) LSIMObserverHash *observeHash;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)requireLogin:(id /* block */)a0;
- (void)notifyUserLogout;
- (void)registerUserMessage:(id)a0;
- (void)deregisterUserMessage:(id)a0;
- (id)userID;
- (void).cxx_destruct;
- (id)init;
- (id)observers;
- (BOOL)isLogin;

@end
