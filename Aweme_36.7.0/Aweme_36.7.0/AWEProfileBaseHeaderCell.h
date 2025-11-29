@class NSString, DUXPopover, UICollectionView, AWEProfileBaseContainerContext, UIView, NSMutableArray, AWEProfileBaseHeaderRightFixedAreaView;
@protocol AWEProfileBaseHeaderDelegate;

@interface AWEProfileBaseHeaderCell : UICollectionViewCell <UICollectionViewDelegate, UICollectionViewDataSource, DUXPopoverDelegate>

@property (retain, nonatomic) AWEProfileBaseContainerContext *context;
@property (nonatomic) long long selectIndex;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) BOOL isScrolling;
@property (retain, nonatomic) DUXPopover *popover;
@property (nonatomic) BOOL bubbleIsShowing;
@property (retain, nonatomic) AWEProfileBaseHeaderRightFixedAreaView *rightFixedAreaView;
@property (retain, nonatomic) NSMutableArray *fullExposedItemList;
@property (nonatomic) BOOL isNeedShowCellBackgroundStatus;
@property (retain, nonatomic) UIView *indicatorView;
@property (nonatomic) BOOL ignoreProgressEvent;
@property (nonatomic) BOOL isNewFullScreenStyle;
@property (weak, nonatomic) id<AWEProfileBaseHeaderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cellHeight;

- (void)popoverDidDisappear:(id)a0;
- (void)showBubbleWithText:(id)a0 index:(long long)a1;
- (void)configWithContext:(id)a0;
- (void)hideBubble;
- (void)scrollViewDidEndScroll;
- (void)updateIndicatorToIndex:(long long)a0 animated:(BOOL)a1;
- (void)updateScrollProgress:(double)a0;
- (void)reloadRightFixedAreaWithViewsArray:(id)a0;
- (void)updateIndicator:(long long)a0 right:(long long)a1 percent:(double)a2;
- (BOOL)onlyShowTitle:(unsigned long long)a0;
- (void)checkIfCellExpose:(id)a0;
- (void)updateSelectedIndex:(long long)a0 scrollCenter:(BOOL)a1 animated:(BOOL)a2;
- (id)segmentViewWithIndex:(long long)a0;
- (void)newProfileCellHasBackgroundWithStatus:(BOOL)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)setupUI;

@end
