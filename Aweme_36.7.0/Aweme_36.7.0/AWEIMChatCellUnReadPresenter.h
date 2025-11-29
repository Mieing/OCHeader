@interface AWEIMChatCellUnReadPresenter : AWEIMCellPresenterBase

@property (nonatomic) long long colorStyle;
@property (nonatomic) long long type;
@property (nonatomic) long long unreadCount;
@property (nonatomic) BOOL enableMsgTabUIOpt;
@property (nonatomic) BOOL isCenterPosition;

- (long long)componentViewPosition;
- (id)createViewInCell:(id)a0;
- (void)updateView:(id)a0;
- (long long)cellAccessibilityOrder;
- (void)p_updateBackgroundColor:(id)a0;

@end
