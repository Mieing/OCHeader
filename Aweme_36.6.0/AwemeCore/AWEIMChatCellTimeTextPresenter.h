@class NSString, NSAttributedString;

@interface AWEIMChatCellTimeTextPresenter : AWEIMCellPresenterBase

@property (copy, nonatomic) NSString *timeText;
@property (copy, nonatomic) NSAttributedString *content;
@property (nonatomic) BOOL enableMsgTabUIOpt;

- (long long)componentViewPosition;
- (id)createViewInCell:(id)a0;
- (void)updateView:(id)a0;
- (long long)cellAccessibilityOrder;
- (void).cxx_destruct;

@end
