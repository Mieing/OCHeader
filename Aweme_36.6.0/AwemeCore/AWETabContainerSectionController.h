@class AWETabContentViewController, NSString, UICollectionView, UIView;
@protocol AWEListKitSegmentedControlProtocol, AWETabContainerSectionControllerDelegate, AWETabContainerSectionControllerDataSource;

@interface AWETabContainerSectionController : AWEBaseListSectionController <AWETabContentViewControllerDelegate, AWESegmentedControlContextProtocol>

@property (retain, nonatomic) UIView<AWEListKitSegmentedControlProtocol> *segmentedControl;
@property (retain, nonatomic) AWETabContentViewController *tabContentViewController;
@property (nonatomic) long long selectedIndex;
@property (nonatomic) long long itemCount;
@property (nonatomic) BOOL hideSegmentedControl;
@property (weak, nonatomic) id<AWETabContainerSectionControllerDataSource> dataSource;
@property (weak, nonatomic) id<AWETabContainerSectionControllerDelegate> delegate;
@property (readonly, nonatomic) UICollectionView *contentScrollView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })sizeForHeaderWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)viewControllerDidAppear:(BOOL)a0;
- (void)viewControllerWillDisappear:(BOOL)a0 isBeingDismissed:(BOOL)a1 isMovingFromParentViewController:(BOOL)a2;
- (void)viewControllerDidDisappear:(BOOL)a0;
- (void)configSupplementaryHeaderView:(id)a0;
- (void)viewControllerWillAppear:(BOOL)a0 isBeingPresented:(BOOL)a1 isMovingToParentViewController:(BOOL)a2;
- (BOOL)lazyAccessItemViewControllerForTabContent;
- (BOOL)segmentedControlShouldSelectIndex:(long long)a0 fromIndex:(long long)a1;
- (void)segmentedControlDidChangedValue:(long long)a0;
- (void)segmentedControlDidTapAtIndex:(long long)a0;
- (BOOL)enableSegmentedControl;
- (void)updateAndNotifySelectedIndex:(long long)a0 isByTap:(BOOL)a1;
- (void)scrollToItemWithAnimated:(BOOL)a0;
- (id)itemViewControllerAtIndex:(long long)a0;
- (BOOL)lazyAccessItemViewController;
- (void)tabContentViewController:(id)a0 didCreateCollectionView:(id)a1;
- (id)itemViewControllerForTabContentViewController:(id)a0 atIndex:(long long)a1;
- (void)tabContentViewController:(id)a0 contentDidScroll:(id)a1;
- (void)tabContentViewController:(id)a0 didScrollToIndex:(long long)a1;
- (BOOL)tabContentViewControllerShouldDisableAccessibilityAutoScroll:(id)a0;
- (void)updateSegmentedControlVisible:(BOOL)a0 animated:(BOOL)a1;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;
- (Class)cellClass;
- (id)selectedViewController;
- (void)scrollToItemAtIndex:(long long)a0 animated:(BOOL)a1;
- (double)segmentedControlHeight;
- (Class)headerViewClass;

@end
