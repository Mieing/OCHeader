@interface AWEAdPhrasePlayerBackgroundView : UIView {
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ baseColor;
    void /* unknown type, empty encoding */ reversedColor;
    void /* unknown type, empty encoding */ baseBottomColor;
    void /* unknown type, empty encoding */ firstRenderImage;
    void /* unknown type, empty encoding */ currentFrame;
    void /* unknown type, empty encoding */ isDynamicColorReady;
    void /* unknown type, empty encoding */ isPlayerRealFrameReady;
    void /* unknown type, empty encoding */ leftTagLabel;
    void /* unknown type, empty encoding */ middleTagLabel;
    void /* unknown type, empty encoding */ rightTagLabel;
    void /* unknown type, empty encoding */ adGradientLayer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_textContainerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_phraseTitleLabel;
}

- (id)initWithModel:(id)a0 targetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
