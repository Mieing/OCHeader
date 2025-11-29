@class MMTableView, NSString, NSMutableArray, WCTimeLineFooterView;

@interface WCOutMsgViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, MMTableViewDelegate, MMRefreshTableFooterDelegate>

@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) WCTimeLineFooterView *footerView;
@property (retain, nonatomic) NSMutableArray *arrMsgInMemory;
@property (nonatomic) BOOL bHasMoreItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)initTableFooterView;
- (void)initTableView;
- (void)addMsgWithArray:(id)a0 MoreData:(BOOL)a1;
- (void)getData;
- (void)getMoreData;
- (void)scrollViewDidScroll:(id)a0;
- (void)onLoadMore;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
