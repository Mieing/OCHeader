@interface AWEIMChatCellOnLineDotPresenter : AWEIMCellPresenterBase

@property (nonatomic) double scale;

- (long long)componentViewPosition;
- (id)createViewInCell:(id)a0;
- (void)updateView:(id)a0;
- (long long)cellAccessibilityOrder;

@end
