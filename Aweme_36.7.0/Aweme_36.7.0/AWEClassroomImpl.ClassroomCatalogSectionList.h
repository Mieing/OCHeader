@interface AWEClassroomImpl.ClassroomCatalogSectionList : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ theme;
    void /* unknown type, empty encoding */ isLandscape;
    void /* unknown type, empty encoding */ isShowing;
    void /* unknown type, empty encoding */ isLoading;
    void /* unknown type, empty encoding */ currentUnit;
    void /* unknown type, empty encoding */ lessonInfoManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backgroundView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_blurView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_topMaskView;
}

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)handleBackgroundView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;

@end
