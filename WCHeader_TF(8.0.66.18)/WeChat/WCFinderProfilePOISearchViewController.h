@class WCFinderProfilePOISearchViewModel, WCFinderRefreshTableFooterView, MMUISearchBar, NSString, UILabel, MMUIButton, UITableView;

@interface WCFinderProfilePOISearchViewController : MMUIHalfScreenViewController <UISearchBarDelegate, UITextFieldDelegate, UITableViewDelegate, UITableViewDataSource, WCFinderProfilePOISearchViewModelDelegate, WCFinderRefreshTableFooterViewDelegate>

@property (retain, nonatomic) MMUIButton *arrowButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) MMUISearchBar *searchBar;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) WCFinderRefreshTableFooterView *footerView;
@property (retain, nonatomic) UILabel *stateTipsLabel;
@property (retain, nonatomic) NSString *currentText;
@property (retain, nonatomic) WCFinderProfilePOISearchViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFinderUsername:(id)a0 viewScene:(int)a1;
- (void)viewDidLoad;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (void)initViews;
- (void)updateSearchBar;
- (void)didClickClose;
- (void)searchBarTextDidBeginEditing:(id)a0;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)onPOISearchResultChanged;
- (void)onPOISearchResultError;
- (void)onFetchResultChanged;
- (void)onFetchResultNoMore;
- (void)onFetchResultError;
- (void)didClickFooterRefreshRetry:(id)a0;
- (void)finderFooterDidTriggerRefresh:(id)a0;
- (BOOL)isEnableTriggerRefreshAtScroll:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)updateTitle;
- (void)traitCollectionDidChange:(id)a0;
- (void)updateSearchBarAppearance;
- (void).cxx_destruct;

@end
