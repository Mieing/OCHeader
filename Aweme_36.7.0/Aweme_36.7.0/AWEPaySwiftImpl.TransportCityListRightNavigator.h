@interface AWEPaySwiftImpl.TransportCityListRightNavigator : UIView <UICollectionViewDelegateFlowLayout, UICollectionViewDelegate, UICollectionViewDataSource> {
    void /* unknown type, empty encoding */ indexTextArray;
    void /* unknown type, empty encoding */ onUserSelected;
    void /* unknown type, empty encoding */ indicatorTextArray;
    void /* unknown type, empty encoding */ selectedItem;
    void /* unknown type, empty encoding */ $__lazy_storage_$_innerCollectionView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionLayout;
    void /* unknown type, empty encoding */ $__lazy_storage_$_selectedBackgroundView;
}

- (void)handleGesWithSender:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
