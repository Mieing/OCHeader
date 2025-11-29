@interface BDXPagerListRefreshView : BDXPagerView

@property (nonatomic) double lastScrollingListViewContentOffsetY;

- (id)initWithDelegate:(id)a0 listContainerType:(unsigned long long)a1;
- (void)preferredProcessListViewDidScroll:(id)a0;
- (void)preferredProcessMainTableViewDidScroll:(id)a0;

@end
