@class CAGradientLayer, NSString, UICollectionView, UIScrollView, NSMutableArray;

@interface MMFinderLiveNewAnchorTaskMultiTargetsView : MMFinderLiveNewAnchorTaskTargetsView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) NSMutableArray *headerY;
@property (nonatomic) BOOL shouldShowNote;
@property (retain, nonatomic) UICollectionView *taskCollectionView;
@property (retain, nonatomic) UIScrollView *progressScrollView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) NSMutableArray *stageItems;
@property (nonatomic) unsigned int rewardProvideType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;
- (void)layoutUI;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)checkMask:(id)a0;
- (void)reloadProgressScrollView;
- (void)refreshStatus;
- (void).cxx_destruct;

@end
