@class NSString, WCAccountManualAuthControlLogic;

@interface WCAccountFacebookControlLogic : WCAccountBaseControlLogic <IMMFacebookMgrExt, WCAccountManualAuthControlLogicDelegate> {
    WCAccountManualAuthControlLogic *m_manualAuthLogic;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)pause;
- (void)startLogic;
- (void)stopLogic;
- (void)loginWithUserName:(id)a0 token:(id)a1;
- (void)onFBDidNotLogin:(BOOL)a0;
- (void)onLoginFacebookBegan:(id)a0;
- (void)onManualAuthControlLogicStop:(unsigned long long)a0 response:(id)a1;
- (BOOL)onManualAuthControlLogicError:(id)a0;
- (void).cxx_destruct;

@end
