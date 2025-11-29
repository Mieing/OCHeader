@class AWEECMallSegmentedIndicator, NSArray, AWEECMallSegmentedIndicatorConfig, UICollectionView, AWEECMallSegmentedConfig, AWEECMallSegmentedIndicatorLayout, NSString;
@protocol AWEECMallSegmentedControlDelegate;

@interface AWEECMallSegmentedControl : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) AWEECMallSegmentedConfig *segmentedConfig;
@property (retain, nonatomic) NSArray *segmentedItemArray;
@property (retain, nonatomic) AWEECMallSegmentedIndicatorConfig *segmentedIndicatorConfig;
@property (retain, nonatomic) AWEECMallSegmentedIndicator *segmentedIndicator;
@property (retain, nonatomic) AWEECMallSegmentedIndicatorLayout *indicatorLayout;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) double frameDifference;
@property (nonatomic) long long selectedIndex;
@property (nonatomic) BOOL scrollToSelectedItemIfNeeded;
@property (nonatomic) double lastIndicatorUpdateProgress;
@property (weak, nonatomic) id<AWEECMallSegmentedControlDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)segmentedControlWithConfig:(id)a0 indicatorConfig:(id)a1;
+ (id)segmentedControlWithConfig:(id)a0 itemArray:(id)a1 indicatorConfig:(id)a2;
+ (id)segmentedControlWithConfig:(id)a0;
+ (id)segmentedControlWithItemsArray:(id)a0;
+ (id)segmentedControl;

- (void)updateWithItemsArray:(id)a0;
- (void)updateItemTitle:(id)a0 index:(long long)a1;
- (id)itemViewAtIndex:(long long)a0;
- (void)updateItemImage:(id)a0 index:(long long)a1;
- (void)updateItemSelectedTitle:(id)a0 index:(long long)a1;
- (void)updateIndicatorWithScrollProcess:(double)a0;
- (void)configSubviews;
- (void)calculateItemFrame;
- (void)updateIndicatorFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustedCollectionViewFrame;
- (void)updateCellTitleLabelAtIndex:(long long)a0 progress:(double)a1 unitProgress:(double)a2 currentIndexProgress:(double)a3 isSelected:(BOOL)a4;
- (BOOL)scrollToItemAtIndex:(long long)a0;
- (void)reloadCellAtIndex:(long long)a0;
- (void)configCell:(id)a0 index:(long long)a1;
- (void)updateItemSelectedImage:(id)a0 index:(long long)a1;
- (void)updateIndicatorVisible:(BOOL)a0;
- (void)updateSelectedItemWithIndex:(long long)a0 animated:(BOOL)a1 selectType:(unsigned long long)a2;
- (void)refreshIndicatorColor;
- (void)updateItemSegmentItem:(id)a0 index:(long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })updateFrameWithCurrentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 targetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 progress:(double)a2;
- (void)p_updateSelectedItemWithIndex:(long long)a0 selectType:(unsigned long long)a1;
- (void)replaceItem:(id)a0 atIndex:(long long)a1;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)itemsAtIndex:(long long)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)layoutSubviews;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (BOOL)scrollToItemAtIndex:(long long)a0 animated:(BOOL)a1;
- (id)cellAtIndex:(long long)a0;

@end
