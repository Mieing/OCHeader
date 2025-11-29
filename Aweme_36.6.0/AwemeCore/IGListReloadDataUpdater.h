@class NSString;

@interface IGListReloadDataUpdater : NSObject <IGListUpdatingDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reloadCollectionView:(id)a0 sections:(id)a1;
- (id)objectLookupPointerFunctions;
- (void)performUpdateWithCollectionView:(id)a0 fromObjects:(id)a1 toObjectsBlock:(id /* block */)a2 animated:(BOOL)a3 objectTransitionBlock:(id /* block */)a4 completion:(id /* block */)a5;
- (void)reloadDataWithCollectionView:(id)a0 reloadUpdateBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (void)performUpdateWithCollectionView:(id)a0 animated:(BOOL)a1 itemUpdates:(id /* block */)a2 completion:(id /* block */)a3;
- (void)reloadItemInCollectionView:(id)a0 fromIndexPath:(id)a1 toIndexPath:(id)a2;
- (void)insertItemsIntoCollectionView:(id)a0 indexPaths:(id)a1;
- (void)deleteItemsFromCollectionView:(id)a0 indexPaths:(id)a1;
- (void)moveItemInCollectionView:(id)a0 fromIndexPath:(id)a1 toIndexPath:(id)a2;
- (void)moveSectionInCollectionView:(id)a0 fromIndex:(long long)a1 toIndex:(long long)a2;
- (void)_synchronousReloadDataWithCollectionView:(id)a0;
- (void)_reloadItemsInCollectionView:(id)a0 indexPaths:(id)a1;

@end
