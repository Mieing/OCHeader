@class UIPanGestureRecognizer, _TtC11FSPagerView22FSPagerViewTransformer, UIView;

@interface FSPagerView.FSPagerView : UIView <UICollectionViewDataSource, UICollectionViewDelegate> {
    void /* unknown type, empty encoding */ collectionViewLayout;
    void /* unknown type, empty encoding */ collectionView;
    void /* unknown type, empty encoding */ contentView;
    void /* unknown type, empty encoding */ timer;
    void /* unknown type, empty encoding */ numberOfItems;
    void /* unknown type, empty encoding */ numberOfSections;
    void /* unknown type, empty encoding */ dequeingSection;
    void /* unknown type, empty encoding */ possibleTargetingIndexPath;
}

@property (nonatomic, weak) void /* function */ dataSource;
@property (nonatomic, weak) void /* function */ delegate;
@property (nonatomic) long long scrollDirection;
@property (nonatomic) double automaticSlidingInterval;
@property (nonatomic) double interitemSpacing;
@property (nonatomic) struct CGSize { double x0; double x1; } itemSize;
@property (nonatomic) BOOL isInfinite;
@property (nonatomic) unsigned long long decelerationDistance;
@property (nonatomic) BOOL isScrollEnabled;
@property (nonatomic) BOOL bounces;
@property (nonatomic) BOOL alwaysBounceHorizontal;
@property (nonatomic) BOOL alwaysBounceVertical;
@property (nonatomic) BOOL removesInfiniteLoopForSingleItem;
@property (nonatomic, retain) UIView *backgroundView;
@property (nonatomic, retain) _TtC11FSPagerView22FSPagerViewTransformer *transformer;
@property (nonatomic, readonly) BOOL isTracking;
@property (nonatomic, readonly) double scrollOffset;
@property (nonatomic, readonly) UIPanGestureRecognizer *panGestureRecognizer;
@property (nonatomic) long long currentIndex;

- (id)dequeueReusableCellWithReuseIdentifier:(id)a0 atIndex:(long long)a1;
- (void)selectItemAtIndex:(long long)a0 animated:(BOOL)a1;
- (void)deselectItemAtIndex:(long long)a0 animated:(BOOL)a1;
- (id)cellForItemAtIndex:(long long)a0;
- (void)flipNextWithSender:(id)a0;
- (void)reloadData;
- (void)collectionView:(id)a0 didHighlightItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(struct CGPoint { double x0; double x1; } *)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)willMoveToWindow:(id)a0;
- (void)layoutSubviews;
- (void)dealloc;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)registerClass:(Class)a0 forCellWithReuseIdentifier:(id)a1;
- (void)registerNib:(id)a0 forCellWithReuseIdentifier:(id)a1;
- (void)scrollToItemAtIndex:(long long)a0 animated:(BOOL)a1;
- (long long)indexForCell:(id)a0;

@end
