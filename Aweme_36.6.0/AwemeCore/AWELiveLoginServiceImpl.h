@class NSDictionary, NSString;
@protocol IESLiveCompoundSubscription;

@interface AWELiveLoginServiceImpl : NSObject <AWEUserMessage, IESLiveUserActions, IESLiveLoginService>

@property (retain, nonatomic) id<IESLiveCompoundSubscription> actionDisposable;
@property (retain, nonatomic) NSDictionary *tintTags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ loginBlock;
@property (copy, nonatomic) id /* block */ liveFollowChangeBlock;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didLoginFailed;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)didFinishUpdateAwemeUserWithtintTags:(id)a0;
- (void)didFinishUpdateCurrentFullUserForReason:(unsigned long long)a0;
- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)requirePadCastLoginTokenWithState:(id)a0 completion:(id /* block */)a1;
- (id)currentUserId;
- (id)requestTintTags;
- (id)currentEncryptedUserId;
- (void)loginWithUserInfo:(id)a0 completion:(id /* block */)a1;
- (void)loginWithUserInfo:(id)a0;
- (void)loginWithUserInfo:(id)a0 isFIFARoom:(BOOL)a1 completion:(id /* block */)a2;
- (void)loginWithUserInfo:(id)a0 themeId:(id)a1 loginDesc:(id)a2 completion:(id /* block */)a3;
- (void)localFollowStatusWithUserID:(id)a0 extraLog:(id)a1 completion:(id /* block */)a2;
- (void)showBindMobileWithCompletion:(id /* block */)a0;
- (void)showBindMobileWithDidCancelBindBlock:(id /* block */)a0 didFinishBindBlock:(id /* block */)a1;
- (void)showBindSafeMobileViewControllerWithMobileUserType:(unsigned long long)a0 successCompletion:(id /* block */)a1;
- (void)getSwitchAccountResultWithSource:(id)a0 switchUserComplete:(id /* block */)a1 finishComplete:(id /* block */)a2;
- (void)bindFollowStatusChangeSignalForOutterService;
- (void)didFollowUser:(id)a0 secUserID:(id)a1 status:(long long)a2;
- (void)didUnfollowUser:(id)a0 secUserID:(id)a1 status:(long long)a2;
- (void)logout;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)currentSessionID;
- (BOOL)isLogin;

@end
