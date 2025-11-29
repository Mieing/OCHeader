@class NSString, WCAccountLogoutLogic;
@protocol WCAccountSwitchLogicDelegate;

@interface WCAccountSwitchLogic : WCAccountBaseControlLogic <WCAccountLogoutLogicDelegate, WCAccountNoPwdAuthLogicDelegate> {
    WCAccountLogoutLogic *m_logoutLogic;
}

@property (weak, nonatomic) id<WCAccountSwitchLogicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startLogic;
- (void)logoutCurrentAccount;
- (void)onNoPwdAuthControlLogicDidCancel;
- (void)onAccountLogoutLogicCancel;
- (void)onAccountLogoutLogicCheckOK;
- (void)onAccountLogoutLogicDidQuit;
- (void).cxx_destruct;

@end
