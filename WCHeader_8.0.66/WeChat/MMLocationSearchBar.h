@class UIViewController, MMLocationUISearchBar, NSString, NSMutableArray, MMTableView;
@protocol MMLocationSearchBarDelegate, MMLocationSearchResultTableViewDelegate;

@interface MMLocationSearchBar : MMObject <UISearchBarDelegate, UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) MMLocationUISearchBar *m_searchBar;
@property (retain, nonatomic) MMTableView *m_searchResultTableView;
@property (retain, nonatomic) NSMutableArray *m_arrFilteredObject;
@property (weak, nonatomic) UIViewController *m_viewController;
@property (nonatomic) long long m_returnKeyType;
@property (weak, nonatomic) id<MMLocationSearchBarDelegate> m_SearchBarDelegate;
@property (weak, nonatomic) id<MMLocationSearchResultTableViewDelegate> m_tableViewDelegate;
@property (readonly, nonatomic) BOOL isSearching;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSearchBar:(id)a0 tableView:(id)a1 ContentsController:(id)a2;
- (id)initWithSearchBar:(id)a0 tableView:(id)a1 ContentsController:(id)a2 change:(BOOL)a3;
- (void)dealloc;
- (void)initData;
- (void)addNotifications;
- (void)reloadSearchResultData;
- (void)adjustContentView;
- (void)UISplitViewWillChangeSplitMode;
- (id)getObjectFor:(unsigned long long)a0;
- (void)setFilteredObjects:(id)a0;
- (void)updateAddrForShow:(id)a0;
- (unsigned long long)getObjectCount;
- (void)addFilteredObject:(id)a0;
- (void)clearFilteredObjects;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)searchBarSearchButtonClicked:(id)a0;
- (void)searchBarTextDidBeginEditing:(id)a0;
- (BOOL)searchBar:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (void)searchBarCancelButtonClicked:(id)a0;
- (BOOL)searchBarShouldBeginEditing:(id)a0;
- (BOOL)searchBarShouldEndEditing:(id)a0;
- (void)searchBarTextDidEndEditing:(id)a0;
- (void)clearSearch;
- (void)finishSearch;
- (void)searchBarResignFirstResponder;
- (BOOL)isSearchBarFirstResponder;
- (void)enableButton:(id)a0;
- (void)setIsSearching:(BOOL)a0;
- (void).cxx_destruct;

@end
