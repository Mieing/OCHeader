@interface FlowKitBizUI.FlowAlbumSkeletonGridView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIScrollViewDelegate> {
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ itemWidth;
    void /* unknown type, empty encoding */ thumbnailSize;
    void /* unknown type, empty encoding */ $__lazy_storage_$_layout;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionView;
}

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
