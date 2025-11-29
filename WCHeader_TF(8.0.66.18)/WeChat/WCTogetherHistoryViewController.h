@class WCTogetherHistoryViewModel, CContact, NSString, WCTogetherHistoryReportSession, UITableView;

@interface WCTogetherHistoryViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, WCFacadeExt, WCTogetherHistoryViewModelDelegate, WCCommentDetailViewControllerFBDelegate, WCMomentsUserListHalfScreenViewControllerDelegate, MMNavBarInteractiveDelegate>

@property (readonly, nonatomic) WCTogetherHistoryReportSession *historyReportSession;
@property (retain, nonatomic) WCTogetherHistoryViewModel *viewModel;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) WCTogetherHistoryReportSession *historyReportSession;
@property (readonly, nonatomic) CContact *contact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContact:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (void)loadTableView;
- (void)reloadDataForTableView;
- (void)resizeTableFooterView;
- (void)loadNavigationBar;
- (void)openUserProfileViewControllerWithContact:(id)a0;
- (void)openDetailViewControllerWithDataItem:(id)a0;
- (BOOL)isDataItemPrivate:(id)a0;
- (void)openMultipleImageViewControllerWithViewItem:(id)a0 dataItem:(id)a1 mediaItem:(id)a2;
- (void)alertThatDataItemBlocked:(id)a0;
- (void)confirmToModifyTogetherListWithDataItem:(id)a0;
- (void)modifyTogetherListWithDataItem:(id)a0;
- (void)handleModifyTogetherFinished:(long long)a0 itemID:(id)a1 dataItem:(id)a2;
- (BOOL)isSetNormalToBlackStyle;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)togetherViewModelDidReloadData:(id)a0;
- (void)togetherViewModel:(id)a0 viewItem:(id)a1 didClickContactInfoWithDataItem:(id)a2 contact:(id)a3;
- (void)togetherViewModel:(id)a0 viewItem:(id)a1 didClickLocationInfoWithDataItem:(id)a2;
- (void)togetherViewModel:(id)a0 viewItem:(id)a1 didClickContentDetailWithDataItem:(id)a2;
- (void)togetherViewModel:(id)a0 viewItem:(id)a1 didClickMediaWithDataItem:(id)a2 mediaItem:(id)a3;
- (void)togetherViewModel:(id)a0 viewItemDidClickFriendsInfo:(id)a1;
- (void)onRestartUpload;
- (void)onDeleteData;
- (void)userListViewController:(id)a0 didSelectUserContact:(id)a1;
- (void)onModifyTogetherFinished:(long long)a0 itemID:(id)a1 dataItem:(id)a2;
- (void).cxx_destruct;

@end
