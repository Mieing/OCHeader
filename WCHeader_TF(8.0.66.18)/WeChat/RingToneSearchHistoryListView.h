@class RingToneSearchHistoryViewModel, NSString, UITableView;
@protocol RingToneSearchHistoryListViewDelegate;

@interface RingToneSearchHistoryListView : UIView <UITableViewDelegate, UITableViewDataSource, WCFinderSearchHistoryTableViewCellDelegate, RingToneSearchViewModelDelegate>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) RingToneSearchHistoryViewModel *viewModel;
@property (weak, nonatomic) id<RingToneSearchHistoryListViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)preinit;
- (void)configTableView;
- (void)loadLatestData;
- (void)fetchSuggestion:(id)a0;
- (void)cancelFetchSuggestion;
- (void)addSearchContent:(id)a0;
- (void)deleteAllSearchRecord;
- (void)deleteSearchRecord:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)onRemoveSearchHistory:(id)a0;
- (void)onLoadHistorySuccess;
- (void)onFetchSuggestionSuccess;
- (void)clearCurrentDataSuccess;
- (void).cxx_destruct;

@end
