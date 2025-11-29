@class NSString, WCAccountSetPasswordViewController, MMTableViewInfo, GetSafetyInfoLogic;

@interface SettingMyAccountInfoViewController : MMUIViewController <WCAccountSetPasswordViewControllerDelegate, PasswordLogicDelegate, IUpdateProfileMgrExt, GetSafetyInfoLogicDelegate, MMNewTipsMgrExt> {
    MMTableViewInfo *m_tableViewInfo;
    WCAccountSetPasswordViewController *m_setPasswordViewController;
    GetSafetyInfoLogic *m_getSafetyInfoLogic;
    SEL m_getSafetyInfoNextStepSEL;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initSecurityCellData;
- (void)reloadTableData;
- (void)doRegester;
- (void)undoRegester;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (void)startGetSafetyInfo:(SEL)a0;
- (void)onGetSafetyInfoComplete:(BOOL)a0;
- (void)setPassword;
- (void)setVoicePrint;
- (void)setPasskey;
- (void)setSaveDevice;
- (void)showMoreAccount;
- (void)setTrustedFriends;
- (void)openSecurityCenter;
- (void)ReloadData;
- (void)willShow;
- (id)rightValueForCellIsHas:(BOOL)a0 IsOpen:(BOOL)a1;
- (void)registerYReportSdk;
- (void)setupDeepLinkConfig;
- (void)onTipsShowInfoChangeWithPathKey:(id)a0;
- (void).cxx_destruct;

@end
