@class PassKeyVerifyInfo, PasskeyEntitlementProvider, NSString, WCAccountManualAuthControlLogic;

@interface WCAccountPasskeyControlLogic : WCAccountBaseControlLogic <WCAccountManualAuthControlLogicDelegate>

@property (retain, nonatomic) WCAccountManualAuthControlLogic *manualAuthLogic;
@property (retain, nonatomic) PasskeyEntitlementProvider *passkeyProvider;
@property (retain, nonatomic) PassKeyVerifyInfo *passkeyVerifyInfo;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *randomPwd;
@property (retain, nonatomic) NSString *reportSessionId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startLogic;
- (void)requestChallenge;
- (void)signInWithChallenge:(id)a0 preferImmediatelyAvailableCredentials:(BOOL)a1 ignoreFail:(BOOL)a2;
- (void)showNoCredentialsPageSheetWithChallenge:(id)a0;
- (unsigned int)cgiRequestScene;
- (void)passkeyAuthorize;
- (void)passkeyAuthorizaWithIDCRedirectCount:(unsigned long long)a0;
- (void)startManualAuth;
- (void)onManualAuthControlLogicStop:(unsigned long long)a0 response:(id)a1;
- (BOOL)onManualAuthControlLogicError:(id)a0;
- (void)reportAction:(unsigned long long)a0;
- (void)reportSysAuthEndWithResult:(int)a0;
- (void)reportCustomEvent:(id)a0 params:(id)a1;
- (void).cxx_destruct;

@end
