@interface FlowKitBizUI.PictureClipView : UIView {
    void /* unknown type, empty encoding */ cornerTouchWidth;
    void /* unknown type, empty encoding */ cornerImageWidth;
    void /* unknown type, empty encoding */ edgeTouchWidth;
    void /* unknown type, empty encoding */ hasModified;
    void /* unknown type, empty encoding */ currentTouchRegion;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ indexLabelWidth;
    void /* unknown type, empty encoding */ indexLabelHeight;
    void /* unknown type, empty encoding */ index;
    void /* unknown type, empty encoding */ orientation;
    void /* unknown type, empty encoding */ $__lazy_storage_$_leftTopCorner;
    void /* unknown type, empty encoding */ $__lazy_storage_$_leftTopCornerImage;
    void /* unknown type, empty encoding */ $__lazy_storage_$_rightTopCorner;
    void /* unknown type, empty encoding */ $__lazy_storage_$_rightTopCornerImage;
    void /* unknown type, empty encoding */ $__lazy_storage_$_rightBottomCorner;
    void /* unknown type, empty encoding */ $__lazy_storage_$_rightBottomCornerImage;
    void /* unknown type, empty encoding */ $__lazy_storage_$_leftBottomCorner;
    void /* unknown type, empty encoding */ $__lazy_storage_$_leftBottomCornerImage;
    void /* unknown type, empty encoding */ $__lazy_storage_$_leftLine;
    void /* unknown type, empty encoding */ $__lazy_storage_$_topLine;
    void /* unknown type, empty encoding */ $__lazy_storage_$_rightLine;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bottomLine;
    void /* unknown type, empty encoding */ $__lazy_storage_$_maskLayer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_indexLabel;
    void /* unknown type, empty encoding */ _isCornerHidden;
    void /* unknown type, empty encoding */ _isSelected;
    void /* unknown type, empty encoding */ touchBeganPoint;
    void /* unknown type, empty encoding */ firstMove;
}

- (void).cxx_destruct;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
