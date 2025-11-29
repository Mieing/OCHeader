@class NSString;

@interface AWEACCUserServiceImpl : NSObject <AWEUserMessage, ACCUserServiceProtocol, ACCUserServiceProtocolD>

@property (nonatomic) BOOL didTrackHMUserResult;
@property (nonatomic) BOOL isUserLogin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)requireLogin:(id /* block */)a0;
- (void)requireLogin:(id /* block */)a0 withTrackerInformation:(id)a1;
- (void)requireLoginWithContext:(id)a0 completion:(id /* block */)a1;
- (BOOL)isCurrentLoginUserWithID:(id)a0;
- (id)bindedPhoneCountryCode;
- (id)recentLoginedUserIdListWithCountLimit:(id)a0;
- (void)getUserProfileWithID:(id)a0 completion:(id /* block */)a1;
- (BOOL)isChildMode;
- (BOOL)isHMRegionUser;
- (void)requireLoginAdaptTeenMode:(id /* block */)a0 withTrackerInformation:(id)a1;
- (id)currentLoginUserModel;
- (void)getUserProfileWithID:(id)a0 secUserID:(id)a1 completion:(id /* block */)a2;
- (void)syncUser:(id /* block */)a0;
- (void)cleanUserCache;
- (void)switchUserWithCompletion:(id /* block */)a0;
- (id)init;
- (void)dealloc;
- (BOOL)isLogin;
- (BOOL)isNewUser;

@end
