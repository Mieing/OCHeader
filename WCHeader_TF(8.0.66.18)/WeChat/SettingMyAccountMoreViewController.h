@class NSString, GetSafetyInfoLogic, MMTableViewInfo;

@interface SettingMyAccountMoreViewController : MMUIViewController <NewSettingModifyEmailViewControllerDelegate, IQQAccountMgrExt, IMMFacebookMgrExt, IUpdateProfileMgrExt, AppleIDBindViewControllerDelegate, GetSafetyInfoLogicDelegate, MMNewTipsMgrExt> {
    GetSafetyInfoLogic *m_getSafetyInfoLogic;
    SEL m_getSafetyInfoNextStepSEL;
    MMTableViewInfo *m_tableViewInfo;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)startGetSafetyInfo:(SEL)a0;
- (void)onGetSafetyInfoComplete:(BOOL)a0;
- (void)setVoicePrint;
- (void)dealloc;
- (void)doRegester;
- (void)undoRegester;
- (void)reloadTableData;
- (void)viewDidLayoutSubviews;
- (void)initAccountCellData;
- (void)initDeleteAccountCellData;
- (void)showModifyQQView;
- (void)showApple;
- (void)showFacebook;
- (void)modifyEmail;
- (void)saveNewEmail;
- (void)onBindFacebookFinish:(unsigned int)a0;
- (void)onUnBindFacebookFinish:(unsigned int)a0;
- (void)OnBindQQChange;
- (void)onProfileChange;
- (void)willShow;
- (void)onAppleIDBindStatusChange;
- (void)setupDeepLinkConfig;
- (void)onTipsShowInfoChangeWithPathKey:(id)a0;
- (void)registerYReportSdk;
- (void).cxx_destruct;

@end
