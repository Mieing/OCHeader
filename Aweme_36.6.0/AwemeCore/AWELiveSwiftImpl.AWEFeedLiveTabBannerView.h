@interface AWELiveSwiftImpl.AWEFeedLiveTabBannerView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    void /* unknown type, empty encoding */ cardDidClicked;
    void /* unknown type, empty encoding */ trackBannerCellShow;
    void /* unknown type, empty encoding */ flowLayout;
    void /* unknown type, empty encoding */ addDataNumbers;
    void /* unknown type, empty encoding */ bannerData;
    void /* unknown type, empty encoding */ centerIndex;
    void /* unknown type, empty encoding */ lastIndex;
    void /* unknown type, empty encoding */ lastBounds;
    void /* unknown type, empty encoding */ loopDataSource;
    void /* unknown type, empty encoding */ $__lazy_storage_$_banner;
}

- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(struct CGPoint { double x0; double x1; } *)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;

@end
