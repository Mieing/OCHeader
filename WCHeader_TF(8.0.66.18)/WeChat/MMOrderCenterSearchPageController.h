@class MMOrderCenterSearchDataProvider, NSArray, MMUISearchBar, NSString, MMOrderCenterTableViewController, MMTableView;
@protocol MMOrderCenterReporter;

@interface MMOrderCenterSearchPageController : MMUIViewController <UISearchBarDelegate, UITableViewDelegate, UITableViewDataSource, MMOrderCenterOrderSearchHistoryTableViewItemCellDelegate>

@property (retain, nonatomic) MMUISearchBar *searchBar;
@property (retain, nonatomic) NSArray *searchHistoryItems;
@property (retain, nonatomic) MMTableView *historyTableView;
@property (retain, nonatomic) MMOrderCenterSearchDataProvider *dataProvider;
@property (retain, nonatomic) MMOrderCenterTableViewController *resultTable;
@property (retain, nonatomic) id<MMOrderCenterReporter> reporter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFilteringAppId:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidBePushOrPresent:(BOOL)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)searchBarTextDidBeginEditing:(id)a0;
- (void)searchBarSearchButtonClicked:(id)a0;
- (void)searchBarCancelButtonClicked:(id)a0;
- (void)onRemoveKeyword:(id)a0;
- (void)configureViewToShowResult:(BOOL)a0;
- (void)startSearchWithKeyword:(id)a0;
- (void)addSearchHistory:(id)a0;
- (void)removeSearchHistory:(id)a0;
- (void)clearSearchHistory;
- (void)reportEntry;
- (void)reportSearch;
- (void).cxx_destruct;

@end
