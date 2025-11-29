@interface FlowKitBizUI.FlowAlbumPreviewCell : UICollectionViewCell <UIScrollViewDelegate> {
    void /* unknown type, empty encoding */ albumIdentifier;
    void /* unknown type, empty encoding */ representedAssetIdentifier;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ scrollView;
    void /* unknown type, empty encoding */ loadingView;
    void /* unknown type, empty encoding */ playerLayer;
    void /* unknown type, empty encoding */ playerLooper;
    void /* unknown type, empty encoding */ requestID;
    void /* unknown type, empty encoding */ isCellShow;
}

- (void)scrollViewWillBeginZooming:(id)a0 withView:(id)a1;
- (id)viewForZoomingInScrollView:(id)a0;
- (void)scrollViewDidEndZooming:(id)a0 withView:(id)a1 atScale:(double)a2;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
