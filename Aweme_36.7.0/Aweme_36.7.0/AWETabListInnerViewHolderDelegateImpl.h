@class AWETabListWeakReference, NSString;
@protocol AWETabListViewControllerDelegate, AWETabListViewControllerDataSource;

@interface AWETabListInnerViewHolderDelegateImpl : NSObject <AWETabListInnerViewHolderDelegate>

@property (retain, nonatomic) AWETabListWeakReference *weakReference;
@property (readonly, weak, nonatomic) id<AWETabListViewControllerDelegate> delegate;
@property (readonly, weak, nonatomic) id<AWETabListViewControllerDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)implWithDelegate:(id)a0 dataSource:(id)a1;

- (id)segmentedControlForTabList;
- (struct AWEListKitSegmentedControlMargins { double x0; double x1; })marginsForSegmentedControl;
- (BOOL)autoDetectTabItemRefreshHeader;
- (id)tabItemContentViewAtIndex:(long long)a0;
- (id)tabItemScrollViewAtIndex:(long long)a0;
- (BOOL)adjustTabListWhenTabItemOffsetChanges;
- (double)topSafeArea;
- (double)bottomSafeArea;
- (double)heightForTabListSegmentedControl;
- (void)viewHolder:(id)a0 setupContainerScrollView:(id)a1;
- (BOOL)viewHolder:(id)a0 segmentedControl:(id)a1 shouldSelectIndex:(long long)a2 fromIndex:(long long)a3;
- (void)viewHolder:(id)a0 segmentedControl:(id)a1 didHighlightItemAtIndex:(long long)a2;
- (void)viewHolder:(id)a0 segmentedControl:(id)a1 didTapAtIndex:(long long)a2;
- (void)viewHolder:(id)a0 didUpdateTabSelectedIndex:(unsigned long long)a1 isByTap:(BOOL)a2;
- (void)viewHolder:(id)a0 containerScrollViewDidScroll:(id)a1;
- (void)viewHolder:(id)a0 containerScrollViewWillBeginDragging:(id)a1;
- (void)viewHolder:(id)a0 containerScrollViewDidEndScrolling:(id)a1;
- (void)viewHolder:(id)a0 containerScrollViewWillEndDragging:(id)a1 withVelocity:(struct CGPoint { double x0; double x1; })a2 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a3;
- (void)viewHolder:(id)a0 containerScrollViewDidEndDragging:(id)a1 willDecelerate:(BOOL)a2;
- (BOOL)viewHolder:(id)a0 containerScrollViewShouldScrollToTop:(id)a1;
- (void)viewHolder:(id)a0 containerScrollViewDidScrollToTop:(id)a1;
- (void)viewHolder:(id)a0 tabContainerDidScroll:(id)a1;
- (void)viewHolder:(id)a0 tabContainerDidEndScrolling:(id)a1;
- (void)viewHolder:(id)a0 tabContainerWillBeginDragging:(id)a1;
- (BOOL)viewHolder:(id)a0 enableTabItemScrollViewBounceAtIndex:(long long)a1;
- (BOOL)viewHolder:(id)a0 disableTabItemStickSegmentedControlAtIndex:(long long)a1;
- (BOOL)viewHolder:(id)a0 defaultHideSegmentedControlAtIndex:(long long)a1;
- (BOOL)enableSegmentedControl;
- (void)viewHolder:(id)a0 notifyHeaderAppearance:(BOOL)a1;
- (BOOL)viewHolder:(id)a0 shouldPreloadTabItemAtIndex:(long long)a1;
- (BOOL)viewHolder:(id)a0 enableTabItemRefreshHeaderAtIndex:(long long)a1;
- (void).cxx_destruct;

@end
