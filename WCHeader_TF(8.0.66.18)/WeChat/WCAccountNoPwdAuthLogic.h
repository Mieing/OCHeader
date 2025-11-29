@class NSString, WCAccountManualAuthControlLogic, WCAccountLoginUsersViewController;
@protocol WCAccountNoPwdAuthLogicDelegate;

@interface WCAccountNoPwdAuthLogic : WCAccountBaseControlLogic <WCAccountManualAuthControlLogicDelegate> {
    WCAccountManualAuthControlLogic *m_manualAuthLogic;
    id<WCAccountNoPwdAuthLogicDelegate> m_delegate;
}

@property (weak, nonatomic) WCAccountLoginUsersViewController *loginUsersVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startLogic;
- (void)onLoginUsersCancel;
- (void)onLoginUsersLoginUserEmpty;
- (void)onLoginUsersNewAccount;
- (void)onRegisterAffiliatedAccount;
- (BOOL)onLoginUsersLoginUserName:(id)a0;
- (void)setDelegate:(id)a0;
- (void)reportOpCode:(unsigned int)a0;
- (void)onManualAuthControlLogicStop:(unsigned long long)a0 response:(id)a1;
- (BOOL)onManualAuthControlLogicError:(id)a0;
- (void).cxx_destruct;

@end
