@class YYLabel, LSIMChatDetailBaseCellVM, UIView;
@protocol LSIMMessageTextCellVM;

@interface LSIMMessageTextCellView : LSIMChatDetailBaseCellView

@property (retain, nonatomic) UIView *bubbleView;
@property (retain, nonatomic) YYLabel *contentLabel;
@property (retain, nonatomic) LSIMChatDetailBaseCellVM<LSIMMessageTextCellVM> *cellVM;
@property (retain, nonatomic) YYLabel *aiTipLabel;

- (void)configWithCellVM:(id)a0;
- (void)removeAITipLabel;
- (void)addAITipLabelWithText:(id)a0;
- (void)handleContainerLongPressGesture:(id)a0;
- (id)makeMessageAttributedString;
- (double)labelContentWidth;
- (void)copyCellText:(id)a0;
- (void)setupContainerView;
- (void).cxx_destruct;
- (BOOL)canBecomeFirstResponder;

@end
