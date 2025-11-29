@class RTVCollectionViewControllerDataProviderContext, NSArray, UICollectionView, RxScheduler, RxDeferred, RxCollectionViewDiffableDataSource, NSString;
@protocol RxInjector;

@interface RTVCollectionViewControllerDataProvider : NSObject <RTVCollectionViewControllerSegmentControllerDelegate, UICollectionViewDelegateFlowLayout, RTVSearchProtocol>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (retain, nonatomic) RxCollectionViewDiffableDataSource *diffableDataSource;
@property (weak, nonatomic) UICollectionView *collectionView;
@property (readonly, nonatomic) RxScheduler *writeScheduler;
@property (copy, nonatomic) NSArray *sectionControllers;
@property (retain, nonatomic) RTVCollectionViewControllerDataProviderContext *context;
@property (retain, nonatomic) RxDeferred *currentCellModelsDefer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (void)renderModel:(id)a0 context:(id)a1;
- (id)__reloadData;
- (id)currentCellModels;
- (void)segmentControllerRequireReloadData:(id)a0;
- (id)searchResultWithKey:(id)a0;
- (id)__segmentControllers;
- (id)cellModelForIndexPath:(id)a0;
- (id)__supplementaryViewIdentifierWithCollectionView:(id)a0 elementKind:(id)a1 indexPath:(id)a2;
- (void)__configWithDataSource:(id)a0 collectionView:(id)a1;
- (void)__registReusableViewForCollecionView:(id)a0;
- (id)currentSectionModels;
- (id)__appendSnapshot:(id)a0 withItemSectionModel:(id)a1;
- (id)__sectionControllerWithSection:(unsigned long long)a0;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void)reloadData;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplaySupplementaryView:(id)a1 forElementKind:(id)a2 atIndexPath:(id)a3;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;

@end
