@class NSString, PhoneNumberFormatLogic, WCAccountNewPhoneVerifyViewController, WCAccountManualAuthControlLogic, WCAccountVerifyCodeHandler;

@interface WCAccountNewPhoneLoginControlLogic : WCAccountBaseControlLogic <WCAccountNewPhoneVerifyViewControllerDelegate, WCAccountManualAuthControlLogicDelegate, WCAccountSetPasswordViewControllerDelegate, WCAccountPhoneVerifyUpViewControllerDelegate, WCAccountVerifyCodeHandlerDelegate> {
    WCAccountVerifyCodeHandler *_verifyCodeHandler;
    WCAccountManualAuthControlLogic *_manualAuthLogic;
    PhoneNumberFormatLogic *_phoneNumFormatter;
    WCAccountNewPhoneVerifyViewController *_currentVC;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithData:(id)a0;
- (void)startLogic;
- (void)loginAccount;
- (void)onPhoneVerifyUpBack;
- (void)onPhoneVerifyUpNext;
- (void)onHandlerGetVerifyCodeSuccessWithStyleKeyValue:(id)a0;
- (void)onHandlerCheckLoginVerifyCode:(id)a0 StyleKeyValue:(id)a1 Response:(id)a2;
- (void)onHandlerCheckLoginVerifyCodeNoBind:(id)a0;
- (void)onErrorHandleLogicDone;
- (BOOL)onErrorHandleLogicHandleGoNextWithParams:(id)a0 webVC:(id)a1 customClose:(BOOL *)a2;
- (void)onNewPhoneVerifyBack;
- (void)onNewPhoneVerifyFirstTime:(BOOL)a0;
- (void)onNewPhoneVerifyNextWithVerifyCode:(id)a0;
- (void)onNewPhoneVerifyNextWithPwd:(id)a0;
- (void)onNewPhoneVerifyGotoSecurityCenter;
- (void)onNewPhoneVerifyGotoFeedback;
- (void)onNewPhoneVerifyProblem;
- (void)onGoToSecurityCenter:(unsigned int)a0;
- (void)onNewPhoneVerifyGotoFreeze;
- (void)onNewPhoneVerifGotoRegister;
- (void)onManualAuthControlLogicStop:(unsigned long long)a0 response:(id)a1;
- (void)checkHavePwd;
- (BOOL)onManualAuthControlLogicError:(id)a0;
- (void)onSetPasswordBack;
- (void)onSetPasswordOK;
- (void).cxx_destruct;

@end
