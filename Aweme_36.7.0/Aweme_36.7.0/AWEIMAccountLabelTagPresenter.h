@class UIColor, NSString, UIFont;

@interface AWEIMAccountLabelTagPresenter : AWEIMCellPresenterBase

@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) NSString *officialAccountText;
@property (retain, nonatomic) UIFont *textFont;
@property (nonatomic) long long tagStyle;

- (long long)componentViewPosition;
- (id)createViewInCell:(id)a0;
- (void)updateView:(id)a0;
- (long long)cellAccessibilityOrder;
- (void).cxx_destruct;

@end
