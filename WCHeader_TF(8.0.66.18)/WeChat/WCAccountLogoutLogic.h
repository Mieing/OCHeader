@class NSString, PasswordLogic, WCAccountBindPhoneControlLogic;
@protocol WCAccountLogoutLogicDelegate;

@interface WCAccountLogoutLogic : WCAccountBaseControlLogic <WCAccountSetPasswordViewControllerDelegate, PasswordLogicDelegate, PBMessageObserverDelegate, WCAccountBindPhoneControlLogicDelegate> {
    PasswordLogic *m_checkPasswdLogic;
    WCAccountBindPhoneControlLogic *m_bindPhoneLogic;
    unsigned long long m_status;
}

@property (weak, nonatomic) id<WCAccountLogoutLogicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reportOpCode:(unsigned int)a0;
- (void)dealloc;
- (void)cancelLogout;
- (void)startQuit:(id)a0;
- (void)startSwitchToLogin;
- (void)startCheckSwitch;
- (void)startLogout;
- (BOOL)isForSwitch;
- (BOOL)isForCheckSwitch;
- (void)startLogic:(unsigned long long)a0;
- (void)showNakedAcctProtectAlert;
- (void)doNakedAcctProtect;
- (void)quitInternal;
- (void)preFinalQuit;
- (void)onLogoutCheckOK;
- (void)finalQuit;
- (void)unknownFail:(id)a0;
- (void)checkHaveSetPassword:(id)a0;
- (void)checkHaveNotSetPassword:(id)a0;
- (void)onSetPasswordBack;
- (void)onSetPasswordOK;
- (void)checkNeedSetPasswd;
- (void)onWCAccountBindPhoneControlLogicStop:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
