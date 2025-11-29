@class AWEECOMIMPageIndicator, NSTimer, NSArray, UIView, NSDate, UIImageView, NSString, UICollectionView;
@protocol AWEECOMIMBannerViewDelegate;

@interface AWEECOMIMBannerView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWEECOMIMPageIndicator *carouselIndicator;
@property (retain, nonatomic) UIView *bottomLine;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) NSDate *pauseStart;
@property (retain, nonatomic) NSDate *previousFireDate;
@property (nonatomic) long long imageCount;
@property (nonatomic) long long didShowIndex;
@property (nonatomic) long long realShowCount;
@property (weak, nonatomic) id<AWEECOMIMBannerViewDelegate> delegate;
@property (retain, nonatomic) UIImageView *bkgImageView;
@property (copy, nonatomic) NSArray *images;
@property (nonatomic) long long sizeStyle;
@property (nonatomic) long long currentShowIndex;
@property (nonatomic) BOOL enableAutoCarousel;
@property (nonatomic) double dwellTime;
@property (nonatomic) double cornerRadius;
@property (readonly, nonatomic) double aspectRatio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)voiceOverStatusChanged:(id)a0;
- (void)carouselToShow:(long long)a0 withAnimated:(BOOL)a1;
- (void)changePage;
- (long long)realIndex:(long long)a0;
- (void)checkPage:(BOOL)a0;
- (id)initWithSizeStyle:(long long)a0 images:(id)a1;
- (void)registerClass:(Class)a0 withDelegate:(id)a1;
- (void)carouselToShow:(long long)a0;
- (void)scrollAutomtically;
- (void)showWithAnimationStep:(unsigned long long)a0;
- (void)hideWithAnimationStep:(unsigned long long)a0;
- (void)showOrHiddenBkgImageView:(BOOL)a0;
- (void)stopTimer;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)startTimer;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)pauseTimer;
- (void)willMoveToWindow:(id)a0;
- (void)dealloc;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)resumeTimer;

@end
