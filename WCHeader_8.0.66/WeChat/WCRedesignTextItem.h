@class WCUITextField, UIButton, NSString, MMUIButton, MMUILabel;

@interface WCRedesignTextItem : WCRedesignBaseItem <UITextFieldDelegate>

@property (retain, nonatomic) WCUITextField *textField;
@property (retain, nonatomic) MMUIButton *clearButton;
@property (retain, nonatomic) MMUILabel *prefixLabel;
@property (retain, nonatomic) UIButton *button;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) BOOL canButtonBreakLine;
@property (nonatomic) unsigned long long maxLength;
@property (nonatomic) BOOL isWarningStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mainRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textField:(id)a1;

- (id)initWithTitle:(id)a0 tip:(id)a1 key:(id)a2;
- (void)initTextField;
- (void)setM_tip:(id)a0;
- (void)setEnable:(BOOL)a0;
- (id)getValue;
- (void)becomeFirstResponder;
- (void)resignFirstResponder;
- (void)onLayoutContentViewSubviews;
- (BOOL)shouldBreakLineForMaxContentWidth:(double)a0 itemWidth:(double)a1;
- (double)buttonWidthForCalLineBreak;
- (void)setPrefix:(id)a0 color:(id)a1;
- (id)prefix;
- (void)setSuffixButton:(id)a0 canBreakLine:(BOOL)a1 completion:(id /* block */)a2;
- (void)updatePlaceholder;
- (void)onTapClearButton;
- (void)onTapButton;
- (void)textFieldDidEndOnExit:(id)a0;
- (void)textFieldEditingChanged:(id)a0;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void).cxx_destruct;

@end
