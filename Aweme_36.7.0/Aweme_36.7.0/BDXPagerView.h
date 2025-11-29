@class BDXPagerListContainerView, BDXPagerMainTableView, NSMutableDictionary, NSString, UIScrollView, UIView;
@protocol BDXPagerViewDelegate, BDXPagerViewListViewDelegate;

@interface BDXPagerView : UIView <UITableViewDataSource, UITableViewDelegate, BDXPagerListContainerViewDelegate>

@property (readonly, nonatomic) UIScrollView *currentScrollingListView;
@property (readonly, nonatomic) id<BDXPagerViewListViewDelegate> currentList;
@property (readonly, nonatomic) double mainTableViewMaxContentOffsetY;
@property (weak, nonatomic) id<BDXPagerViewDelegate> delegate;
@property (retain, nonatomic) BDXPagerMainTableView *mainTableView;
@property (retain, nonatomic) BDXPagerListContainerView *listContainerView;
@property (weak, nonatomic) UIScrollView *currentScrollingListView;
@property (retain, nonatomic) id<BDXPagerViewListViewDelegate> currentList;
@property (retain, nonatomic) NSMutableDictionary *validListDict;
@property (retain, nonatomic) UIView *tableHeaderContainerView;
@property (nonatomic) long long defaultSelectedIndex;
@property (nonatomic) long long pinSectionHeaderVerticalOffset;
@property (nonatomic) BOOL isListHorizontalScrollEnabled;
@property (nonatomic) BOOL automaticallyDisplayListVerticalScrollIndicator;
@property (nonatomic) BOOL verticalScrollEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)scrollViewClassInlistContainerView:(id)a0;
- (long long)numberOfListsInlistContainerView:(id)a0;
- (void)listContainerViewDidScroll:(id)a0;
- (id)listContainerView:(id)a0 initListForIndex:(long long)a1;
- (void)listContainerViewWDidEndScroll:(id)a0;
- (void)listContainerViewWillBeginDragging:(id)a0;
- (void)invalidatePageView;
- (void)listContainerView:(id)a0 listDidAppearAtIndex:(long long)a1;
- (id)initWithDelegate:(id)a0 listContainerType:(unsigned long long)a1;
- (void)setMainTableViewToMaxContentOffsetY;
- (void)setListScrollViewToMinContentOffsetY:(id)a0;
- (double)minContentOffsetYInListScrollView:(id)a0;
- (void)preferredProcessListViewDidScroll:(id)a0;
- (void)preferredProcessMainTableViewDidScroll:(id)a0;
- (void)refreshTableHeaderView;
- (void)adjustMainScrollViewToTargetContentInsetIfNeeded:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (BOOL)isSetMainScrollViewContentInsetToZeroEnabled:(id)a0;
- (void)listViewDidScroll:(id)a0;
- (void)resizeTableHeaderViewHeightWithAnimatable:(BOOL)a0 duration:(double)a1 curve:(long long)a2;
- (void)reloadData;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)initWithDelegate:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)layoutSubviews;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;

@end
