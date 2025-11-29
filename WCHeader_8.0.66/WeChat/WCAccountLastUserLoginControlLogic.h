@class NSString, WCAccountBaseControlLogic, WCAccountLoginLastUserViewController, WCAccountManualAuthControlLogic, VoicePrintVerifyLogic, WCAccountVerifyCodeHandler;

@interface WCAccountLastUserLoginControlLogic : WCAccountBaseControlLogic <WCAccountLoginLastUserViewControllerDelegate, WCAccountManualAuthControlLogicDelegate, WCAccountVerifyCodeHandlerDelegate, WCAccountSetPasswordViewControllerDelegate, WCAccountPhoneVerifyUpViewControllerDelegate> {
    BOOL m_bFromLogout;
    unsigned int m_uiPwdErrCount;
    WCAccountManualAuthControlLogic *m_manualAuthLogic;
    WCAccountBaseControlLogic *m_subPasskeyLogic;
    unsigned int m_uiCurrentLoginType;
    WCAccountVerifyCodeHandler *m_verifyCodeHandler;
    WCAccountLoginLastUserViewController *m_lastUserVerifyVC;
}

@property (retain, nonatomic) VoicePrintVerifyLogic *voicePrintVerifyLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pause;
- (void)startLogic;
- (void)stopLogic;
- (void)onGoToSecurityCenter:(unsigned int)a0;
- (void)loginAccount:(BOOL)a0 data:(id)a1;
- (void)onHandlerGetVerifyCodeSuccessWithStyleKeyValue:(id)a0;
- (void)onHandlerCheckLoginVerifyCode:(id)a0 StyleKeyValue:(id)a1 Response:(id)a2;
- (void)onHandlerCheckLoginVerifyCodeNoBind:(id)a0;
- (void)onLastUserBack;
- (void)onLastUserVerifyFirstTime:(BOOL)a0;
- (void)onLastUserVerifyNextWithVerifyCode:(id)a0;
- (void)onLastUserLoginUserName:(id)a0 Pwd:(id)a1;
- (void)onLastPasskeyLogin:(BOOL)a0;
- (void)onLastUserRegister;
- (void)onLastUserProblem:(id)a0;
- (void)onLastUserGoToSecurityCenter:(id)a0;
- (void)onLastUserGoToHelpCenter:(id)a0;
- (void)onLastUserGoToFreeze:(id)a0;
- (void)onLastUserGoToFeedback;
- (void)onLastUserVoicePrintLogin:(id)a0;
- (void)onLastUserLoginByQRCode;
- (void)onLastUserChangeAccount:(id)a0;
- (void)onLastUserUseBothDevice;
- (void)onLastUserGotoChatLogMigration;
- (void)onPhoneVerifyUpBack;
- (void)onPhoneVerifyUpNext;
- (void)onErrorHandleLogicDone;
- (BOOL)onErrorHandleLogicHandleGoNextWithParams:(id)a0 webVC:(id)a1 customClose:(BOOL *)a2;
- (void)onManualAuthControlLogicStop:(unsigned long long)a0 response:(id)a1;
- (BOOL)onManualAuthControlLogicError:(id)a0;
- (void)checkHavePwd;
- (void)onSetPasswordBack;
- (void)onSetPasswordOK;
- (void).cxx_destruct;

@end
