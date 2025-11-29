@class UIImageView, BTShowMoreItemCellViewModel, RichTextView, UIView;

@interface BTShowMoreItemCellView : BTBaseItemCellView {
    RichTextView *m_tipsLabel;
    UIImageView *m_dropDownIcon;
    UIView *m_separateLine;
    UIView *m_highlightMaskView;
}

@property (readonly, nonatomic) BTShowMoreItemCellViewModel *viewModel;

- (id)initWithViewModel:(id)a0;
- (void)setViewModel:(id)a0;
- (void)initContentView;
- (void)initSubviews;
- (void)updateLabelStyles;
- (void)initHighlightMaskView;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
