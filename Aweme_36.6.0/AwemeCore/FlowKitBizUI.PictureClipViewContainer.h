@interface FlowKitBizUI.PictureClipViewContainer : UIView {
    void /* unknown type, empty encoding */ supportedModes;
    void /* unknown type, empty encoding */ initMode;
    void /* unknown type, empty encoding */ hollowCornerRadius;
    void /* unknown type, empty encoding */ deviceOrientation;
    void /* unknown type, empty encoding */ contentOrientation;
    void /* unknown type, empty encoding */ rawClipRegion;
    void /* unknown type, empty encoding */ curClipRegionNormalized;
    void /* unknown type, empty encoding */ allClipRegionNormalized;
    void /* unknown type, empty encoding */ rawImage;
    void /* unknown type, empty encoding */ rawImageRotated;
    void /* unknown type, empty encoding */ contentImageView;
    void /* unknown type, empty encoding */ singleClipView;
    void /* unknown type, empty encoding */ clipViews;
    void /* unknown type, empty encoding */ rotateQuadrants;
    void /* unknown type, empty encoding */ modifyCallback;
    void /* unknown type, empty encoding */ switchModeCallback;
    void /* unknown type, empty encoding */ rotating;
    void /* unknown type, empty encoding */ containerSize;
    void /* unknown type, empty encoding */ hintText;
    void /* unknown type, empty encoding */ switchViewWidth;
    void /* unknown type, empty encoding */ switchViewHeight;
    void /* unknown type, empty encoding */ currentMode;
    void /* unknown type, empty encoding */ selectedIndex;
    void /* unknown type, empty encoding */ $__lazy_storage_$_innerScrollView;
    void /* unknown type, empty encoding */ animated;
    void /* unknown type, empty encoding */ animateView;
    void /* unknown type, empty encoding */ animateFrame;
    void /* unknown type, empty encoding */ realClipRegion;
    void /* unknown type, empty encoding */ $__lazy_storage_$_fillLayer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_maskLayer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_hintView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_switchModeLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_switchModeIcon;
    void /* unknown type, empty encoding */ singleHint;
    void /* unknown type, empty encoding */ multiHint;
    void /* unknown type, empty encoding */ _showSwitch;
    void /* unknown type, empty encoding */ $__lazy_storage_$_switchModeView;
    void /* unknown type, empty encoding */ _isClipViewHidden;
}

- (void)switchMode;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
