@class NSString, UICollectionView, IESServiceProvider, AWEDetailTrendHeaderMaterialModel;
@protocol AWEDetailViewModelProtocol;

@interface AWETrendMaterialCell : UICollectionViewCell <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, BDVListEventProtocol, AWEFollowShootChoosePopupDelegate>

@property (weak, nonatomic) IESServiceProvider *provider;
@property (weak, nonatomic) id<AWEDetailViewModelProtocol> stateContext;
@property (nonatomic) long long selectedIndex;
@property (nonatomic) BOOL everHorizontalScroll;
@property (retain, nonatomic) UICollectionView *materialCollectionView;
@property (retain, nonatomic) AWEDetailTrendHeaderMaterialModel *materialModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)useCustomRouterActionWithSchema:(id)a0;
- (id)bdv_itemIDForCell:(id)a0 indexPath:(id)a1;
- (void)bdv_cellDidVisible:(id)a0 indexPath:(id)a1 metaData:(id)a2;
- (void)configWithModel:(id)a0 serviceProvider:(id)a1;
- (BOOL)isSmallMaterialCell;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
