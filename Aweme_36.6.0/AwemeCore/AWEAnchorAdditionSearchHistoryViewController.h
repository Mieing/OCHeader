@class AWEAnchorSearchHistoryViewModel, NSString, UIView, UITableView;

@interface AWEAnchorAdditionSearchHistoryViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIView *tableFooterView;
@property (nonatomic) long long anchorType;
@property (retain, nonatomic) AWEAnchorSearchHistoryViewModel *viewModel;
@property (copy, nonatomic) id /* block */ searchHistoryBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)saveSearchHistoryResultWithKeyword:(id)a0;
- (id)initWithAnchorBusinessType:(long long)a0;
- (void)setupBinding;
- (void)updateDeleteAllSearchHistoryView;
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
