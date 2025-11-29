@interface AWEMultiContentImpl.ImageContentAdapterCellView : BDMultiContentContainer.ImageContentCellView <AWECellTransitionProtocol, AFDPureModePinchable, AWEVideoInteractiveImageDelegate, AFDSlidesClipCellProtocol> {
    void /* unknown type, empty encoding */ isInFullPage;
    void /* unknown type, empty encoding */ _multiContentMode;
    void /* unknown type, empty encoding */ referString;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backgroundColorView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_lottieLoadingView;
    void /* unknown type, empty encoding */ needNoStickers;
    void /* unknown type, empty encoding */ imageContentViewCornerRadius;
    void /* unknown type, empty encoding */ _imageContentViewInsets;
    void /* unknown type, empty encoding */ _imageContentViewHeightType;
    void /* unknown type, empty encoding */ _contentViewShrinkState;
    void /* unknown type, empty encoding */ isCollectionViewShrinking;
    void /* unknown type, empty encoding */ $__lazy_storage_$_stickerManager;
    void /* unknown type, empty encoding */ topGradientView;
    void /* unknown type, empty encoding */ bottomGradientView;
    void /* unknown type, empty encoding */ bottomMaskImageView;
    void /* unknown type, empty encoding */ gradientBackgroundView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_fullscreenBackgroundView;
    void /* unknown type, empty encoding */ awemeModel;
    void /* unknown type, empty encoding */ albumModel;
    void /* unknown type, empty encoding */ scene;
    void /* unknown type, empty encoding */ storeIsImageDownloaded;
    void /* unknown type, empty encoding */ storeIsFromCache;
    void /* unknown type, empty encoding */ willDisplayStartTime;
    void /* unknown type, empty encoding */ updateContentSizeBlock;
}

- (unsigned long long)currentCellContentMode;
- (void)setCurrentCellContentMode:(unsigned long long)a0;
- (id)pinchTargetView;
- (id)pinchBackgroundViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isContentReady;
- (id)imagePlayerView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imagePlayerFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })customContainerRectForCalculateVideoFrame;
- (id)clipVideoLikePlayerDelegate;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })currentContentRect;
- (BOOL)stickersDidTap:(struct CGPoint { double x0; double x1; })a0;
- (id)stickersFetchCurrentImageView;
- (void)updateSticker;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (void)dealloc;

@end
