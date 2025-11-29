@class NSMutableDictionary;

@interface DYAQuickSwitchAccountManager : NSObject

@property (nonatomic) BOOL shouldLogoutAndSwitch;
@property (retain, nonatomic) NSMutableDictionary *accountCache;

+ (id)sharedInstance;

- (void)didFinishPassportQueryButFailAweme;
- (void)showDigitalWellbeingLockViewIfNeededWithCompletion:(id /* block */)a0;
- (void)checkAntiAddictedAndShowAlertIfNeededWithLockHint:(id)a0 forbidToastHint:(id)a1 completion:(id /* block */)a2;
- (id)startCallSwitchInterfaceDate;
- (void)setStartCallSwitchInterfaceDate:(id)a0;
- (void)startSwitchOrAndAccount;
- (void)switchAccountSuccessWith:(BOOL)a0;
- (void)switchAccountCompleteWith:(id)a0 enterMethod:(id)a1;
- (void)startCallSwitchInterface;
- (void)addAccountWithCompletion:(id /* block */)a0 enterMethod:(id)a1 isFromCreateAccount:(BOOL)a2;
- (id)monitor;
- (void).cxx_destruct;
- (void)setMonitor:(id)a0;
- (id)init;

@end
