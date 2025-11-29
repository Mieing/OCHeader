@interface AWECommentSwiftBizUI.HorizontalCollectionView : UICollectionView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    void /* unknown type, empty encoding */ currentIdentifier;
    void /* unknown type, empty encoding */ items;
    void /* unknown type, empty encoding */ cellClass;
    void /* unknown type, empty encoding */ customLayout;
    void /* unknown type, empty encoding */ itemClick;
}

- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collectionViewLayout:(id)a1;

@end
