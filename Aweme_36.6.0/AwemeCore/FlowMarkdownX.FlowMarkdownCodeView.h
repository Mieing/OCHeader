@interface FlowMarkdownX.FlowMarkdownCodeView : UIView <UIContextMenuInteractionDelegate> {
    void /* unknown type, empty encoding */ markdownString;
    void /* unknown type, empty encoding */ debugClick;
    void /* unknown type, empty encoding */ subItemCopyClick;
    void /* unknown type, empty encoding */ shouldShowCustomMenu;
    void /* unknown type, empty encoding */ fullscreenPreviewBlock;
    void /* unknown type, empty encoding */ markdownService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_textView;
    void /* unknown type, empty encoding */ backView;
    void /* unknown type, empty encoding */ topOperateView;
    void /* unknown type, empty encoding */ textSelectedBlock;
    void /* unknown type, empty encoding */ listItemPreLabel;
    void /* unknown type, empty encoding */ hasSetupSubviews;
    void /* unknown type, empty encoding */ fullScreenDispaly;
    void /* unknown type, empty encoding */ codeSource;
}

- (void).cxx_destruct;
- (id)contextMenuInteraction:(id)a0 previewForHighlightingMenuWithConfiguration:(id)a1;
- (id)contextMenuInteraction:(id)a0 previewForDismissingMenuWithConfiguration:(id)a1;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;

@end
