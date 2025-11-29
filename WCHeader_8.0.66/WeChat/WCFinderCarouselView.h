@class WCFinderCarouselCollectionView, WCFinderCarouselFlowLayout, NSString, NSIndexPath;
@protocol WCFinderCarouselDatasource, WCFinderCarouseDelegate;

@interface WCFinderCarouselView : MMUIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) WCFinderCarouselCollectionView *carouselView;
@property (nonatomic) long long numbers;
@property (retain, nonatomic) NSIndexPath *currentIndexPath;
@property (nonatomic) long long currentIndex;
@property (nonatomic) unsigned long long style;
@property (weak, nonatomic) id<WCFinderCarouseDelegate> delegate;
@property (weak, nonatomic) id<WCFinderCarouselDatasource> dataSource;
@property (retain, nonatomic) WCFinderCarouselFlowLayout *flowLayout;
@property (nonatomic) BOOL endless;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)displayHeightWithWidth:(double)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 flowLayout:(id)a1;
- (void)configureView;
- (void)registerViewClass:(Class)a0 identifier:(id)a1;
- (void)freshCarousel;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)scrollViewWillBeginDecelerating:(id)a0;
- (void)cusScrollViewWillBeginDecelerating:(BOOL)a0 scroll:(id)a1;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)cusScrollAnimationEnd:(id)a0;
- (id)originIndexPath;
- (void)checkOutofBounds;
- (long long)caculateIndex:(long long)a0;
- (void)adjustErrorCell:(BOOL)a0;
- (void)velocityZero;
- (void)nextCell;
- (void)scrollTo:(long long)a0 animation:(BOOL)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)setBackgroundColor:(id)a0;
- (long long)infactNumbers;
- (void).cxx_destruct;

@end
