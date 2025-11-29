@class NSString, AWETirpHeaderCarouselCollectionView, NSTimer, MyProxy, NSIndexPath, AWETirpHeaderFlowLayout;
@protocol AWEPOIHeaderCarouselDelegate, AWEPOIHeaderCarouselDatasource;

@interface AWETirpHeaderCarouselView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) AWETirpHeaderCarouselCollectionView *carouselView;
@property (nonatomic) long long numbers;
@property (nonatomic) long long currentIndex;
@property (nonatomic) long long infactIndex;
@property (nonatomic) BOOL isPause;
@property (retain, nonatomic) NSIndexPath *currentIndexPath;
@property (retain, nonatomic) MyProxy *timerProxy;
@property (retain, nonatomic) NSTimer *timer;
@property (weak, nonatomic) id<AWEPOIHeaderCarouselDelegate> delegate;
@property (weak, nonatomic) id<AWEPOIHeaderCarouselDatasource> datasource;
@property (readonly, nonatomic) AWETirpHeaderFlowLayout *flowLayout;
@property (readonly, nonatomic) unsigned long long style;
@property (nonatomic) BOOL isAuto;
@property (nonatomic) double autoTimInterval;
@property (nonatomic) BOOL endless;
@property (nonatomic) BOOL carouselAnimated;
@property (nonatomic) double loadMoreOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resumePlay;
- (void)adjustErrorCell:(BOOL)a0;
- (void)addNotify;
- (void)removeNotify;
- (void)appBecomeInactive:(id)a0;
- (void)appBecomeActive:(id)a0;
- (id)originIndexPath;
- (long long)caculateIndex:(long long)a0;
- (long long)infactNumbers;
- (void)velocityZero;
- (void)cusScrollViewWillBeginDecelerating:(BOOL)a0 scroll:(id)a1;
- (void)cusScrollAnimationEnd:(id)a0;
- (void)checkOutofBounds;
- (void)jumpToIndexPath:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1 datasource:(id)a2 flowLayout:(id)a3;
- (void)controllerWillAppear;
- (void)controllerWillDisAppear;
- (void)registerViewClass:(Class)a0 identifier:(id)a1;
- (void)freshCarousel;
- (void)scrollTo:(long long)a0 animation:(BOOL)a1;
- (void).cxx_destruct;
- (void)play;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)pause;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)setBackgroundColor:(id)a0;
- (void)scrollViewWillBeginDecelerating:(id)a0;
- (void)stop;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)dealloc;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)releaseTimer;
- (void)configureView;
- (void)nextCell;

@end
