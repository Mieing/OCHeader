@class UIImage;

@interface AWEIMChatCellIncentivePresenter : AWEIMCellPresenterBase <AWEIMChatCellComponentAccessibility>

@property (nonatomic, retain) UIImage *image;

- (long long)componentViewPosition;
- (id)createViewInCell:(id)a0;
- (void)updateView:(id)a0;
- (long long)cellAccessibilityOrder;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
