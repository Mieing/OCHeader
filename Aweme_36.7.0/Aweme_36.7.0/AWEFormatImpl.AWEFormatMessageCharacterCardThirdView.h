@interface AWEFormatImpl.AWEFormatMessageCharacterCardThirdView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ lastSelectTagBtn;
    void /* unknown type, empty encoding */ $__lazy_storage_$_avatarView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_aiTag;
    void /* unknown type, empty encoding */ $__lazy_storage_$_containerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_nameLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_subTitleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tagStackView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tagCollectionView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_queryStackView;
}

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)tagButtonTapped:(id)a0;
- (void)clickQuery:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
