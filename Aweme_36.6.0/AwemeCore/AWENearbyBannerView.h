@class AWEDiscoverPageControl, NSTimer, NSArray, UICollectionView, NSMutableArray, NSString;

@interface AWENearbyBannerView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) NSMutableArray *infiniteBannerList;
@property (retain, nonatomic) AWEDiscoverPageControl *pageControl;
@property (retain, nonatomic) NSTimer *loopTimer;
@property (nonatomic) long long currentIndex;
@property (nonatomic) long long lastIndex;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } collectionViewInsets;
@property (nonatomic) double pageControlHeight;
@property (nonatomic) double autoLoopDuration;
@property (nonatomic) BOOL canAutoLoop;
@property (copy, nonatomic) NSArray *bannerRawDataList;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) id /* block */ didClickCellBlock;
@property (copy, nonatomic) id /* block */ didShowCellBlock;
@property (nonatomic) BOOL bannerOutOfScreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startCarousel;
- (void)stopCarousel;
- (void)invalidateLoopTimer;
- (void)loopTimerTick;
- (void)scrollToIndexPath:(id)a0 animated:(BOOL)a1;
- (void)activeLoopTimer;
- (void)updateDataSourceArray:(id)a0 dataHandler:(id /* block */)a1;
- (void)applicationWillResignActive:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)applicationDidBecomeActive:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addObserver;
- (void)scrollViewDidScroll:(id)a0;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setupUI;

@end
