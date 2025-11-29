@interface FlowKitBizUI.FlowSearchResultBlockView : FlowKitBizUI.FlowBaseBlockView <UICollectionViewDelegateFlowLayout> {
    void /* unknown type, empty encoding */ tapResultBlock;
    void /* unknown type, empty encoding */ resultItemShow;
    void /* unknown type, empty encoding */ tapBottomViewBlock;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ $__lazy_storage_$_listView;
    void /* unknown type, empty encoding */ listBottomView;
}

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)handleTapBottomView:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
