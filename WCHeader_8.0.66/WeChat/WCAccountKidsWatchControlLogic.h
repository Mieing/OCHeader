@class NSString, ExtDeviceLoginConfirmOKRequest, KidsWatchLoginReportObject, WCAccountKidsWatchRegisterControlLogic;

@interface WCAccountKidsWatchControlLogic : WCAccountBaseControlLogic <KidsWatchMainViewControllerDelegate, KidsWatchNormalLoginViewControllerDelegate, KidsWatchKidsLoginViewControllerDelegate, WCAccountKidsWatchRegisterControlLogicDelegate>

@property (retain, nonatomic) ExtDeviceLoginConfirmOKRequest *cachedConfirmOKRequest;
@property (nonatomic) unsigned int sessionListMaxCount;
@property (retain, nonatomic) KidsWatchLoginReportObject *reportObject;
@property (retain, nonatomic) WCAccountKidsWatchRegisterControlLogic *registerLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startLogic;
- (void)confirmKidsWatchLogin;
- (void)confirmKidsWatchUserLogin:(unsigned long long)a0 syncChat:(BOOL)a1;
- (void)confirmKidsWatchKidLogin:(id)a0;
- (void)kidsWatchConfirmLoginOKWithScene:(int)a0 kidAccountInfo:(id)a1;
- (void)kidsWatchConfirmLoginOKWithScene:(int)a0 kidAccountInfo:(id)a1 syncChat:(BOOL)a2;
- (void)kidsWatchConfirmLoginOKWithRequest:(id)a0;
- (void)cancelKidsWatchLoginConfirm;
- (BOOL)checkViewController:(Class)a0;
- (void)onLeaveViewController:(id)a0;
- (void)closeAndExit;
- (void)closeAndExitWithSuccess:(BOOL)a0;
- (void)nextToNormalLogin;
- (void)nextToKidsRegister;
- (void)nextToLoginHelp;
- (void)nextToUserLoginWithMethod:(unsigned long long)a0 syncChat:(BOOL)a1;
- (void)nextToKidsLogin:(id)a0;
- (void)onFinishedRegisterWithSnapShot:(id)a0;
- (void)onErrorHandleLogicDoneAndNeedGoNextWithParams:(id)a0;
- (void).cxx_destruct;

@end
