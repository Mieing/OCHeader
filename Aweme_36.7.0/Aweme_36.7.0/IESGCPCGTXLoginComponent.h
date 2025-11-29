@class IESGCPXPlayGameAPI, NSString, UIView;
@protocol IESGCPCGTXLoginPageProtocol;

@interface IESGCPCGTXLoginComponent : IESGCPCGInstanceBaseComponent <IESGCPDouLinkTencentBindAtomicAction, IESGCPCGTXLoginRouter>

@property (retain, nonatomic) UIView *loadingView;
@property (retain, nonatomic) IESGCPXPlayGameAPI *api;
@property (nonatomic) BOOL needRefreshLoginStatus;
@property (nonatomic) int loginType;
@property (copy, nonatomic) NSString *gameID;
@property (nonatomic) long long jumpReason;
@property (nonatomic) long long loginScene;
@property (copy, nonatomic) id /* block */ bindAccountCompletion;
@property (copy, nonatomic) id /* block */ refreshLoginStatusCompletion;
@property (retain, nonatomic) id<IESGCPCGTXLoginPageProtocol> page;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDestroy;
- (void)didSetGameCPDIContext;
- (void)_onAppDidBecomeActive:(id)a0;
- (void)jumpTXWithInfo:(id)a0 jumpReason:(id)a1 completion:(id /* block */)a2;
- (void)_registerNotification;
- (void)_unregisterNotification;
- (void)openTencentBindPageFinishedWithType:(unsigned long long)a0 success:(BOOL)a1 failReason:(unsigned long long)a2 context:(id)a3;
- (void)jumpTXWithJumpTxType:(int)a0 jumpInfo:(id)a1 jumpReason:(id)a2 completion:(id /* block */)a3;
- (void)refreshLoginStatusIfNeeded;
- (void)monitorBindRoleFailedWithScene:(long long)a0 loginType:(id)a1 errCode:(long long)a2 errMsg:(id)a3;
- (id)_loginTypeStringWithLoginType:(int)a0;
- (void)jumpTXWithJumpTxType:(int)a0 jumpInfo:(id)a1 completion:(id /* block */)a2;
- (void)monitorFullPathEvent:(long long)a0 errorCode:(long long)a1;
- (void)_handleLoginInfoData:(id)a0;
- (void)monitorService:(id)a0 loginType:(int)a1 scene:(long long)a2;
- (void)_dismissTXLoginModePageIfNeededWithCompletion:(id /* block */)a0;
- (void)_handleLoginStatusRestrictions;
- (void)_handleLoginStatusNotRealNameWithJumpInfo:(id)a0;
- (void)_handleLoginStatusUnknown;
- (void)_handleLoginStatusNotLoggedIn:(id)a0;
- (void)handleAuthInfo:(id)a0 withGameID:(id)a1 withLoginStatus:(int)a2 closeGameAfterRefuse:(BOOL)a3 completion:(id /* block */)a4;
- (void)monitorService:(id)a0 loginStr:(id)a1;
- (void)loginAfterOpenIDAuthorizeWithGameID:(id)a0 blockWhenGetLoginInfoError:(BOOL)a1 closeGameAfterRefuse:(BOOL)a2 maintainAction:(id /* block */)a3 completion:(id /* block */)a4;
- (void)loginAfterXplayAuthorizeWithGameID:(id)a0 loginType:(int)a1 logID:(id)a2 loginScene:(long long)a3 supplierPodID:(id)a4 zoneID:(id)a5 completion:(id /* block */)a6;
- (void)completeUserAuthenticationIfNeeded;
- (void)showToast:(id)a0;
- (void).cxx_destruct;
- (void)clear;
- (id)init;
- (void)dealloc;
- (void)_showLoadingView;
- (void)_hideLoadingView;

@end
