@class WCFinderAnimationLoadingView, NSString, MMUISearchBar, UILabel, WCFinderMentionUserActionSheetViewModel, UITableView;

@interface WCFinderMentionUserActionSheet : WCFinderCustomPanelSheet <UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate, WCFinderMentionUserActionSheetViewModelDelegate, WCFinderRefreshTableFooterViewDelegate>

@property (retain, nonatomic) WCFinderMentionUserActionSheetViewModel *viewModel;
@property (retain, nonatomic) MMUISearchBar *searchBar;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) WCFinderAnimationLoadingView *loadingView;
@property (retain, nonatomic) UILabel *stateLabel;
@property (nonatomic) BOOL tapDeleteKey;
@property (copy, nonatomic) id /* block */ complete;
@property (nonatomic) unsigned long long searchKey;
@property (nonatomic) unsigned long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sheetWithScene:(unsigned long long)a0 complete:(id /* block */)a1;

- (id)initWithContentView:(id)a0;
- (id)loadContentView;
- (void)viewDidLoad;
- (id)createTableView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)createSearchBar;
- (void)viewWillAppear:(BOOL)a0;
- (void)beginSearch:(id)a0;
- (void)onClickMore:(id)a0;
- (void)mentionSheetVMResultChanged:(id)a0;
- (BOOL)searchBarShouldBeginEditing:(id)a0;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (BOOL)searchBar:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)searchBarTextDidEndEditing:(id)a0;
- (void)_delaySearch;
- (void)searchBarSearchButtonClicked:(id)a0;
- (void)_clickCleanButton;
- (void)didClickFooterRefreshRetry:(id)a0;
- (void)finderFooterDidTriggerRefresh:(id)a0;
- (void)requestNextPage;
- (BOOL)isEnableTriggerRefreshAtScroll:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)updateFooterState;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)showYuanbaoSheetWithContact:(id)a0;
- (void).cxx_destruct;

@end
