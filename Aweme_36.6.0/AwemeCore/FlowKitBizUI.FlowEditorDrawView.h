@interface FlowKitBizUI.FlowEditorDrawView : UIView {
    void /* unknown type, empty encoding */ didDrawImage;
    void /* unknown type, empty encoding */ drawStatusChanged;
    void /* unknown type, empty encoding */ actionService;
    void /* unknown type, empty encoding */ tracker;
    void /* unknown type, empty encoding */ imageSize;
    void /* unknown type, empty encoding */ currentDrawColor;
    void /* unknown type, empty encoding */ drawPaths;
    void /* unknown type, empty encoding */ drawLineWidth;
    void /* unknown type, empty encoding */ defaultDrawPathWidth;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tapGes;
    void /* unknown type, empty encoding */ $__lazy_storage_$_panGes;
    void /* unknown type, empty encoding */ $__lazy_storage_$_drawingImageView;
}

- (void)drawAction:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (void)tapAction:(id)a0;

@end
