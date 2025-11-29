@class NSString, UITextField, UIColor;

@interface AWESearchTopBarTextInputElement : AWESearchTopBarBaseElement <UITextFieldDelegate>

@property (retain, nonatomic) UITextField *textField;
@property (nonatomic) BOOL needMoveCursorToEnd;
@property (copy, nonatomic) NSString *originalPlaceholder;
@property (retain, nonatomic) UIColor *originTextColor;
@property (nonatomic) long long pagePosition;
@property (nonatomic) long long currentUIThemeStyle;
@property (nonatomic) BOOL isActuallyEditing;
@property (copy, nonatomic) NSString *placeHolder;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIColor *textColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindAction;
- (void)updateUILayout;
- (BOOL)enableFixSugDuplicateShow;
- (void)closeKeyboard;
- (void)updateElementsLayoutWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)hostWillExecuteSearch;
- (void)hostMiddlePageDidShowWithInteractionType:(long long)a0;
- (void)hostResultPageDidShow;
- (void)hostSugPageDidShowWithModeStyle:(long long)a0 position:(long long)a1;
- (void)configNewSearchTheme:(unsigned long long)a0 currentModernFeedUITheme:(unsigned long long)a1 uiThemeStyle:(long long)a2;
- (void)forceUseUniversalStyle:(BOOL)a0;
- (void)moveCursorToEnd:(id)a0;
- (void)updateGradientWithText:(id)a0;
- (void)disableTextTruncation;
- (void)updatePlaceholderUIWith:(id)a0;
- (id)setupGradientLayerWithTopBarFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)handleInputElementTap;
- (void)handleTextDidBeginEditing:(id)a0;
- (void)handleTextDidEndEditing:(id)a0;
- (void)handleTextDidChange:(id)a0;
- (void)handleKeyboardSearchButtonClicked;
- (void).cxx_destruct;
- (BOOL)textFieldShouldEndEditing:(id)a0;
- (void)showKeyboard;
- (void)textFieldDidEndEditing:(id)a0;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (BOOL)textFieldShouldClear:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)layoutSubviews;
- (void)textFieldDidChangeSelection:(id)a0;
- (void)setupUI;
- (void)textFieldDidChange:(id)a0;
- (void)hostViewDidLayoutSubviews;
- (void)setTextFont:(id)a0;
- (id)initWithDelegate:(id)a0 context:(id)a1;
- (BOOL)keyboardShowing;

@end
