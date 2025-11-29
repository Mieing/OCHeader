@interface AWEClassroomImpl.ClassroomAudioSpeedSideBarView : UIView <UICollectionViewDelegate, UICollectionViewDataSource> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ currentSelectedSpeedIndex;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dataArray;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_closeButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionView;
}

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)handleCloseButtonWithSender:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
