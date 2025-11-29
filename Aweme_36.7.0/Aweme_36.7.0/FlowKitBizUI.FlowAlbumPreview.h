@interface FlowKitBizUI.FlowAlbumPreview : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIScrollViewDelegate> {
    void /* unknown type, empty encoding */ assets;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ dataLoaded;
    void /* unknown type, empty encoding */ targetIdentifier;
    void /* unknown type, empty encoding */ currentPage;
    void /* unknown type, empty encoding */ albumIdentifier;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ scrollDelegate;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionView;
}

- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
