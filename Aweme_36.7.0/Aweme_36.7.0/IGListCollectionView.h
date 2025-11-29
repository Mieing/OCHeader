@interface IGListCollectionView : UICollectionView

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 listCollectionViewLayout:(id)a1;
- (void)_didModifyIndexPaths:(id)a0;
- (void)_didModifySections:(id)a0;
- (void)_didModifySection:(unsigned long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_listLayout;
- (void)insertSections:(id)a0;
- (void)deleteSections:(id)a0;
- (void)reloadSections:(id)a0;
- (void)moveSection:(long long)a0 toSection:(long long)a1;
- (void)insertItemsAtIndexPaths:(id)a0;
- (void)deleteItemsAtIndexPaths:(id)a0;
- (void)reloadItemsAtIndexPaths:(id)a0;
- (void)moveItemAtIndexPath:(id)a0 toIndexPath:(id)a1;

@end
