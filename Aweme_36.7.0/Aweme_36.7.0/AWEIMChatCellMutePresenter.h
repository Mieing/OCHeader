@interface AWEIMChatCellMutePresenter : AWEIMCellPresenterBase

@property (nonatomic) BOOL enableMsgTabUIOpt;

- (long long)componentViewPosition;
- (id)createViewInCell:(id)a0;
- (long long)cellAccessibilityOrder;

@end
