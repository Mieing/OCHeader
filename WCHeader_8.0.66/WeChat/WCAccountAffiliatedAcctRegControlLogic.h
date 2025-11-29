@class NSString, WCPrivacyPolicyControlLogic;

@interface WCAccountAffiliatedAcctRegControlLogic : WCAccountBaseControlLogic <WCAccountAffiliatedAcctDelegate, WCPrivacyPolicyControlLogicDelegate, MMWebViewDelegate>

@property (retain, nonatomic) WCPrivacyPolicyControlLogic *privacyPolicyLogic;
@property (retain, nonatomic) NSString *clientSessionId;
@property (nonatomic) int affRegScene;
@property (nonatomic) BOOL withoutBeginVC;
@property (copy, nonatomic) id /* block */ onRegSuccessBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startLogic;
- (void)openWebViewWithUrl:(id)a0 presentModal:(BOOL)a1;
- (void)precheckAffiliatedAcct;
- (void)showPrivacyPolicy;
- (void)regAffiliatedAcctWithHeadImageTaskInfo:(id)a0 headImgData:(id)a1;
- (BOOL)uploadHeadImgIfNeeded;
- (void)stopLogic;
- (void)reportWithPage:(unsigned int)a0 action:(unsigned int)a1 module:(unsigned int)a2;
- (void)onErrorHandleLogicDone;
- (void)nextToRegUseNewPhone;
- (void)nextToH5;
- (void)nextToSetPassword;
- (void)nextToRegister;
- (void)end;
- (void)onShowHelpPage;
- (void)onLeaveViewController:(id)a0;
- (BOOL)shouldKeepOldLogic;
- (void)onWCPrivacyPolicyControlLogicClickAgree;
- (void)onWCPrivacyPolicyControlLogicClickDiagree;
- (void)onWebViewCloseAndGoNext:(id)a0 webVC:(id)a1 customClose:(BOOL *)a2;
- (void)webViewDidReturn:(id)a0;
- (void).cxx_destruct;

@end
