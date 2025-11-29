@interface TempoiOS.TempoSwiperView : UICollectionView <UICollectionViewDataSource, UICollectionViewDelegate, NSObject> {
    void /* unknown type, empty encoding */ animationName;
    void /* unknown type, empty encoding */ animationGroup;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ firstRending;
    void /* unknown type, empty encoding */ autoScrollTimeInterval;
    void /* unknown type, empty encoding */ animationDuration;
    void /* unknown type, empty encoding */ infiniteLoop;
    void /* unknown type, empty encoding */ isVertical;
    void /* unknown type, empty encoding */ isAutoScrollEnabled;
    void /* unknown type, empty encoding */ onScroll;
    void /* unknown type, empty encoding */ onScrollStart;
    void /* unknown type, empty encoding */ onScrollEnd;
    void /* unknown type, empty encoding */ flowLayout;
    void /* unknown type, empty encoding */ autoScrollTimer;
    void /* unknown type, empty encoding */ hasInitializedFirstPage;
    void /* unknown type, empty encoding */ isScrolling;
    void /* unknown type, empty encoding */ views;
    void /* unknown type, empty encoding */ $__lazy_storage_$_customScroll;
}

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collectionViewLayout:(id)a1;
- (void)dealloc;

@end
