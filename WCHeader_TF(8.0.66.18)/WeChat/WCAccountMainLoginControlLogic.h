@class NSString, WCAccountBaseControlLogic, WCPlayLiveWithoutLoginControlLogic, WCAccountManualAuthControlLogic;

@interface WCAccountMainLoginControlLogic : WCAccountBaseControlLogic <WCAccountManualAuthControlLogicDelegate, WCAccountMainLoginViewControllerDelegate, WCBaseControlMgrExt> {
    WCAccountBaseControlLogic *m_subFBLogic;
    WCAccountBaseControlLogic *m_subAppleLogic;
    WCAccountBaseControlLogic *m_subPasskeyLogic;
    WCAccountManualAuthControlLogic *m_manualAuthLogic;
    WCPlayLiveWithoutLoginControlLogic *m_test;
    unsigned int m_uiCurrentLoginType;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pause;
- (void)startLogic;
- (void)stopLogic;
- (void)onGoToSecurityCenter:(unsigned int)a0;
- (BOOL)handleDebugCommand:(id)a0;
- (void)onWCBaseLogicDidStop:(unsigned int)a0;
- (void)loginAccount:(BOOL)a0 data:(id)a1;
- (void)onManualAuthControlLogicStop:(unsigned long long)a0 response:(id)a1;
- (BOOL)onManualAuthControlLogicError:(id)a0;
- (BOOL)shouldShowBackBtnForMainLogin;
- (void)onMainLoginNext:(id)a0 phoneNumber:(id)a1;
- (void)onMainLoginUserName:(id)a0 Pwd:(id)a1;
- (void)onMainLoginBack;
- (void)onMainLoginGotoSecurityCenter;
- (void)onMainLoginGoToHelpCenter;
- (void)onMainLoginGoToFreeze;
- (void)onMainLoginGoToFeedback;
- (void)onMainLoginGotoChatLogMigration;
- (void)onMainLoginProblem;
- (void)onMainLoginFacebookConnect;
- (void)onMainLoginAppleConnect;
- (void)onMainLoginPasskeyConnectWithAutoLogin:(BOOL)a0;
- (void)onMainLoginUseBothDevice;
- (void)onMainLoginGoToRegister;
- (void)onLoginProblem:(id)a0;
- (void).cxx_destruct;

@end
