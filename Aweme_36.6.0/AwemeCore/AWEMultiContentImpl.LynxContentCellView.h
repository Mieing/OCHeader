@interface AWEMultiContentImpl.LynxContentCellView : BDMultiContentContainer.BaseDefaultContentCellView <AWEKnowledgeLynxContentCellViewProtocol, AFDSlidesClipCellProtocol> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_lynxContentView;
    void /* unknown type, empty encoding */ isInFullPage;
    void /* unknown type, empty encoding */ multiContentMode;
    void /* unknown type, empty encoding */ referString;
    void /* unknown type, empty encoding */ needNoStickers;
    void /* unknown type, empty encoding */ notFadeOut;
    void /* unknown type, empty encoding */ imageContentViewInsets;
    void /* unknown type, empty encoding */ imageContentViewHeightType;
    void /* unknown type, empty encoding */ contentViewShrinkState;
    void /* unknown type, empty encoding */ $__lazy_storage_$_stickerManager;
    void /* unknown type, empty encoding */ topGradientView;
    void /* unknown type, empty encoding */ bottomGradientView;
    void /* unknown type, empty encoding */ bottomMaskImageView;
    void /* unknown type, empty encoding */ gradientBackgroundView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_fullscreenBackgroundView;
    void /* unknown type, empty encoding */ awemeModel;
    void /* unknown type, empty encoding */ albumModel;
    void /* unknown type, empty encoding */ scene;
    void /* unknown type, empty encoding */ videoContentSizeChangedBlock;
}

- (id)viewForLynxCellContentView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })currentContentRect;
- (BOOL)stickersDidTap:(struct CGPoint { double x0; double x1; })a0;
- (id)stickersFetchCurrentImageView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;

@end
