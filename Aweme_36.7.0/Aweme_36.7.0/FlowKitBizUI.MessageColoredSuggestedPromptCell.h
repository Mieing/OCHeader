@interface FlowKitBizUI.MessageColoredSuggestedPromptCell : FlowKitBizUI.MessageCell <UICollectionViewDelegate, UICollectionViewDataSource> {
    void /* unknown type, empty encoding */ localMessageID;
    void /* unknown type, empty encoding */ botId;
    void /* unknown type, empty encoding */ contentSizeObservation;
    void /* unknown type, empty encoding */ forbidTrack;
    void /* unknown type, empty encoding */ isVerticalLayout;
    void /* unknown type, empty encoding */ numberOfSuggestsItems;
    void /* unknown type, empty encoding */ sizeOfSuggestsItems;
    void /* unknown type, empty encoding */ styleOfSuggestsItems;
    void /* unknown type, empty encoding */ configurationItemCell;
    void /* unknown type, empty encoding */ didSelectItemCell;
    void /* unknown type, empty encoding */ willDisplayItemCell;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_leadingGradientLayer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_trailingGradientLayer;
}

- (void)prepareForReuse;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
