@class UITapGestureRecognizer, WCFinderRefreshTableFooterView, NSString, UILabel, WCFinderBlackListViewModel, UITableView;

@interface WCFinderBlackListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCFinderBlackListViewModelDelegate, WCFinderRefreshTableFooterViewDelegate>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) WCFinderBlackListViewModel *viewModel;
@property (retain, nonatomic) WCFinderRefreshTableFooterView *footerView;
@property (retain, nonatomic) UILabel *stateTipsLabel;
@property (retain, nonatomic) UITapGestureRecognizer *stateRetryGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithContact:(id)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)configureTableView;
- (void)stateRetryGestureAction:(id)a0;
- (void)resetDetailToInitStatusWithRetry:(BOOL)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (void)finderBlackListViewModelNeedReloadDataWithContinueFlag:(BOOL)a0;
- (void)finderBlackListFetchFailWithErrorCode:(int)a0;
- (void)revertBlackContactDidSuccess;
- (void)revertBlackContactDidFail;
- (void)didClickFooterRefreshRetry:(id)a0;
- (void)finderFooterDidTriggerRefresh:(id)a0;
- (void).cxx_destruct;

@end
