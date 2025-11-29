@class DUXPopover, UICollectionView, NSString, NSMutableArray;
@protocol AWEFavoriteSegmentedControlDelegate;

@interface AWEFavoriteSegmentedControl : IESSegmentedControl <UIScrollViewDelegate, DUXPopoverDelegate>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) BOOL isScrolling;
@property (retain, nonatomic) NSMutableArray *fullExposedItemList;
@property (retain, nonatomic) DUXPopover *popover;
@property (nonatomic) BOOL isShowingPopover;
@property (weak, nonatomic) id<AWEFavoriteSegmentedControlDelegate> delegateCustom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultFavoriteSegmentControl;

- (void)popoverDidDisappear:(id)a0;
- (void)hideBubble;
- (void)scrollViewDidEndScroll;
- (void)checkIfCellExpose:(id)a0;
- (void)checkVisibleCellExposeStatusWithDelay;
- (void)checkVisibleCellExposeStatus;
- (void)showBubbleAtIndex:(long long)a0 text:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)reloadItemAtIndex:(long long)a0;

@end
