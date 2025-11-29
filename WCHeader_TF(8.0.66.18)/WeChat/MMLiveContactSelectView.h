@class UIView, NSString, WCContactSelectFixedSearcher;

@interface MMLiveContactSelectView : ContactSelectView <WCContactSelectFixedSearcherDelegate>

@property (retain, nonatomic) WCContactSelectFixedSearcher *liveContactSearcher;
@property (retain, nonatomic) UIView *searchContainerView;
@property (nonatomic) unsigned long long enterType;
@property (nonatomic) long long preferredCellAccessoryType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initTableView;
- (void)initSearchBar;
- (void)updateSearchResult:(id)a0;
- (void)updateSearchingState:(id)a0;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (id)mmsectionIndexTitlesForTableView:(id)a0;
- (void)liveContactBeginSearch;
- (void)liveContactDoSearch:(id)a0 Pre:(BOOL)a1;
- (void)liveContactCancelSearch;
- (id)liveContactCellForSearchViewTable:(id)a0 index:(id)a1;
- (void)liveContactDidSearchViewTableSelect:(id)a0;
- (void)updateWithConfig:(id)a0;
- (void).cxx_destruct;

@end
