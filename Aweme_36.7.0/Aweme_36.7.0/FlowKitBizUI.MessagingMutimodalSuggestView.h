@interface FlowKitBizUI.MessagingMutimodalSuggestView : UIView <UICollectionViewDelegate, UICollectionViewDataSource> {
    void /* unknown type, empty encoding */ clickHandler;
    void /* unknown type, empty encoding */ containerHeight;
    void /* unknown type, empty encoding */ hasScroll;
    void /* unknown type, empty encoding */ extraParams;
    void /* unknown type, empty encoding */ scene;
    void /* unknown type, empty encoding */ $__lazy_storage_$_containerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionLayout;
    void /* unknown type, empty encoding */ $__lazy_storage_$_separatorView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionView;
}

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void).cxx_destruct;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)scrollViewDidScroll:(id)a0;

@end
