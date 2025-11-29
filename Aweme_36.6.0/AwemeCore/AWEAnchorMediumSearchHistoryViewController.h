@class NSArray, NSString, UIView, UITableView;

@interface AWEAnchorMediumSearchHistoryViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UITableView *tableView;
@property (copy, nonatomic) NSArray *historyList;
@property (retain, nonatomic) UIView *tableFooterView;
@property (copy, nonatomic) id /* block */ searchHistoryClickBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)saveSearchHistoryResultWithKeyword:(id)a0;
- (void)updateDeleteAllSearchHistoryView;
- (void)deleteHistoryItemWithKeyWord:(id)a0;
- (void)deleteAllSearchHistory:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)setupUI;

@end
