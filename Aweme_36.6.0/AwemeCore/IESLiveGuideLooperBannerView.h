@class NSArray, UICollectionView, NSTimer, HTSPageControl, NSMutableArray, NSString;
@protocol IESLiveGuideLooperBannerViewDelegate;

@interface IESLiveGuideLooperBannerView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UICollectionView *bannerCollectionView;
@property (retain, nonatomic) NSMutableArray *dataArr;
@property (retain, nonatomic) HTSPageControl *pageControl;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) NSArray *imageArr;
@property (nonatomic) struct CGSize { double width; double height; } preferSize;
@property (weak, nonatomic) id<IESLiveGuideLooperBannerViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_pauseTimer;
- (void)updateWithBannerListOpt:(id)a0;
- (void)p_cycleScroll;
- (id)initWithPreferSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateWithBannerList:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)startTimer;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)updateTimer:(id)a0;
- (void)dealloc;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)setupView;

@end
