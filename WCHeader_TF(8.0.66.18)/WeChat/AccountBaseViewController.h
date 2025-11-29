@class NSString;

@interface AccountBaseViewController : MMUIViewController <PBMessageObserverDelegate, WCAccountSetPasswordViewControllerDelegate> {
    unsigned int m_uiAccountID;
    NSString *m_unbindOKTip;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onCheckUnbindFail;
- (void)checkUnbindAccount;
- (void)prepareToUnbindAccount:(unsigned int)a0;
- (void)onUnBindAccount;
- (void)OnUnBindAccountOKConfirm;
- (void)OnUnBindAccountOK;
- (void)onSetPasswordBack;
- (void)onSetPasswordOK;
- (void)onSetPwd;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)dealloc;
- (void).cxx_destruct;

@end
