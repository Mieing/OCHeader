@class UITableView, NSString, AWEUITheme, AWELoadMoreFooter, UIView, UILabel, AWESearchBar;
@protocol AWEIMShareLocationSearchDelegate, UITableViewDataSource;

@interface AWEIMShareLocationSearchViewController : UIViewController <UITableViewDelegate, UISearchBarDelegate>

@property (retain, nonatomic) UITableView *searchResultTableView;
@property (copy, nonatomic) NSString *searchText;
@property (retain, nonatomic) AWESearchBar *searchBar;
@property (retain, nonatomic) UIView *searchBackView;
@property (retain, nonatomic) UIView *separateLineView;
@property (retain, nonatomic) AWEUITheme *globalTheme;
@property (weak, nonatomic) id<AWEIMShareLocationSearchDelegate> delegate;
@property (weak, nonatomic) id<UITableViewDataSource> dataSource;
@property (retain, nonatomic) AWELoadMoreFooter *refreshFooter;
@property (copy, nonatomic) NSString *placeholderString;
@property (nonatomic) BOOL transparentTableView;
@property (retain, nonatomic) UILabel *noMoreDataLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_initUI;
- (void)p_setupNavigationBar;
- (void)_layoutUI;
- (void)dismissSelfWithCompletion:(id /* block */)a0;
- (void)__updateTableViewBackgroundColor:(BOOL)a0;
- (void)showEmptyDataPlaceHolder:(BOOL)a0;
- (BOOL)searchBarShouldEndEditing:(id)a0;
- (void).cxx_destruct;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (BOOL)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)searchBarSearchButtonClicked:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)dismissViewController:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
