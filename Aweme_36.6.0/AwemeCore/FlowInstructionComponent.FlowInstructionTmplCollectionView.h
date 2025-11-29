@interface FlowInstructionComponent.FlowInstructionTmplCollectionView : FlowInstructionComponent.FlowInstructionCellCollectionView <UICollectionViewDelegateFlowLayout, UICollectionViewDelegate> {
    void /* unknown type, empty encoding */ tmplDelegate;
    void /* unknown type, empty encoding */ trailerView;
}

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;

@end
