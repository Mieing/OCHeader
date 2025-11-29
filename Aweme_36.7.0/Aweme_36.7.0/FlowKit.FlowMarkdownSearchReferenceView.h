@interface FlowKit.FlowMarkdownSearchReferenceView : UIView <UICollectionViewDelegateFlowLayout> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ source;
    void /* unknown type, empty encoding */ getCurrentMessageBlock;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ mainSection;
    void /* unknown type, empty encoding */ isFold;
    void /* unknown type, empty encoding */ isTyping;
    void /* unknown type, empty encoding */ isListAnimation;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bgContainerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleContainerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_searchIconImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_loadingView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_listContainerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_queriesLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_listView;
}

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)handleTapTitleView:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
