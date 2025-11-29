@class BaseChatCellView, UIView;

@interface ChatTableViewCell : MultiSelectTableViewCell {
    BOOL m_willBeDisplayed;
    BOOL m_didEndDisplayed;
}

@property (retain, nonatomic) UIView *selectionHighlightView;
@property (copy, nonatomic) id /* block */ m_accessibilityElementsHiddenBlock;
@property (readonly, nonatomic) BaseChatCellView *cellView;

- (void)setViewModel:(id)a0;
- (void)setDelegate:(id)a0;
- (void)willBeDisplayed;
- (void)didEndDisplayed;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)accessibilityElementsHidden;
- (void)setHidden:(BOOL)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)setSelectionHighlighHidden:(BOOL)a0 animate:(BOOL)a1;
- (void)enumerateCurrentMsgCells:(id /* block */)a0;
- (void).cxx_destruct;

@end
