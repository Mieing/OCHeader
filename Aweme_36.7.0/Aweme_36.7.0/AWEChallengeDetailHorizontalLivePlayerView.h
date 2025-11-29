@class NSArray, UICollectionView, AWEChallengeModel, UICollectionViewFlowLayout, NSString;

@interface AWEChallengeDetailHorizontalLivePlayerView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UIScrollViewDelegate, AWEChallengeDetailHorizontalLivePlayerView>

@property (nonatomic) BOOL showBefore;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *collectionViewLayout;
@property (copy, nonatomic) NSArray *liveDataList;
@property (nonatomic) struct CGPoint { double x; double y; } startDragPoint;
@property (copy, nonatomic) id /* block */ hideLivePlayerBlock;
@property (retain, nonatomic) NSArray *dataSource;
@property (nonatomic) unsigned long long selectedIndex;
@property (nonatomic) unsigned long long startScrollIndex;
@property (retain, nonatomic) AWEChallengeModel *challenge;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configureUI;
- (void)trackShopEvent:(id)a0 shopData:(id)a1;
- (void)notifyShowEvent;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)updateWithModel:(id)a0;

@end
