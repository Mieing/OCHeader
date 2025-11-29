@interface AWEFormatTopicCardView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    void /* unknown type, empty encoding */ topicDidSelect;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ topicFlowLayout;
    void /* unknown type, empty encoding */ $__lazy_storage_$_infoView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backgroundImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_topicCollectionView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_splitView;
}

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
