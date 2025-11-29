@class UIColor;

@interface AWEIMChatCellFansIndicatorPresenter : AWEIMCellPresenterBase

@property (copy, nonatomic) UIColor *bgColor;

- (long long)componentViewPosition;
- (id)createViewInCell:(id)a0;
- (void)updateView:(id)a0;
- (long long)cellAccessibilityOrder;
- (void)p_updateBorderColor;
- (void).cxx_destruct;

@end
