@interface AWEFormatImpl.LivePresentingContentView : UIView {
    void /* unknown type, empty encoding */ currentPresentContentIds;
    void /* unknown type, empty encoding */ currentTextMap;
    void /* unknown type, empty encoding */ currentAttributedTextMap;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bgView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_liveContentLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_loadingView;
    void /* unknown type, empty encoding */ maxNumberOfLines;
    void /* unknown type, empty encoding */ maxTextWidth;
    void /* unknown type, empty encoding */ contentFont;
    void /* unknown type, empty encoding */ lineHeight;
    void /* unknown type, empty encoding */ baselineOffset;
    void /* unknown type, empty encoding */ defaultTextColor;
    void /* unknown type, empty encoding */ $__lazy_storage_$_defaultParagraphStyle;
    void /* unknown type, empty encoding */ characterStates;
    void /* unknown type, empty encoding */ displayLink;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)updateAnimation;

@end
