@interface FlowKitBizUI.FlowAlbumSelectFooterView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIScrollViewDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ assets;
    void /* unknown type, empty encoding */ imageManager;
    void /* unknown type, empty encoding */ fixBottomPadding;
    void /* unknown type, empty encoding */ thumbnailSize;
    void /* unknown type, empty encoding */ cellPreheater;
    void /* unknown type, empty encoding */ targetIdentifier;
    void /* unknown type, empty encoding */ dataLoaded;
    void /* unknown type, empty encoding */ canHighLight;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_containerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sendButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_selectionButton;
}

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
