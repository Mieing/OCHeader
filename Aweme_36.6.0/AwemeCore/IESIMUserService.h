@class NSString;

@interface IESIMUserService : HTSService <IESIMUserService, AWEUserMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)didFinishUpdateCurrentFullUserForReason:(unsigned long long)a0;
- (void)showLogin;
- (id)currentLoginUser;
- (BOOL)isCurrentLoginUserWithID:(id)a0;
- (void)setRemarkName:(id)a0 user:(id)a1 params:(id)a2 completion:(id /* block */)a3;
- (id)currentLoginNickname;
- (id)currentUserSecUid;
- (void)requireLoginWithCompletion:(id /* block */)a0 withTrackerInformation:(id)a1;
- (BOOL)isAssistRegister;
- (BOOL)isPrivateAccount;
- (id)currentUserBindPhoneNumber;
- (id)currentUserSafeMobile;
- (id)quickBindViewControllerWithEnterFrom:(id)a0 didCancelBindBlock:(id /* block */)a1 didFinishBindBlock:(id /* block */)a2;
- (BOOL)isCardShowOnServiceWidgetWithID:(id)a0;
- (long long)getUserFollowStatusWith:(id)a0 readScene:(long long)a1;
- (void)requireLoginWithCompletion:(id /* block */)a0 enterFrom:(id)a1;
- (id)currentAWEUserService;
- (id)init;
- (void)dealloc;
- (id)friendCount;
- (id)currentUserID;
- (BOOL)isLogin;
- (BOOL)isNewUser;
- (BOOL)isBizAccount;

@end
