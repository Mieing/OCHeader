@interface FlowKit.FlowMarkdownMixedMediaVLMContainerView : FlowKit.FlowMarkdownBaseContainerView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ mediaList;
    void /* unknown type, empty encoding */ miexedMediaModel;
    void /* unknown type, empty encoding */ imageOffset;
    void /* unknown type, empty encoding */ dataSetted;
    void /* unknown type, empty encoding */ isImageType;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ source;
    void /* unknown type, empty encoding */ getCurrentMessageBlock;
    void /* unknown type, empty encoding */ markdownString;
}

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(struct CGPoint { double x0; double x1; } *)a2;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
