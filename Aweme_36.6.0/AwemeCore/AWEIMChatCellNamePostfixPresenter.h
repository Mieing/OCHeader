@class NSString;

@interface AWEIMChatCellNamePostfixPresenter : AWEIMCellPresenterBase

@property (copy, nonatomic) NSString *postfixText;

- (long long)componentViewPosition;
- (id)createViewInCell:(id)a0;
- (void)updateView:(id)a0;
- (long long)cellAccessibilityOrder;
- (void).cxx_destruct;

@end
