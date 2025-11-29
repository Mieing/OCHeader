@class NSArray, NSString, NewSettingViewController, UILabel, SettingIndexNode, UITableView;

@interface SettingSearchViewController : WCSearchViewController <WCSearchBarDelegate, UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSArray *searchResults;
@property (retain, nonatomic) SettingIndexNode *settingIndexRoot;
@property (copy, nonatomic) NSString *currentSearchText;
@property (retain, nonatomic) UILabel *emptyResultLabel;
@property (weak, nonatomic) NewSettingViewController *settingViewController;
@property (copy, nonatomic) id /* block */ onSearchResultSelected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSettingViewController:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)setupSearchBar;
- (void)setupTableView;
- (void)setupEmptyResultView;
- (id)highlightedStringForTitle:(id)a0 withKeyword:(id)a1;
- (id)customSearchBar;
- (void)doSearch;
- (void)performSearch:(id)a0;
- (id)searchInIndexTree:(id)a0 withKeyword:(id)a1;
- (void)searchNode:(id)a0 keyword:(id)a1 results:(id)a2;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })searchKeyword:(id)a0 withString:(id)a1;
- (BOOL)isNodeClickable:(id)a0;
- (void)clearSearchResults;
- (void)updateTableViewWithResults:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)handleNodeSelection:(id)a0;
- (void)onTextFieldChanged:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)mmInputBoxClear;
- (void)mmInputBoxTextChanged:(id)a0 text:(id)a1;
- (void)mmInputBoxFirstResponder;
- (void).cxx_destruct;

@end
