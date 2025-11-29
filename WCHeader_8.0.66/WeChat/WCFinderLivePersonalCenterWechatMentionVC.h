@class UITableView, WCFinderRefreshTableFooterView, UITableViewDiffableDataSource, WCFinderLivePersonalCenterWechatMentionCellVM, WCFinderDataLoadTips, NSString, WCFinderLivePersonalCenterWechatMentionVM;

@interface WCFinderLivePersonalCenterWechatMentionVC : MMUIViewController <WCFinderLivePersonalCenterWechatMentionVMDelegate, UITableViewDelegate, WCFinderRefreshTableFooterViewDelegate, WCFinderLivePersonalCenterWechatMentionCellDelegate, WCFinderFeedBaseViewControllerProtocol, WCFinderListLoadingStateModelObserver, WCFinderDataLoadTipsDelegate, WCGeneralMonitorDelegate>

@property (retain, nonatomic) WCFinderLivePersonalCenterWechatMentionVM *viewModel;
@property (weak, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UITableViewDiffableDataSource *tableViewDataSource;
@property (retain, nonatomic) WCFinderRefreshTableFooterView *footerView;
@property (retain, nonatomic) WCFinderDataLoadTips *dataLoadTips;
@property (retain, nonatomic) WCFinderLivePersonalCenterWechatMentionCellVM *currentReplyViewModel;
@property (retain, nonatomic) WCFinderLivePersonalCenterWechatMentionCellVM *showProfileViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getCommentSceneStr;

- (id)init;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)setUpRightNav;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidBePoped:(BOOL)a0;
- (void)setupUI;
- (void)setupLoadingState;
- (void)configureTableView;
- (void)layoutLoadTips;
- (void)setupDataSource;
- (id)cellWithIndexPath:(id)a0 itemID:(id)a1;
- (void)updateLoadingState;
- (void)reloadTableData;
- (void)onListLoadingStateModified;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (void)wechatMentionCell:(id)a0 didClickAvatarWithViewModel:(id)a1;
- (void)wechatMentionCell:(id)a0 didClickFollowButton:(id)a1;
- (void)wechatMentionCell:(id)a0 didClickUserTag:(id)a1;
- (void)wechatMentionCellHeightChanged:(id)a0;
- (void)onClickMentionSwitchAction;
- (void)jumpToDataItemWithViewModel:(id)a0;
- (void)showProfileWithViewModel:(id)a0;
- (void)showDataItemWasDeletedTips;
- (void)showDataItemWasPrivateSetTips;
- (void)showCommonWarningTipsWithContent:(id)a0;
- (void)onWechatMentionListDataChangedFrom:(unsigned long long)a0;
- (void)finderFooterDidTriggerRefresh:(id)a0;
- (BOOL)isEnableTriggerRefreshAtScroll:(id)a0;
- (void)onDataLoadTipsClickRetry;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (int)enterType;
- (void)monitorView:(id)a0 newExposedItems:(id)a1 lastExposedItems:(id)a2;
- (void)reportCellElementClickWithViewModel:(id)a0 isFollow:(BOOL)a1;
- (void).cxx_destruct;

@end
