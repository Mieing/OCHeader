@class NSAttributedString;

@interface AWEIMChatCellMentionLabelPresenter : AWEIMCellPresenterBase

@property (copy, nonatomic) NSAttributedString *mentionContent;

- (long long)componentViewPosition;
- (id)createViewInCell:(id)a0;
- (void)updateView:(id)a0;
- (long long)cellAccessibilityOrder;
- (void).cxx_destruct;

@end
