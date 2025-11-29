@class DYVCDAccountManagementCellViewModel, NSDictionary, NSString, DYVCDAccountManagementViewModel, UIView, UITableView;

@interface DYAQuickSwitchMultiAccountViewController : AWEHalfScreenBaseViewController <UITableViewDelegate, UITableViewDataSource, AWEUserMessage, UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIView *panHolderView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) DYVCDAccountManagementViewModel *accountManager;
@property (retain, nonatomic) DYVCDAccountManagementCellViewModel *VCDModel;
@property (retain, nonatomic) DYVCDAccountManagementCellViewModel *currentModel;
@property (copy, nonatomic) NSDictionary *accountTrackerDetailMap;
@property (nonatomic) double padCloseButtonHeight;
@property (copy, nonatomic) NSDictionary *extraDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)duxGrid_viewDidChangeBreakPointFrom:(struct { long long x0; long long x1; })a0 toBreakPoint:(struct { long long x0; long long x1; })a1;
- (id)aAWEPadModuleAdapter;
- (BOOL)disablePanGes;
- (BOOL)onlyTopCornerClips;
- (BOOL)useSmootherTransition;
- (void)switchVCDAccount:(id)a0;
- (id)__enterFrom;
- (void)loadLocalAccounts;
- (void)p_trackAccountShow:(BOOL)a0;
- (id)getAccountsUIDs;
- (void)recordOtherAccountsDataToCache;
- (id)accountShowDetailInfo;
- (id)__loginAccounts;
- (id)trackerUserDictForAccount:(id)a0 loginPlatform:(unsigned long long)a1 order:(long long)a2;
- (long long)accountCount;
- (void)switchAccount:(id)a0 atIndexNumber:(long long)a1;
- (void)__trackeClickSwitchAccount:(id)a0;
- (void)showLimitToast;
- (void)addAccount;
- (void)trackerAccountSwitchFrom:(id)a0 to:(id)a1;
- (void)sendWillSwitchMessageWithModel:(id)a0;
- (void)switchToAccount:(id)a0;
- (void)__trackVCDSwitchResult:(id)a0;
- (BOOL)showLockAlert:(id)a0;
- (void)__trackeClickSwitchAccount:(id)a0 enterFrom:(id)a1;
- (void)dismiss;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)viewDidLayoutSubviews;
- (unsigned long long)viewStyle;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)fetchAccounts;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (double)cornerRadius;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (unsigned long long)animationStyle;
- (void)viewDidLoad;
- (void)dealloc;
- (void)dismiss:(id /* block */)a0;
- (void)setupUI;
- (double)cellHeight;
- (double)containerHeight;
- (double)containerWidth;

@end
