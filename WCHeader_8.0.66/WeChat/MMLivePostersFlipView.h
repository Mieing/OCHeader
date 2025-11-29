@class UIPageControl, NSArray, UICollectionView, NSString, UICollectionViewFlowLayout, UIView;
@protocol MMLivePosterViewProviding;

@interface MMLivePostersFlipView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) NSArray *posterViews;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *collectionViewLayout;
@property (retain, nonatomic) UIPageControl *pagingView;
@property (nonatomic) double singleSideHorizontalSpacing;
@property (readonly, nonatomic) UIView<MMLivePosterViewProviding> *currentPoster;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPosterViews:(id)a0;
- (id)snapshotImageForCurrentPoster;
- (void)layoutSubviews;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)initializeComponents;
- (unsigned long long)currentIndex;
- (void).cxx_destruct;

@end
