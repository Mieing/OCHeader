@class UINavigationController, NSString, OpenSDKAuthorizeLoginManager, OpenApiParameter, MMTipsViewController;

@interface NewAuthHandler : MMObject <MMWebViewDelegate, IAppDataExt, MMKernelExt> {
    OpenApiParameter *m_parameter;
    UINavigationController *m_oAuthViewController;
    BOOL m_isDoing;
    OpenSDKAuthorizeLoginManager *m_nativeAuthManager;
    MMTipsViewController *m_alertConfirmVC;
}

@property (retain, nonatomic) NSString *m_nsScope;
@property (retain, nonatomic) NSString *m_nsState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (void)dealloc;
- (void)startWechatConnect:(id)a0;
- (BOOL)isNeedStartIpadOAuth;
- (void)startIPadOAuthInNativeView;
- (void)cancelWechatConnect;
- (id)parseURLParams;
- (void)cancelAllHandle;
- (void)clearAllHandle;
- (void)delayCancelAllHandle;
- (void)cancelAllHandleAndReturn3rdApp;
- (void)denyAllHandleAndReturn3rdApp;
- (void)send3rdRespWithErrCode:(int)a0 errStr:(id)a1;
- (void)createOAuthView;
- (id)createOAuthRequestWithOpenParameter;
- (void)removeOAuthView;
- (void)OnOAuthCancel;
- (void)OnOAuthDeny;
- (void)onOAuthError:(int)a0 errMsg:(id)a1;
- (void)onOAuthRedirectUrl:(id)a0 confirmRedirectUrl:(id)a1 confirmWording:(id)a2 appIconUrl:(id)a3 appNickname:(id)a4 iLinkAuthBuffer:(id)a5;
- (id)appendURLStrWithURLStr:(id)a0 iLinkAuthBuffer:(id)a1;
- (void)alertLaunchAppWithUrl:(id)a0 confirmWording:(id)a1 appIconUrl:(id)a2 appNickname:(id)a3 fromDegrade:(BOOL)a4;
- (id)limitString:(id)a0 WithLimitLength:(unsigned int)a1;
- (void)onWebViewDidStartLoad:(id)a0;
- (void)onWebViewDidFinishLoad:(id)a0;
- (void)onLeaveWebviewAndBackTo3rdApp;
- (void)OnGotListAppSettingItem:(id)a0 errType:(int)a1;
- (void)onKickQuit;
- (void)onPreQuit;
- (void)onPostQuit;
- (void)onNewOAuthCancel;
- (void)onNewOAuthDeny;
- (void)onNewOAuthError:(int)a0 errMsg:(id)a1;
- (void)onNewOAuthRedirectUrl:(id)a0 confirmRedirectUrl:(id)a1 confirmWording:(id)a2 appIconUrl:(id)a3 appNickname:(id)a4 iLinkAuthBuffer:(id)a5;
- (void)onIPadOAuthCancel;
- (void)onIPadOAuthError:(int)a0 errMsg:(id)a1;
- (void)onIPadOAuthRedirectUrl:(id)a0 confirmRedirectUrl:(id)a1 confirmWording:(id)a2 appIconUrl:(id)a3 appNickname:(id)a4;
- (void).cxx_destruct;

@end
