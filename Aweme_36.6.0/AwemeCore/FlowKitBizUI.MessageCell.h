@interface FlowKitBizUI.MessageCell : UICollectionViewCell {
    void /* unknown type, empty encoding */ identifer;
    void /* unknown type, empty encoding */ bubbleView;
    void /* unknown type, empty encoding */ bubbleViewCornerRadius;
    void /* unknown type, empty encoding */ statusView;
    void /* unknown type, empty encoding */ selectView;
    void /* unknown type, empty encoding */ selectStatus;
    void /* unknown type, empty encoding */ processingIndicatorView;
    void /* unknown type, empty encoding */ debbugingAction;
    void /* unknown type, empty encoding */ handleSelectCell;
    void /* unknown type, empty encoding */ userInterfaceStyleBlock;
    void /* unknown type, empty encoding */ bubbleLayoutAnimation;
    void /* unknown type, empty encoding */ bubbleStreamingAnimation;
    void /* unknown type, empty encoding */ isAnimating;
    void /* unknown type, empty encoding */ needAutoLayout;
    void /* unknown type, empty encoding */ layoutInfo;
    void /* unknown type, empty encoding */ isLongPressEnable;
    void /* unknown type, empty encoding */ customMenuConfiguration;
    void /* unknown type, empty encoding */ onMenuDisplayStatusChanged;
    void /* unknown type, empty encoding */ $__lazy_storage_$_longPressGesture;
    void /* unknown type, empty encoding */ $__lazy_storage_$_menuPopView;
}

- (void)adapterToSnapshotWithCtx:(struct CGContext { } *)a0;
- (double)heightForSnapshot;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (void)longPressRecognized:(id)a0;

@end
