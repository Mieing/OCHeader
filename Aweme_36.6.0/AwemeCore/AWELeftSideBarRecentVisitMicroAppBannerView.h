@class NSArray, NSTimer, UICollectionView, NSString;

@interface AWELeftSideBarRecentVisitMicroAppBannerView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (weak, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSTimer *carouselTimer;
@property (readonly, nonatomic) long long realItemCount;
@property (readonly, nonatomic) long long showItemCount;
@property (readonly, nonatomic) BOOL isShouldCarousel;
@property (nonatomic) long long showingIndex;
@property (copy, nonatomic) NSArray *highValueList;
@property (copy, nonatomic) id /* block */ showBlock;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (readonly, nonatomic) BOOL isDoingCarousel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)bannerViewHeight;

- (void)leftSideBarThemeDidChange:(long long)a0;
- (void)startCarousel;
- (void)stopCarousel;
- (long long)showIndexForRealIndex:(long long)a0;
- (BOOL)isShouldCarousel;
- (long long)realItemCount;
- (long long)realIndexForShowIndex:(long long)a0;
- (void)p_stabilizeShowingIndexForScroll;
- (void)p_carouselForNextItem;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)pauseTimer;
- (void)layoutSubviews;
- (void)dealloc;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)resumeTimer;
- (long long)showItemCount;

@end
