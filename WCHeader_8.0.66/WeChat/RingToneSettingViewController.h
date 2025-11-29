@class RingToneSettingHeaderView, VideoRingExclusiveFriendsViewModel, RingTonePickerViewController, VideoRingNetProvider, NSString, RingToneMixPlayer, RingToneVideoFeedViewController, AnyPromise, RingToneHomePageActionReporter_23612, MMTableView, WCTimeLineFooterView;

@interface RingToneSettingViewController : MMUIViewController <RingToneSettingHeaderViewDelegate, MMRefreshTableFooterDelegate, UITableViewDelegate, UITableViewDataSource, VideoRingExclusiveFriendsViewModelDelegate, SelectContactsViewControllerDelegate, RingToneExclusiveFriendTableViewCellDelegate, VideRingModifyExt, IVOIPWindowExt>

@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) VideoRingExclusiveFriendsViewModel *viewModel;
@property (retain, nonatomic) RingToneSettingHeaderView *tableHeaderView;
@property (retain, nonatomic) WCTimeLineFooterView *footerView;
@property (retain, nonatomic) RingToneMixPlayer *player;
@property (nonatomic) long long activeIndex;
@property (retain, nonatomic) VideoRingNetProvider *provider;
@property (retain, nonatomic) RingToneHomePageActionReporter_23612 *reporter;
@property (retain, nonatomic) RingTonePickerViewController *pickerVC;
@property (retain, nonatomic) RingToneVideoFeedViewController *pickerVC2;
@property (retain, nonatomic) AnyPromise *preload_friendsRingPromise;
@property (retain, nonatomic) AnyPromise *preload_globalRingPromise;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFromChennel:(unsigned long long)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)initHistoryItem;
- (void)jumpToHistoryList;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillBePoped:(BOOL)a0;
- (id)navigationBarBackgroundColor;
- (void)initTableView;
- (void)initFooterView;
- (void)fetchNextPage;
- (void)reloadTableData;
- (void)loadGlobalRingData;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)onHeaderViewAddExclusiveRingTap;
- (void)onHeaderViewSwitchButtonTap;
- (void)pickNewGlobalRing;
- (void)onHeaderViewPlayButtonTap:(BOOL)a0;
- (void)onHeaderViewJumpFinder:(id)a0;
- (void)onHeaderViewJumpPlayer:(id)a0;
- (void)resetRingToDefault;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)a0;
- (void)onDataChangedForIndex:(long long)a0;
- (void)onSelectContactReturn:(id)a0 atScene:(unsigned int)a1;
- (BOOL)hideFavourContactCandidate;
- (BOOL)onFilterContactCandidate:(id)a0;
- (void)onExistContactDidSelected:(id)a0;
- (void)onExclusiveRingSwitch:(id)a0;
- (void)onExclusiveRingPlay:(id)a0 isToPlay:(BOOL)a1;
- (void)onExclusiveRingJumpFinder:(id)a0;
- (void)onGlobalRingModified:(id)a0 opType:(unsigned long long)a1;
- (void)onExclusiveRingModified:(id)a0 opType:(unsigned long long)a1;
- (void)checkFirstSetRingTone;
- (void)checkShowRingbackSwitch;
- (void)onVoipWindowDidAppear;
- (void).cxx_destruct;

@end
