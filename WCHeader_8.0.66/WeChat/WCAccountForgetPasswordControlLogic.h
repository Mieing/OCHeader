@class PasswordLogic, WCAccountBindPhoneControlLogic, NSString;
@protocol WCAccountForgetPasswordControlLogicDelegate;

@interface WCAccountForgetPasswordControlLogic : WCAccountBaseControlLogic <PasswordLogicDelegate, WCAccountBindPhoneControlLogicDelegate, WCAccountSetPasswordViewControllerDelegate>

@property (retain, nonatomic) PasswordLogic *passwordLogic;
@property (retain, nonatomic) WCAccountBindPhoneControlLogic *bindLogic;
@property (weak, nonatomic) id<WCAccountForgetPasswordControlLogicDelegate> delegate;
@property (nonatomic) BOOL shouldQueryHasPasswd;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startLogic;
- (void)startForgetPasswordLogic;
- (void)stopLogic;
- (void)resetBindLogic;
- (void)checkHaveSetPassword:(id)a0;
- (void)checkHaveNotSetPassword:(id)a0;
- (void)unknownFail:(id)a0;
- (void)onWCAccountBindPhoneControlLogicStop:(id)a0;
- (void)onWCAccountBindPhoneControlLogicCheckOK:(id)a0;
- (void)onSetPasswordBack;
- (void)onSetPasswordOK;
- (void).cxx_destruct;

@end
