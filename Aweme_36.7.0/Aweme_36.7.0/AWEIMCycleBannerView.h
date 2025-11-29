@class AWEIMCycleBannerViewModel, NSString, NSTimer, UICollectionView, AWEIMCycleBannerPageIndicatorView;

@interface AWEIMCycleBannerView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWEIMCycleBannerPageIndicatorView *pageIndicatorView;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) AWEIMCycleBannerViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)adjustCurrentPage;
- (void)configWithViewModel:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)willDisappear;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)setupSubviews;
- (void)willAppear;

@end
