@class NSString;

@interface IESECUserServiceImpl : NSObject <AWEUserMessage, IESECUserService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isTeenMode;
+ (id)currentLoginUser;
+ (void)requireLogin:(id /* block */)a0;
+ (void)followUser:(id)a0 referString:(id)a1 channelID:(long long)a2 completion:(id /* block */)a3;
+ (BOOL)useTTAccountSDKToLogin;
+ (id)sharedInstance;
+ (BOOL)isLogin;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)registerAWELoginChange;
- (id)init;
- (void)dealloc;

@end
