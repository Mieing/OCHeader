@interface AWEPaySwiftImpl.CCMEntryPromotionView : UIView <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_container;
    void /* unknown type, empty encoding */ $__lazy_storage_$_lineView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_title;
    void /* unknown type, empty encoding */ $__lazy_storage_$_info;
    void /* unknown type, empty encoding */ $__lazy_storage_$_subTitle;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionView;
    void /* unknown type, empty encoding */ discount;
    void /* unknown type, empty encoding */ discountSegments;
    void /* unknown type, empty encoding */ discountLevel;
    void /* unknown type, empty encoding */ needSeparateLine;
    void /* unknown type, empty encoding */ onTappedInfo;
}

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)onInfoClick;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
