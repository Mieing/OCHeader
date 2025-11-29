@interface AWEClassroomImpl.ClassroomDetailLessonSelectCell : UICollectionViewCell <UICollectionViewDataSource, UICollectionViewDelegate> {
    void /* unknown type, empty encoding */ selectedLessonId;
    void /* unknown type, empty encoding */ tracker;
    void /* unknown type, empty encoding */ style;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionView;
    void /* unknown type, empty encoding */ cellModel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_holderModels;
}

- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
