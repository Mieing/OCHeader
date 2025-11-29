@class NSString, NSAttributedString;

@interface AWEIMChatCellHighlightHintLabelPresenter : AWEIMCellPresenterBase

@property (retain, nonatomic) NSAttributedString *attributedContent;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) BOOL disableHighlight;

- (long long)componentViewPosition;
- (id)createViewInCell:(id)a0;
- (void)updateView:(id)a0;
- (long long)cellAccessibilityOrder;
- (void).cxx_destruct;

@end
