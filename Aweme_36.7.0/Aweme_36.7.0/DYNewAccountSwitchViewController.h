@class UIButton, DYVCDAccountManagementCellViewModel, NSDictionary, DUXLoadingToast, DYVCDAccountManagementViewModel, NSString, UITableView;

@interface DYNewAccountSwitchViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWEUserMessage>

@property (retain, nonatomic) DYVCDAccountManagementViewModel *accountManager;
@property (retain, nonatomic) UITableView *tableView;
@property (nonatomic) BOOL shouldLogoutAndSwitch;
@property (retain, nonatomic) DYVCDAccountManagementCellViewModel *VCDModel;
@property (retain, nonatomic) DYVCDAccountManagementCellViewModel *currentModel;
@property (retain, nonatomic) UIButton *backAction;
@property (retain, nonatomic) UIButton *accountManageButton;
@property (copy, nonatomic) NSDictionary *accountTrackerDetailMap;
@property (nonatomic) BOOL hasTrackShow;
@property (retain, nonatomic) DUXLoadingToast *loadingToast;
@property (nonatomic) BOOL isDeletingUser;
@property (nonatomic) BOOL disablePopTransition;
@property (nonatomic) BOOL needPopWhenLogout;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (void)trackerClickAccountSwitchToUid:(id)a0 targetAppID:(long long)a1 clickPosition:(id)a2 enterFrom:(id)a3;
+ (Class)aAWEUserDOUYINAdapterClass;
+ (Class)aAWEUserDOUYINLGAdapterClass;

- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)didFinishPassportQueryButFailAweme;
- (id)aAWEPadModuleAdapter;
- (void)backBtnClick:(id)a0;
- (void)switchVCDAccount:(id)a0;
- (void)handleCommonVerificationNotification:(id)a0;
- (void)loadLocalAccounts;
- (void)p_trackAccountShow:(BOOL)a0;
- (id)getAccountsUIDs;
- (void)recordOtherAccountsDataToCache;
- (id)__loginAccounts;
- (id)trackerUserDictForAccount:(id)a0 loginPlatform:(unsigned long long)a1 order:(long long)a2;
- (long long)accountCount;
- (void)switchAccount:(id)a0 atIndexNumber:(long long)a1;
- (void)showLimitToast;
- (void)addAccount;
- (void)trackerAccountSwitchFrom:(id)a0 to:(id)a1;
- (void)sendWillSwitchMessageWithModel:(id)a0;
- (void)switchToAccount:(id)a0;
- (void)__trackVCDSwitchResult:(id)a0;
- (BOOL)showLockAlert:(id)a0;
- (void)accountManage;
- (void)showOrHideManageButton;
- (id)logoutDialogBodyWithAccountModel:(id)a0;
- (void)trackLogoutConfirmWindowClickIsSubAccount:(unsigned long long)a0 caption:(id)a1 text:(id)a2 clickType:(id)a3;
- (void)trackLogoutConfirmWindowShowIsSubAccount:(unsigned long long)a0 caption:(id)a1 text:(id)a2;
- (void)trackerClickAccountSwitchToUid:(id)a0 targetAppID:(long long)a1 clickPosition:(id)a2;
- (id)aAWEUserDOUYINAdapter;
- (id)aAWEUserDOUYINLGAdapter;
- (void)deleteUser:(id)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)fetchAccounts;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)setupUI;

@end
