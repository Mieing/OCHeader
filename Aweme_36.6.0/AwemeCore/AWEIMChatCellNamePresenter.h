@class NSString, NSAttributedString;

@interface AWEIMChatCellNamePresenter : AWEIMCellPresenterBase

@property (copy, nonatomic) NSAttributedString *nameAttrStr;
@property (retain, nonatomic) NSString *nameText;
@property (retain, nonatomic) NSAttributedString *truncationToken;

+ (BOOL)enableTextAsyncDisplay;

- (long long)componentViewPosition;
- (id)createViewInCell:(id)a0;
- (void)updateView:(id)a0;
- (long long)cellAccessibilityOrder;
- (void).cxx_destruct;

@end
