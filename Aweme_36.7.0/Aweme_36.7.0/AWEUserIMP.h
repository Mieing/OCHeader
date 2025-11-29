@class NSString;

@interface AWEUserIMP : HTSService <AWEUserInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)login:(id /* block */)a0;
- (void)login:(id /* block */)a0 withTrackerInformation:(id)a1;
- (void)trackSource:(id)a0 position:(id)a1;
- (BOOL)isConfirmUserProtocol;
- (void)syncUser:(id /* block */)a0;
- (void)logout;
- (id)sessionID;
- (id)currentUser;
- (BOOL)isCurrentUser:(id)a0;
- (BOOL)isLogin;

@end
