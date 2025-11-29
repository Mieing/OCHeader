@class WCFinderRefreshTableFooterView, WCFinderSearchEventViewModel, MMUISearchBar, WCFinderEmptyTipsView, NSString, UITableView;
@protocol WCFinderSearchEventViewControllerDelegate;

@interface WCFinderSearchEventViewController : MMUIViewController <WCFinderSearchEventViewModelDelegate, UISearchBarDelegate, UITableViewDelegate, UITableViewDataSource, UIScrollViewDelegate, WCFinderEventPosterViewControllerDelegate, WCFinderEmptyTipsViewDelegate, WCFinderRefreshTableFooterViewDelegate>

@property (retain, nonatomic) WCFinderSearchEventViewModel *viewModel;
@property (retain, nonatomic) MMUISearchBar *searchBar;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) WCFinderEmptyTipsView *emptyTipsView;
@property (retain, nonatomic) WCFinderRefreshTableFooterView *footerView;
@property (weak, nonatomic) id<WCFinderSearchEventViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (id)navigationBarBackgroundColor;
- (void)OnCancel;
- (void)setFlowId:(id)a0;
- (void)setEventVisitId:(id)a0;
- (void)setEmptyTipsViewState:(unsigned long long)a0 config:(id)a1;
- (void)searchBarSearchButtonClicked:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)finderSearchEventReloadAllData;
- (void)finderSearchEventAppendDataFrom:(long long)a0 toIndex:(long long)a1;
- (void)finderSearchEventNoMoreData;
- (void)finderSearchEventError;
- (void)eventPosterViewController:(id)a0 didSelectEvent:(id)a1;
- (void)finderEmptyTipsView:(id)a0 didClickOnState:(unsigned long long)a1;
- (void)didClickFooterRefreshRetry:(id)a0;
- (void)finderFooterDidTriggerRefresh:(id)a0;
- (BOOL)isEnableTriggerRefreshAtScroll:(id)a0;
- (void)registerYReportSdk;
- (void).cxx_destruct;

@end
