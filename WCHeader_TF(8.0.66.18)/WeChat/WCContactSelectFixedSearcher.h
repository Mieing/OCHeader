@class ContactSelectSearcherConfig, NSString, MMUISearchBar, NSMutableArray, MMTableView;
@protocol WCContactSelectFixedSearcherDelegate;

@interface WCContactSelectFixedSearcher : NSObject <UISearchBarDelegate, UITableViewDelegate, UITableViewDataSource>

@property (nonatomic) BOOL isSearching;
@property (retain, nonatomic) MMUISearchBar *searchBar;
@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) ContactSelectSearcherConfig *config;
@property (retain, nonatomic) NSString *lastQuery;
@property (retain, nonatomic) NSMutableArray *arrResult;
@property (weak, nonatomic) id<WCContactSelectFixedSearcherDelegate> searchDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)preferSearchBarHeight;
+ (double)preferSearchTableWidth;
+ (double)preferSearchTableHeight;

- (id)initWithSearchResultTableView:(id)a0;
- (void)dealloc;
- (void)createSearchBar;
- (void)updateWithConfig:(id)a0;
- (void)searchBarTextDidBeginEditing:(id)a0;
- (void)searchBarTextDidEndEditing:(id)a0;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (void)searchBarSearchButtonClicked:(id)a0;
- (void)searchBarCancelButtonClicked:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)initData;
- (void)clearData;
- (id)getSearchBarTextField;
- (void)setEmptyFooterView;
- (void)setNoResultFooterView:(id)a0;
- (void)setLoadingFooterView:(id)a0;
- (void).cxx_destruct;

@end
