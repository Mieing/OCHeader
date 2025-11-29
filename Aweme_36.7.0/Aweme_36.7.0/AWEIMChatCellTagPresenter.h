@class NSString;

@interface AWEIMChatCellTagPresenter : AWEIMCellPresenterBase

@property (retain, nonatomic) NSString *tagString;

- (long long)componentViewPosition;
- (id)createViewInCell:(id)a0;
- (void)updateView:(id)a0;
- (long long)cellAccessibilityOrder;
- (void).cxx_destruct;

@end
