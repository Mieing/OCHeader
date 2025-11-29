@class DUXSearchBar;

@interface AWEMateListContainerViewHolder : AWEBaseListViewHolder

@property (retain, nonatomic) DUXSearchBar *searchBar;

- (void)setupViewHolder;
- (void)updatePlaceholder:(id)a0;
- (void)updateLayout;
- (void).cxx_destruct;
- (double)headerViewHeight;
- (void)showSearchBar;
- (void)hideSearchBar;

@end
