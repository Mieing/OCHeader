@class ICFlowTableView, NSString, ICFlowModel;

@interface ICFlowTableViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, ICFlowBatchFetchingDelegate, ICFlowModelObserver>

@property (retain, nonatomic) ICFlowModel *model;
@property (retain, nonatomic) ICFlowTableView *tableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithModel:(id)a0;
- (void)reloadWithModel:(id)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (BOOL)shouldBeginBatchFetching;
- (void)startBatchFetching:(id)a0;
- (void)flowModelWillLoadNew:(id)a0;
- (void)flowModel:(id)a0 didFinishLoadNew:(id)a1 error:(id)a2;
- (void)flowModelWillLoadMore:(id)a0;
- (void)flowModel:(id)a0 didFinishLoadMore:(id)a1 error:(id)a2;
- (void)flowModel:(id)a0 didCancelLoadMore:(id)a1;
- (void)flowModelReloadDataItems:(id)a0;
- (void)flowModel:(id)a0 insertDataItemsAt:(id)a1;
- (void)flowModel:(id)a0 deleteDataItemsAt:(id)a1;
- (void)flowModel:(id)a0 insertDataSectionsAt:(id)a1;
- (void)flowModel:(id)a0 deleteDataSectionsAt:(id)a1;
- (void).cxx_destruct;

@end
