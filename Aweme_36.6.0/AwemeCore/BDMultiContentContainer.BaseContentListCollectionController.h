@interface BDMultiContentContainer.BaseContentListCollectionController : BDMultiContentContainer.BaseContentListController <UICollectionViewDelegate, BDMultiContentContainer.BaseContentListCollectionControllerProtocol>

- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)init;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;

@end
