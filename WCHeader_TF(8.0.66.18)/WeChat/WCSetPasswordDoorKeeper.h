@class NSString, MMUIViewController, PasswordLogic, WCAccountSetPasswordViewController, NSObject;

@interface WCSetPasswordDoorKeeper : NSObject <PasswordLogicDelegate, WCAccountSetPasswordViewControllerDelegate>

@property (retain, nonatomic) PasswordLogic *passwordLogic;
@property (retain, nonatomic) NSObject *selfHolder;
@property (weak, nonatomic) WCAccountSetPasswordViewController *setPasswordVC;
@property (weak, nonatomic) MMUIViewController *contentVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tryGoToSetPasswordPageFrom:(id)a0;
- (void)checkIfshowSetPasswordPage:(BOOL)a0;
- (void)showSetPasswordPage:(BOOL)a0;
- (void)passwordLogicCancel:(id)a0;
- (void)passwordLogicStart:(id)a0;
- (void)passwordLogicPause:(id)a0;
- (void)checkHaveSetPassword:(id)a0;
- (void)checkHaveNotSetPassword:(id)a0;
- (void)unknownFail:(id)a0;
- (void)onSetPasswordBack;
- (void)onSetPasswordOK;
- (void).cxx_destruct;

@end
