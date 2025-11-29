@interface FlowInstructionComponent.ImageSingleSelectorWithTmplCellModel : FlowInstructionComponent.FlowInstructionBaseCellModel <UICollectionViewDelegateFlowLayout, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout> {
    void /* unknown type, empty encoding */ tmplCellModels;
    void /* unknown type, empty encoding */ selectIndex;
    void /* unknown type, empty encoding */ selectIdentifier;
    void /* unknown type, empty encoding */ scrollToIndex;
    void /* unknown type, empty encoding */ trackMap;
    void /* unknown type, empty encoding */ currentStyleList;
    void /* unknown type, empty encoding */ outterSelectIdentifier;
    void /* unknown type, empty encoding */ collectionView;
    void /* unknown type, empty encoding */ title;
}

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void).cxx_destruct;

@end
