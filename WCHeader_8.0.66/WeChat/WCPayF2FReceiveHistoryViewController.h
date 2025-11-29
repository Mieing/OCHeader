@class NSString, NSMutableArray, MMTableView;
@protocol WCPayF2FReceiveHistoryViewControllerDelegate;

@interface WCPayF2FReceiveHistoryViewController : WCPayBaseViewController <UITableViewDelegate, UITableViewDataSource> {
    double kReceiveHistoryItemHeight;
    double kReceiveHistoryItemMargin;
}

@property (weak, nonatomic) id<WCPayF2FReceiveHistoryViewControllerDelegate> delegate;
@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) NSMutableArray *historyList;
@property (nonatomic) BOOL bIsLoadingMorePrevious;
@property (nonatomic) BOOL bIsLoadingMoreNew;
@property (nonatomic) BOOL bIsLoadMoreDataEnd;
@property (nonatomic) BOOL bIsLoadNewDataEnd;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)viewDidBePoped:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)setupData;
- (void)refreshControllerWithLoadMorePreviousRecordHistoryList:(id)a0 isDataLoadEnd:(BOOL)a1 isRefresh:(BOOL)a2;
- (void)refreshControllerWithLoadMoreNewRecordHistoryList:(id)a0 isDataLoadEnd:(BOOL)a1;
- (void)replaceControllerRecordHistoryListAfterSelectTime:(id)a0;
- (void)refreshControllerWithLoadDataFail;
- (void)viewControllerBack;
- (void)setupNavigationBar;
- (void)setupContentView;
- (void)setupEmptyTipsView;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)makeRecordHistoryItemContentView:(id)a0 indexPath:(id)a1;
- (void)onHistoryItemHasBeenPress:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (id)genTableFooterView;
- (id)genTableHeaderView;
- (void).cxx_destruct;

@end
