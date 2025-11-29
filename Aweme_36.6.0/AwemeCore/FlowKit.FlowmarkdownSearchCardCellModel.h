@interface FlowKit.FlowmarkdownSearchCardCellModel : NSObject <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    void /* unknown type, empty encoding */ trackPosition;
    void /* unknown type, empty encoding */ output;
    void /* unknown type, empty encoding */ items;
    void /* unknown type, empty encoding */ message;
    void /* unknown type, empty encoding */ collectionView;
    void /* unknown type, empty encoding */ trackParams;
    void /* unknown type, empty encoding */ videoItems;
}

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(struct CGPoint { double x0; double x1; } *)a2;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
