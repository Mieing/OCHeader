@class NSArray, HTSLiveInteractiveAPIV2, NSString, NSMutableArray, UITableView;

@interface IESLiveMediaMultiLinkerSettingPanel : IESLiveCommunityInteractPopupViewController <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) NSArray *multiLinkItemInfos;
@property (retain, nonatomic) UITableView *settingListView;
@property (retain, nonatomic) HTSLiveInteractiveAPIV2 *interactAPI;
@property (retain, nonatomic) NSMutableArray *pkSettingItems;
@property (copy, nonatomic) NSArray *multiLinkerSettingItems;
@property (retain, nonatomic) NSMutableArray *pkInviteSettingChildrenIndexList;
@property (nonatomic) BOOL linkEnabled;
@property (nonatomic) BOOL multiLinkEnabled;
@property (nonatomic) BOOL noFollowAuth;
@property (nonatomic) BOOL sendGiftToOthers;
@property (nonatomic) long long multiLinkerSubItemsCount;
@property (copy, nonatomic) NSString *inviteRejectTemporaryText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_reload;
- (void)onSetupNavBar:(id)a0;
- (void)p_buildMultiLinkSettingDataSource;
- (void)p_builSettingView;
- (void)setFollowingFollowedLinkEnabled:(BOOL)a0;
- (void)setHourlyRankLinkEnabled:(BOOL)a0;
- (void)setPopularityRankLinkEnabled:(BOOL)a0;
- (void)setSearchLinkEnabled:(BOOL)a0;
- (id)p_makeSwitchItemWithTitle:(id)a0 initialValue:(BOOL)a1 style:(long long)a2;
- (void)p_updateSetting:(id)a0 completion:(id /* block */)a1;
- (id)cellWithIndex:(long long)a0 section:(long long)a1;
- (BOOL)followingFollowedLinkEnabled;
- (BOOL)hourlyRankLinkEnabled;
- (BOOL)popularityRankLinkEnabled;
- (BOOL)searchLinkEnabled;
- (void)dismiss;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;

@end
