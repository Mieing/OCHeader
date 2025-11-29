@interface AWEMusicStreamingImpl.LunaPlaylistBottomMaskView : UIView {
    void /* unknown type, empty encoding */ $__lazy_storage_$_blockerLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_p_makeMaskLayer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_p_maskView;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

+ (double)maskHeight;
+ (double)blockLabelHeight;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (void)updateText:(long long)a0;

@end
