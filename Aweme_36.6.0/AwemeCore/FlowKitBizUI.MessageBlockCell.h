@interface FlowKitBizUI.MessageBlockCell : FlowKitBizUI.MessageCell <UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_normalRefView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_blockContainter;
    void /* unknown type, empty encoding */ typingIndicator;
    void /* unknown type, empty encoding */ actionView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_errorBottomLabel;
    void /* unknown type, empty encoding */ tapGesture;
    void /* unknown type, empty encoding */ onTap;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ containerItemClickAction;
    void /* unknown type, empty encoding */ containerItemShowAction;
    void /* unknown type, empty encoding */ blockCellExposed;
    void /* unknown type, empty encoding */ containerMarkdownConfigAction;
    void /* unknown type, empty encoding */ researchCopyAction;
    void /* unknown type, empty encoding */ researchExportAction;
}

- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)handleTap;

@end
