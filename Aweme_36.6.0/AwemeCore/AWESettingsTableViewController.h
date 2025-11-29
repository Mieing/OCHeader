@class UIViewController, AWESettingPageTrackManager, NSString, AWESettingBaseViewModel, UILabel, DUXSearchBar, UIView;
@protocol AFDSettingSearchViewControllerProtocol;

@interface AWESettingsTableViewController : AWESettingBaseViewController <AWEUserMessage, AWEUserLoginMessage, AWEBasicModeMessage, AWERouterViewControllerProtocol> {
    AWESettingBaseViewModel *_viewModel;
}

@property (retain, nonatomic) UIView *topGapView;
@property (retain, nonatomic) UILabel *versionLabel;
@property (retain, nonatomic) UIView *userInfoView;
@property (nonatomic) long long nextHighlightType;
@property (nonatomic) BOOL hasTrackSettingPageShow;
@property (retain, nonatomic) UIView *searchBgView;
@property (retain, nonatomic) DUXSearchBar *searchBar;
@property (retain, nonatomic) UIViewController<AFDSettingSearchViewControllerProtocol> *searchVC;
@property (retain, nonatomic) AWESettingPageTrackManager *trackManager;
@property (nonatomic) BOOL onSearchStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)didFinishUpdateCurrentFullUserForReason:(unsigned long long)a0;
- (BOOL)configWithRouterParamDict:(id)a0;
- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (void)enterBasicModeIsLogin:(BOOL)a0;
- (void)setStatusBarBackgroundColor:(id)a0;
- (void)backBtnClick:(id)a0;
- (void)addNoti;
- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (void)willDisplayItemModel:(id)a0;
- (void)didSelectItemModel:(id)a0;
- (void)p_search:(id)a0;
- (void)p_resetSearchVC;
- (void)p_enterSearch;
- (void)p_exitSearch;
- (void)showUserInfo;
- (void)updateSettingsCell;
- (id)getCurrentVersionStr;
- (void)uidLabelTapped:(id)a0;
- (void)didLabelTapped:(id)a0;
- (void)_popSettingsViewController;
- (void)updateTableViewAfterSetTeenMode;
- (void)p_trackSettingShowIfNeeded;
- (BOOL)needUpdateSectionData;
- (void)setupSearchVC;
- (BOOL)isSearching;
- (void).cxx_destruct;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (id)viewModel;
- (void)dealloc;
- (void)setup;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupSearchBar;
- (id)versionString:(id)a0;
- (unsigned long long)footerMargin;

@end
