@interface FlowKitBizUI.FlowAlbumView : UIView <PHPhotoLibraryChangeObserver, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIScrollViewDelegate> {
    void /* unknown type, empty encoding */ albumIdentifier;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ assets;
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ imageManager;
    void /* unknown type, empty encoding */ itemWidth;
    void /* unknown type, empty encoding */ thumbnailSize;
    void /* unknown type, empty encoding */ cellPreheater;
    void /* unknown type, empty encoding */ limitedAuthorized;
    void /* unknown type, empty encoding */ didSetAsset;
    void /* unknown type, empty encoding */ trackerParam;
    void /* unknown type, empty encoding */ hideSelectedBadgeTemply;
    void /* unknown type, empty encoding */ _didPlaySkeletonView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_layout;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_blankLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_thumbnailFetchOption;
    void /* unknown type, empty encoding */ $__lazy_storage_$_skeletonView;
}

- (void)photoLibraryDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
