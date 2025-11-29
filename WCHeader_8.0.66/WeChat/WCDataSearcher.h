@class NSString, NSMutableArray;
@protocol WCDataSearchDelegate;

@interface WCDataSearcher : WCSearcher <UITableViewDelegate, UITableViewDataSource>

@property (weak, nonatomic) id<WCDataSearchDelegate> dataDelegate;
@property (nonatomic) Class resultCellClass;
@property (retain, nonatomic) NSString *lastQuery;
@property (retain, nonatomic) NSMutableArray *arrResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContentViewController:(id)a0;
- (void)clearData;
- (void)prepareSearchBarInNavMode;
- (void)onWCSearchControllerDidAppear:(BOOL)a0;
- (void)onWCSearchControllerDidDisappear:(BOOL)a0;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (void)searchBarCancelButtonClicked:(id)a0;
- (void)doSearch:(id)a0;
- (void)searchBarSearchButtonClicked:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (BOOL)tableView:(id)a0 shouldShowMenuForRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 canPerformAction:(SEL)a1 forRowAtIndexPath:(id)a2 withSender:(id)a3;
- (void)tableView:(id)a0 performAction:(SEL)a1 forRowAtIndexPath:(id)a2 withSender:(id)a3;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void).cxx_destruct;

@end
