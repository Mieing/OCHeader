@class WCFinderPrivacySettingHelper, WCFinderHistorySettingsHelper, NSString, FinderNewUserPrepareResponse, WCTableViewManager;

@interface WCFinderSpliceSettingViewController : MMUIViewController <WCFinderSwitchExt, WCActionSheetDelegate, INewSyncExt, ILinkEventExt, IUpdateProfileMgrExt, WCFinderHistorySwitchExtension, WCFinderPrivacySettingHelperDelegate>

@property (retain, nonatomic) WCTableViewManager *tableViewManager;
@property (retain, nonatomic) FinderNewUserPrepareResponse *userPrepare;
@property (retain, nonatomic) WCFinderPrivacySettingHelper *helper;
@property (nonatomic) long long features;
@property (retain, nonatomic) WCFinderHistorySettingsHelper *historyHelper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithUserPrepare:(id)a0 contact:(id)a1 title:(id)a2 features:(long long)a3;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewDidBePushOrPresent:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)configureTableView;
- (void)reloadTableView;
- (void)requestReloadTableView;
- (id)getWatchSection;
- (void)addLiveSections:(id)a0;
- (void)addIdentityPrivacyCell:(id)a0;
- (void)onClickIdentityPrivacy;
- (void)onClickAccountSelector;
- (void)addLiveShowGameLvCell:(id)a0;
- (void)willDisplayCell:(id)a0 indexPath:(id)a1;
- (void)_onClickLiveShowGameLv;
- (BOOL)enableGloryShowSwitch;
- (void)addLiveGloryCell:(id)a0;
- (void)onGloryShowSwitchClick:(id)a0;
- (id)createShieldHisLikedFeedCell;
- (id)createShieldMyLikedFeedCell;
- (void)addPrivacyAccountCell:(id)a0;
- (void)clickPrivacyIdentitySwitch:(id)a0;
- (id)makeSectionSeparator;
- (void)clickShieldLikedFeedForHim:(id)a0;
- (void)clickSieldHisLikedFeed:(id)a0;
- (void)clickShieldFinder:(id)a0;
- (void)displayShieldLikedFeedSettingVCWithCell:(id)a0 viewModel:(id)a1;
- (void)showPersonalizedRecommendationSwitch;
- (void)showInterativeInformationVC;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onProfileChange;
- (void)finderLiveIdentityChange;
- (void)finderLiveUpdateIdentity;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)onNewSyncModUserInfoExt:(id)a0;
- (void)registerYReportSdk;
- (void)onClickSwitchContinueCell:(id)a0;
- (void)updateLocalContinueCollectionFlag:(BOOL)a0;
- (void)onClickSwitchPipCell:(id)a0;
- (void)onFinderHistorySwitchChanged:(BOOL)a0;
- (void).cxx_destruct;

@end
