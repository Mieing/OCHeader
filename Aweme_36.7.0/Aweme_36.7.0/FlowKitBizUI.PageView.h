@interface FlowKitBizUI.PageView : UIScrollView <UIScrollViewDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_imageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_playButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_loadingIndicator;
    void /* unknown type, empty encoding */ $__lazy_storage_$_retryView;
    void /* unknown type, empty encoding */ image;
    void /* unknown type, empty encoding */ contentFrame;
    void /* unknown type, empty encoding */ pageViewDelegate;
    void /* unknown type, empty encoding */ loadImageSuccess;
    void /* unknown type, empty encoding */ loadingImage;
    void /* unknown type, empty encoding */ isAnimateImage;
    void /* unknown type, empty encoding */ animateImageData;
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ maxImageSize;
    void /* unknown type, empty encoding */ footerHeight;
}

- (id)viewForZoomingInScrollView:(id)a0;
- (void)scrollViewDidZoom:(id)a0;
- (void)scrollViewDidEndZooming:(id)a0 withView:(id)a1 atScale:(double)a2;
- (void)configureLayout;
- (void)scrollViewDoubleTapped:(id)a0;
- (void)playButtonTouched:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (void)viewTapped:(id)a0;
- (void)viewLongPressed:(id)a0;

@end
