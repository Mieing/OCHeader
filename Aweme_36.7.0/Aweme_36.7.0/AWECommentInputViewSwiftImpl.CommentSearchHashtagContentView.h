@interface AWECommentInputViewSwiftImpl.CommentSearchHashtagContentView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    void /* unknown type, empty encoding */ didSelectedHashtagBlock;
    void /* unknown type, empty encoding */ collectionHeight;
    void /* unknown type, empty encoding */ hashtagList;
    void /* unknown type, empty encoding */ collectionView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_lineView;
}

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
