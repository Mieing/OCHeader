@class UITableView, NSString, WCFinderSearchReportModel, WCFinderMoreLiveSearchSuggestionViewModel;
@protocol WCFinderMoreLiveSearchHistoryViewDelegate;

@interface WCFinderMoreLiveSearchHistoryView : UIView <UITableViewDelegate, UITableViewDataSource, WCFinderMoreLiveSearchHistoryTableViewCellDelegate, WCFinderMoreLiveSearchSuggestionViewModelDelegate>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) WCFinderMoreLiveSearchSuggestionViewModel *viewModel;
@property (retain, nonatomic) WCFinderSearchReportModel *reportModel;
@property (weak, nonatomic) id<WCFinderMoreLiveSearchHistoryViewDelegate> delegate;
@property (nonatomic) unsigned long long searchScene;
@property (nonatomic) int commentScene;
@property (copy, nonatomic) NSString *searchSessionId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)configTableView;
- (void)loadLatestData;
- (void)fetchSuggestion:(id)a0;
- (void)cancelFetchSuggestion;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)onRemoveSearchHistory:(id)a0;
- (void)onMoreLiveSearchSuggestionLoadHistorySuccess;
- (void)onMoreLiveSearchSuggestionFetchSuggestionSuccess;
- (void)onMoreLiveSearchSuggestionClearCurrentDataSuccess;
- (void)fillReportParams:(BOOL)a0;
- (void).cxx_destruct;

@end
