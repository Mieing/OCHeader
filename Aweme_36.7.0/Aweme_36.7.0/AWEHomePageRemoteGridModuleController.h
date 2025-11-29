@class NSString;

@interface AWEHomePageRemoteGridModuleController : AWEHomePageRemoteBaseModuleController <AWEHomePageRemoteBaseCollectionViewCellDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)homePageRemoteCollectionViewCellOnCreateView:(id)a0 withItemModel:(id)a1;
- (void)reloadModuleControllerView;
- (double)moduleControllerHeightByWidth:(double)a0 withSection:(long long)a1;
- (id)supportBusinessTypes;
- (long long)collectionViewNumberOfItems:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtRow:(long long)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 sizeForItemAtRow:(long long)a1 withCollectionWidth:(double)a2;
- (double)collectionViewMinimumInteritemSpacing:(id)a0;
- (double)collectionViewMinimumLineSpacing:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 referenceSizeForHeaderInSection:(long long)a1 withCollectionWidth:(double)a2;
- (long long)p_getRealColumnAtRow:(long long)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;

@end
