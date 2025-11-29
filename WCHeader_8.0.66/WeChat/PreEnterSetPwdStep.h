@class NSString, PasswordLogic, CMessageWrap;

@interface PreEnterSetPwdStep : PreEnterBaseStep <PasswordLogicDelegate, WCAccountSetPasswordViewControllerDelegate> {
    CMessageWrap *m_wrapMsg;
    PasswordLogic *m_setPasswdLogic;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMsg:(id)a0;
- (void)startStep;
- (void)unknownFail:(id)a0;
- (void)checkHaveSetPassword:(id)a0;
- (void)checkHaveNotSetPassword:(id)a0;
- (void)showSetPasswordView;
- (void)onSetPasswordBack;
- (void)onSetPasswordOK;
- (void).cxx_destruct;

@end
