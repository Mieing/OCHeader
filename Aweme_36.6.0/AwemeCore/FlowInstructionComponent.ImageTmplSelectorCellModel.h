@interface FlowInstructionComponent.ImageTmplSelectorCellModel : FlowInstructionComponent.FlowInstructionBaseCellModel <UICollectionViewDelegateFlowLayout, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout> {
    void /* unknown type, empty encoding */ tmplTrailerView;
    void /* unknown type, empty encoding */ imageTmplCellModels;
    void /* unknown type, empty encoding */ selectedTmplCellModel;
    void /* unknown type, empty encoding */ collectionView;
    void /* unknown type, empty encoding */ title;
}

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void).cxx_destruct;

@end
