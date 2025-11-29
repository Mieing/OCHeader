@class NSString, PasswordLogic, WCAccountBindPhoneControlLogic, NSMutableArray, NSNumber;

@interface PreEnterShowGlobalAlertStep : PreEnterBaseStep <WCAccountBindPhoneControlLogicDelegate, PasswordLogicDelegate, WCAccountSetPasswordViewControllerDelegate, NewSettingModifyEmailViewControllerDelegate, IUiUtilExt> {
    PasswordLogic *m_changePasswdLogic;
    WCAccountBindPhoneControlLogic *m_changePhoneLogic;
    NSString *m_title;
    NSString *m_msg;
    NSString *m_nsID;
    NSMutableArray *m_arrBtns;
    NSNumber *m_autoSelectBtnIdxNum;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)parseGlobalAlert:(id)a0;
- (void)showGlobalAlert;
- (id /* block */)handlerForBtnDic:(id)a0;
- (void)globalAlertReport:(id)a0 Btn:(id)a1;
- (void)showWebView:(id)a0;
- (void)showChangePhone;
- (void)showChangePhoneForSetWxid;
- (void)onWCAccountBindPhoneControlLogicStop:(id)a0;
- (void)onWCAccountBindPhoneControlLogicCheckOK:(id)a0;
- (void)showScan;
- (void)showModifyEmail;
- (void)cancelEditEmail;
- (void)doneEditEmail;
- (void)startChangePassward;
- (void)onSetPasswordBack;
- (void)onSetPasswordOK;
- (void)unknownFail:(id)a0;
- (void)checkHaveSetPassword:(id)a0;
- (void)verifyPasswordFail:(id)a0;
- (void)verifyPasswordOK:(id)a0 logic:(id)a1;
- (void)checkHaveNotSetPassword:(id)a0;
- (void)passwordLogicCancel:(id)a0;
- (void)passwordLogicStart:(id)a0;
- (void)passwordLogicPause:(id)a0;
- (void)showSetPasswordView:(id)a0;
- (void)onTabBarRootViewControllerDidAppear;
- (void).cxx_destruct;

@end
