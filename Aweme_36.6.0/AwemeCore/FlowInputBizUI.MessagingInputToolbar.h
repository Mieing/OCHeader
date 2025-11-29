@interface FlowInputBizUI.MessagingInputToolbar : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ items;
    void /* unknown type, empty encoding */ isImmersiveMode;
    void /* unknown type, empty encoding */ maxCountInLine;
    void /* unknown type, empty encoding */ interitemSpacing;
    void /* unknown type, empty encoding */ lineSpacing;
    void /* unknown type, empty encoding */ itemHeight;
    void /* unknown type, empty encoding */ edgeInsets;
    void /* unknown type, empty encoding */ toolbarType;
    void /* unknown type, empty encoding */ collectionView;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
