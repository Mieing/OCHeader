@class UILongPressGestureRecognizer, BTBaseRecommendMsgCellViewModel, UIView, MMUIButton, BTRecommendSectionData;

@interface BTBaseRecommendMsgCellView : BTBaseItemCellView {
    UIView *m_highlightMaskView;
    UILongPressGestureRecognizer *m_longPressGestureRecognizer;
    UIView *m_separateLine;
}

@property (readonly, nonatomic) BTRecommendSectionData *sectionData;
@property (readonly, nonatomic) BTBaseRecommendMsgCellViewModel *viewModel;
@property (readonly, nonatomic) MMUIButton *feedbackBtn;

- (id)initWithViewModel:(id)a0;
- (void)setViewModel:(id)a0;
- (void)initSubviews;
- (void)onUpdateViewModel;
- (void)layoutSubviews;
- (void)layoutContentView;
- (unsigned long long)cellRectCorner;
- (void)initFeedbackBtn;
- (void)onClickFeedbackBtn;
- (void)initSeparateLine;
- (void)initHighlightMaskView;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)needHighlightLayer;
- (void)initGestureRecognizer;
- (void)handleLongPress:(id)a0;
- (void).cxx_destruct;

@end
