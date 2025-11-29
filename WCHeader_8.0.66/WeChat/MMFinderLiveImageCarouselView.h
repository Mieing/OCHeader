@class NSArray, MMTimer, UICollectionView, NSString;

@interface MMFinderLiveImageCarouselView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UIScrollViewDelegate>

@property (retain, nonatomic) NSArray *viewModelArr;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) MMTimer *timer;
@property (nonatomic) long long autoScrollCurrentIndex;
@property (nonatomic) BOOL isScrolling;
@property (nonatomic) double scrollTimeInterval;
@property (nonatomic) BOOL isForceDisplay;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) BOOL isShowForClear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (void)updateViewModel:(id)a0;
- (BOOL)checkViewModelNotEqual:(id)a0;
- (void)tryUpdateCollectionView:(id)a0;
- (void)updateScrollTimeIfNeeded:(double)a0;
- (void)startAnimation;
- (void)stopAnimation;
- (void)operationViewShow;
- (void)operationViewHide;
- (void)invokeAutoScroll;
- (void)scrollCollectionViewToNext;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void).cxx_destruct;

@end
