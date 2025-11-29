@class NSString, NSTimer, IESLLTempoContext, UICollectionViewFlowLayout, NSMutableArray;

@interface IESLLTempoSwiperView : UICollectionView <UICollectionViewDataSource, UICollectionViewDelegate>

@property (retain, nonatomic) UICollectionViewFlowLayout *flowLayout;
@property (retain, nonatomic) NSTimer *autoScrollTimer;
@property (nonatomic) BOOL hasInitializedFirstPage;
@property (nonatomic) BOOL isScrolling;
@property (retain, nonatomic) NSMutableArray *views;
@property (nonatomic) long long numberOfItems;
@property (weak, nonatomic) IESLLTempoContext *context;
@property (nonatomic) BOOL infiniteLoop;
@property (nonatomic) BOOL isVertical;
@property (nonatomic) BOOL isAutoScrollEnabled;
@property (nonatomic) double autoScrollTimeInterval;
@property (nonatomic) double animationDuration;
@property (copy, nonatomic) id /* block */ onScroll;
@property (copy, nonatomic) id /* block */ onScrollStart;
@property (copy, nonatomic) id /* block */ onScrollEnd;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)swiperViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

- (BOOL)isScrollContainer;
- (void)resumeAnimationIfNeed;
- (void)didBuildView;
- (void)completeShow;
- (void)endShow;
- (void)automaticScroll;
- (void)initializeWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)fakePageOffset;
- (void)setFakePage:(long long)a0 animated:(BOOL)a1;
- (void)tryToStartTimer;
- (void)stopAutoScrollTimer;
- (long long)fakeNumberOfItems;
- (BOOL)canLoop;
- (void)updateCell:(id)a0 withItemView:(id)a1;
- (long long)getRealIndex:(id)a0;
- (long long)fakeCurrentPage;
- (void)checkScrollToBoundary;
- (void)configureWithNode:(id)a0;
- (BOOL)addSwiperItemView:(id)a0 atIndex:(long long)a1;
- (BOOL)removeSwiperItemViewAtIndex:(long long)a0;
- (void)setCurrentPage:(long long)a0 animated:(BOOL)a1;
- (void)reloadData;
- (long long)currentIndex;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)clearAllItems;
- (void)scrollViewDidScroll:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collectionViewLayout:(id)a1;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)willShow;

@end
