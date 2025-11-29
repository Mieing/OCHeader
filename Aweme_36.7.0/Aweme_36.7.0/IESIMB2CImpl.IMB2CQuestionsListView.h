@interface IESIMB2CImpl.IMB2CQuestionsListView : UIView <UICollectionViewDelegateFlowLayout, UICollectionViewDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ uiService;
    void /* unknown type, empty encoding */ sectionViewModels;
    void /* unknown type, empty encoding */ questionsContext;
    void /* unknown type, empty encoding */ cellHeight;
    void /* unknown type, empty encoding */ headerHeight;
    void /* unknown type, empty encoding */ minimumInteritemSpacing;
    void /* unknown type, empty encoding */ edgeInset;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dataSource;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cellProvider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_supplementaryViewProvider;
}

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (void).cxx_destruct;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
