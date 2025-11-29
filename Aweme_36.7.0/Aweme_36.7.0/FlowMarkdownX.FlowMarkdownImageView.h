@interface FlowMarkdownX.FlowMarkdownImageView : UIView <UIContextMenuInteractionDelegate> {
    void /* unknown type, empty encoding */ debugClick;
    void /* unknown type, empty encoding */ botID;
    void /* unknown type, empty encoding */ markdownService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_retryButton;
    void /* unknown type, empty encoding */ imageConverView;
    void /* unknown type, empty encoding */ onTapImage;
    void /* unknown type, empty encoding */ hasSetupSubviews;
    void /* unknown type, empty encoding */ imageInfo;
    void /* unknown type, empty encoding */ imageLoadToken;
}

- (void)retryClick:(id)a0;
- (void)_tapGestureClick:(id)a0;
- (void).cxx_destruct;
- (id)contextMenuInteraction:(id)a0 previewForHighlightingMenuWithConfiguration:(id)a1;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;

@end
