@class NSString, UIColor, UITextField;

@interface AWESearchTopBarInputElement : AWESearchTopBarBaseElement <UITextFieldDelegate>

@property (nonatomic) BOOL needMoveCursorToEnd;
@property (copy, nonatomic) NSString *originalPlaceholder;
@property (nonatomic) double textFieldLastRightMargin;
@property (nonatomic) BOOL isActuallyEditing;
@property (copy, nonatomic) NSString *placeHolder;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UITextField *textField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;

- (void)bindAction;
- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (BOOL)isCapsuleShown;
- (BOOL)enableFixSugDuplicateShow;
- (BOOL)p_enableSearchBarBigMode;
- (void)updateElementsLayoutWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configNewSearchTheme:(unsigned long long)a0 currentModernFeedUITheme:(unsigned long long)a1 uiThemeStyle:(long long)a2;
- (void)keyboardSearchButtonClicked;
- (void)configNewSearchBarAreaWithTheme:(unsigned long long)a0;
- (void)moveCursorToEnd:(id)a0;
- (void)inputElementTap;
- (BOOL)p_enableShowScanButton;
- (BOOL)p_enableShowMagnifier;
- (void)updateTextFieldMargin;
- (void)updateGradientWithText:(id)a0;
- (void)disableTextTruncation;
- (void)updatePlaceholderUIWith:(id)a0;
- (id)setupGradientLayerWithTopBarFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (BOOL)textFieldShouldEndEditing:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (BOOL)textFieldShouldClear:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)layoutSubviews;
- (void)textFieldDidChangeSelection:(id)a0;
- (void)setupUI;
- (void)textFieldDidChange:(id)a0;
- (void)setTextFont:(id)a0;
- (id)bgColor;
- (void)setBgColor:(id)a0;
- (id)initWithDelegate:(id)a0 context:(id)a1;

@end
