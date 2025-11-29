@class WCTimeLineFooterView, NSString, WACommentListFooterTipView, UILabel, NSMutableArray, MMTableView;

@interface TextStateNotifyMsgListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, TextStateLikeCellContentViewDelegate, MMRefreshTableFooterDelegate, TextStateMgrExt>

@property (nonatomic) double cellHeight;
@property (retain, nonatomic) NSString *nsCurStateID;
@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) NSMutableArray *arrInfo;
@property (retain, nonatomic) UILabel *emptyLabel;
@property (retain, nonatomic) WCTimeLineFooterView *footerView;
@property (retain, nonatomic) WACommentListFooterTipView *footer;
@property (nonatomic) BOOL hasMoreReadMessage;
@property (nonatomic) BOOL isUnReadMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (void)viewDidTransitionToNewSize;
- (void)initFooterView;
- (void)initData;
- (void)loadAllData;
- (void)initView;
- (void)reloadTableView;
- (void)loadMoreData;
- (void)onLoadMoreData:(id)a0 loadCount:(unsigned int)a1;
- (void)onTapClearNavigationItem;
- (void)clearNotifications;
- (void)markAllNewMessageRead;
- (void)openStateDetailPageWithId:(id)a0 refCommendId:(unsigned long long)a1 popupLikePage:(BOOL)a2;
- (void)openStateDetailPageWith:(id)a0 refCommendId:(unsigned long long)a1 popupLikePage:(BOOL)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willBeginEditingRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (id)tableView:(id)a0 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)onClickReadMore;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)onClickHeadImageWithInfo:(id)a0;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)onReceiveCommentItem:(id)a0;
- (void)registerYReportSdk;
- (void).cxx_destruct;

@end
