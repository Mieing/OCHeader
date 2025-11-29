@class UICollectionViewLayout, NSString, UICollectionView, NSTimer, NSDate, NSIndexPath, DUXCarouselIndicator;
@protocol DUXMultiLayoutBannerDelegate, DUXMultiLayoutBannerDataSource;

@interface DUXMultiLayoutBanner : UIView <UICollectionViewDataSource, UICollectionViewDelegate, DUXTriptychBannerLayoutDelegate>

@property (nonatomic) long long currentShowIndex;
@property (nonatomic) unsigned long long bannerType;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewLayout *layout;
@property (nonatomic) double triptychBannerColumn;
@property (retain, nonatomic) NSIndexPath *lastWillDisplayIndexPath;
@property (retain, nonatomic) NSIndexPath *lastDidEndDisplayIndexPath;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) NSDate *pauseStart;
@property (retain, nonatomic) NSDate *previousFireDate;
@property (retain, nonatomic) DUXCarouselIndicator *carouselIndicator;
@property (nonatomic) BOOL isTimerPause;
@property (nonatomic) BOOL enableAutoCarousel;
@property (nonatomic) double dwellTime;
@property (weak, nonatomic) id<DUXMultiLayoutBannerDataSource> dataSource;
@property (weak, nonatomic) id<DUXMultiLayoutBannerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)duxGrid_viewDidChangeBreakPointFrom:(struct { long long x0; long long x1; })a0 toBreakPoint:(struct { long long x0; long long x1; })a1;
- (void)setupStatus;
- (void)carouselToShow:(long long)a0 withAnimated:(BOOL)a1;
- (void)carouselToShow:(long long)a0;
- (void)removeTimer;
- (id)dequeueReusableCellWithClass:(Class)a0 forIndexPath:(id)a1;
- (void)registerCellClass:(Class)a0;
- (void)addTimerIfNeed;
- (double)triptychBannerWidth;
- (double)triptychBannerViewInterItemSpacing;
- (void)scrollBannerToIndex:(long long)a0 animated:(BOOL)a1 auted:(BOOL)a2;
- (void)collectionView:(id)a0 centerStopAtIndex:(long long)a1;
- (void)reloadData;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)didMoveToSuperview;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)pauseTimer;
- (void)layoutSubviews;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)resumeTimer;
- (void)setupView;
- (id)initWithLayoutType:(unsigned long long)a0;
- (void)handleTimer:(id)a0;
- (void)updateContentOffset;

@end
