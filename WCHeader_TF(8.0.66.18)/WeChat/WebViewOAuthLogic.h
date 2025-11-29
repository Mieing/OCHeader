@class JSApiScopeConfirmWindow, NSString, MMUIViewController, WOAPPrivacyConfirmLogic, JSApiScopeAuthorizeInfo, NSMutableArray, JSApiScopeAuthorizePageSheet;

@interface WebViewOAuthLogic : MMObject <PBMessageObserverDelegate, JSApiScopeConfirmWindowDelegate, WAAuthorizePageSheetDelegate, WAPageSheetDelegate> {
    id /* block */ _completeBlock;
    JSApiScopeConfirmWindow *_confirmWindow;
    NSString *_oauthUrl;
    BOOL _needNotifySvrWhenConfirm;
    NSString *_confirmRediretUrl;
    WOAPPrivacyConfirmLogic *_privacyConfirmLogic;
    NSString *_appId;
    unsigned int _stayTimeStart;
    unsigned long long _stepStartTime;
    unsigned int _sessionID;
}

@property (weak, nonatomic) MMUIViewController *vc;
@property (retain, nonatomic) JSApiScopeAuthorizeInfo *authInfo;
@property (retain, nonatomic) NSMutableArray *pendingScopeInfoList;
@property (retain, nonatomic) NSMutableArray *handledScopeInfoList;
@property (retain, nonatomic) JSApiScopeAuthorizePageSheet *pageSheet;
@property (nonatomic) BOOL cachedIsInteractivePopEnabled;
@property (retain, nonatomic) NSString *refererUrl;
@property (nonatomic) BOOL isAuthing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startOAuthWithUrl:(id)a0 userName:(id)a1 scene:(int)a2 oAuthType:(unsigned int)a3 referUrl:(id)a4 viewController:(id)a5 completeBlock:(id /* block */)a6;
- (void)reset;
- (void)closeConfirmWindow;
- (void)onConfirmViewOKWithContext:(id)a0;
- (void)onConfirmViewCancel;
- (void)reportAuthOperate:(unsigned long long)a0 isShowAuthView:(BOOL)a1 errCode:(int)a2;
- (void)reportAuthCostTime:(unsigned int)a0 errCode:(int)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)handleOauthResponse:(id)a0;
- (void)handleConfirmResponse:(id)a0;
- (void)sendCancelOprationToSvr;
- (void)sendConfirmOprationToSvrWithContext:(id)a0;
- (void)doSendAuthStatusToSvrWithContext:(id)a0;
- (void)showConfirmWindow:(id)a0 appName:(id)a1 iconUrl:(id)a2;
- (void)onScopeWindowConfirm:(id)a0 withScope:(id)a1;
- (void)onScopeWindowCancel:(id)a0;
- (id)queryParamDictFromFullUrl:(id)a0;
- (void)storageWebViewInteractivePopEnabled;
- (void)recoveryWebViewInteractivePopEnabled;
- (void)showAuthPageSheet:(id)a0;
- (void)dismissAuthPageSheet;
- (void)setAndSortScopeInfoList:(id)a0;
- (void)setupAuthInfoWithAuthResp:(id)a0;
- (BOOL)hasPendingScopeInfo;
- (void)handleFirstScopeInfoAndUpdateAuthInfo;
- (void)updateScopeInfoStatusAndMoveFromPendingQueue2HandledQueue:(BOOL)a0;
- (void)relayoutOauthPageSheet;
- (void)authorizeAccept:(id)a0;
- (void)authorizeReject:(id)a0;
- (void)sendAuthStatusToSvrWhenAllPageSheetDismissWithOAuthContext:(id)a0;
- (void)pageSheet:(id)a0 needToPushViewController:(id)a1;
- (double)getViewHeight;
- (void).cxx_destruct;

@end
