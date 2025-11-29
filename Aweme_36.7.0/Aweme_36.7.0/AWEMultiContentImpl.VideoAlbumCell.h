@interface AWEMultiContentImpl.VideoAlbumCell : UICollectionViewCell <AFDSlidesViewActionDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_viewModel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_slidesView;
    void /* unknown type, empty encoding */ musicBeatsDelegate;
}

- (void)sliderDidBeginZooming;
- (void)sliderDidEndZooming;
- (double)currentPlayTimeForMusicBeats;
- (void)sliderDidUpdateWithIndex:(long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
