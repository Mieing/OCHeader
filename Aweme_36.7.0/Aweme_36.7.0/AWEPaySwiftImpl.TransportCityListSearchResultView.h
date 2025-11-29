@interface AWEPaySwiftImpl.TransportCityListSearchResultView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UICollectionViewDelegate> {
    void /* unknown type, empty encoding */ resultDataArray;
    void /* unknown type, empty encoding */ isKeywordEmpty;
    void /* unknown type, empty encoding */ onUserSelect;
    void /* unknown type, empty encoding */ $__lazy_storage_$_innerCollectionView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionLayout;
    void /* unknown type, empty encoding */ $__lazy_storage_$_notSupportedView;
    void /* unknown type, empty encoding */ viewModels;
}

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;

@end
