@interface FlowKit.FeedBackContentView : UIView <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource> {
    void /* unknown type, empty encoding */ optionCount;
    void /* unknown type, empty encoding */ optionList;
    void /* unknown type, empty encoding */ selectOptionIndex;
    void /* unknown type, empty encoding */ placeHolderText;
    void /* unknown type, empty encoding */ inputCell;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionView;
}

- (void)collectionView:(id)a0 didHighlightItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didUnhighlightItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)traitCollectionDidChange:(id)a0;

@end
