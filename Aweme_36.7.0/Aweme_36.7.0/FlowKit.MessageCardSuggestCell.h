@interface FlowKit.MessageCardSuggestCell : FlowKitBizUI.MessageCell <UICollectionViewDelegateFlowLayout, UICollectionViewDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleContainer;
    void /* unknown type, empty encoding */ sectionIdentifier;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ collectionLayout;
    void /* unknown type, empty encoding */ cellModels;
    void /* unknown type, empty encoding */ component;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionView;
    void /* unknown type, empty encoding */ gradientColors;
}

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
