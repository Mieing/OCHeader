@class UIFont, NSAttributedString;

@interface AWEIMChatCellHintPresenter : AWEIMCellPresenterBase

@property (retain, nonatomic) UIFont *font;
@property (copy, nonatomic) NSAttributedString *content;
@property (nonatomic) long long lineBreakMode;

- (long long)componentViewPosition;
- (id)createViewInCell:(id)a0;
- (void)updateView:(id)a0;
- (long long)cellAccessibilityOrder;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
