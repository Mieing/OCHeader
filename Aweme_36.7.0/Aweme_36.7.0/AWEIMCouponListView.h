@class NSString, UICollectionView, RxCollectionViewDiffableDataSource, AWEIMCouponListViewModel;
@protocol AWEIMCouponListViewDelegate;

@interface AWEIMCouponListView : UIView <UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, AWEIMCouponCollectionViewCellDelegate>

@property (retain, nonatomic) AWEIMCouponListViewModel *viewModel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) RxCollectionViewDiffableDataSource *dataSource;
@property (weak, nonatomic) id<AWEIMCouponListViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)__setupUI;
- (void)__config;
- (void)couponCollectionViewCell:(id)a0 clickedWithViewModel:(id)a1;
- (void)__applySnapshotWithAnimatingDifferences:(BOOL)a0;
- (id)__makeDataSourceWithCollectionView:(id)a0;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)initWithViewModel:(id)a0;

@end
