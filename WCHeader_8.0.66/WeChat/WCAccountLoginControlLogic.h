@class WCPlayLiveWithoutLoginControlLogic, NSString;

@interface WCAccountLoginControlLogic : WCAccountBaseControlLogic <WCAccountLoginFirstViewControllerDelegate, WCAccountBackDeviceFirstViewControllerDelegate, WCAccountSignMethodSwitchViewControllerDelegate, WCAccountOneClickLoginViewControllerDelegate>

@property (retain, nonatomic) WCPlayLiveWithoutLoginControlLogic *m_playLiveWthioutLoginLoigc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pause;
- (void)startLogic;
- (void)startIPadLoginLogic;
- (void)startIPhoneLoginLogic;
- (void)stopLogic;
- (void)onGoToSecurityCenter:(unsigned int)a0;
- (void)showRegisterPageSheet;
- (void)registerByFacebook;
- (void)registerByApple;
- (void)startRegisterLogic;
- (void)onSignMethodSwitch:(unsigned long long)a0;
- (void)onFirstViewLogin;
- (void)onFirstViewRegister;
- (void)onUseBothDevice;
- (void)onUseIPadOnly;
- (void)onLoginByQQ;
- (void)onLoginByQRCode;
- (void)onLoginByQRCodeWithOneClickDisconnect;
- (void)onOneClickLoginSwitchAccount;
- (void)onOneClickLoginProblem;
- (void)onOneClickLoginGoToSecurityCenter;
- (void)onOneClickLoginGoToHelpCenter;
- (void)onOneClickPlayLiveWithoutLogin;
- (void).cxx_destruct;

@end
