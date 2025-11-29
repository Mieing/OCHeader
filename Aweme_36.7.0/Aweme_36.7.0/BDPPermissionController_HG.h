@class UITableView, NSString, NSMutableArray, UIImage, BDXBridgeEventSubscriber, BDPUniqueID, UILabel;

@interface BDPPermissionController_HG : BDPViewController <UITableViewDelegate, UITableViewDataSource, BDPGamePermissionTableViewCellDelegate> {
    id /* block */ _jsCallback;
    BDPUniqueID *_uniqueID;
    UILabel *_tipLabel;
    UITableView *_tableView;
    NSMutableArray *_scopeGroups;
}

@property (retain, nonatomic) UIImage *gameSnapshot;
@property (retain, nonatomic) BDXBridgeEventSubscriber *eventSubscriber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showPermissionAfterSnapshotIfNeed:(id)a0 completion:(id /* block */)a1;
+ (BOOL)gameHasFeedSubscribePermission:(id)a0;
+ (BOOL)needForwardSnapshot:(id)a0;

- (void)removeEventSubscriber;
- (void)addEventSubscriber;
- (void)cellClickSwitch:(id)a0 switchView:(id)a1;
- (void)cellClickJumpLink:(id)a0 buttonView:(id)a1;
- (id)initWithUniqueID:(id)a0 snapshot:(id)a1;
- (double)calculationCellHeightWithContent:(id)a0;
- (void)navLoading:(BOOL)a0;
- (void)fitSizeForTipLabel;
- (id)initWithCallback:(id /* block */)a0 uniqueID:(id)a1 snapshot:(id)a2;
- (void)setupGameSnapShotIfNeed;
- (id)buildDefaultGroup;
- (void)bdp_douyinPermission:(id)a0;
- (void)setupDataForGoldIfNeed;
- (void)addSubscribePermission:(id)a0;
- (void)addFeedSubscribePermission;
- (void)addServerPermission:(id)a0;
- (void)addNoAdsServerPermission;
- (id)detailDescriptionStringWithText:(id)a0;
- (void)addScopeGroupsWithGroup:(id)a0;
- (double)calculationContentHeight:(id)a0;
- (void)eventButtonShow:(id)a0;
- (void)calculationCellHeight;
- (id)noAdsServerPermissionButtonText:(long long)a0;
- (id)getTrackerParamsWithExtra:(id)a0;
- (void)eventSettingPageShow;
- (void)eventSettingPageClick:(id)a0;
- (void)eventButtonClick:(id)a0 clickType:(id)a1 btnStatus:(BOOL)a2;
- (void)feedCardSwitchOnChange:(id)a0 item:(id)a1;
- (void)serverItemSwitchOnChange:(id)a0 item:(id)a1;
- (void)defaultSwitchOnChange:(id)a0 item:(id)a1;
- (void)updateOAuthSwitch:(id)a0 switchView:(id)a1;
- (id)getButtonType:(id)a0;
- (long long)getFreeAdCardStatus:(id)a0;
- (void).cxx_destruct;
- (BOOL)prefersStatusBarHidden;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (long long)preferredStatusBarStyle;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (BOOL)shouldAutorotate;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (unsigned long long)supportedInterfaceOrientations;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)setupView;
- (void)setupData;
- (void)updateNavigationTitle;

@end
